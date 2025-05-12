TEST_BUILD_DIR := build/tests

build: main.c
	mkdir -p build
	gcc main.c operations.c -I include/ -o build/main

run: build
	./build/main

clean:
	rm -rf build/

test: tests/
	mkdir -p ${TEST_BUILD_DIR}
	gcc -fprofile-arcs -ftest-coverage ./tests/test_operations.c operations.c ./Unity/src/unity.c -I ./include/ -I ./Unity/src/ \
	-o ${TEST_BUILD_DIR}/test_operations
	./${TEST_BUILD_DIR}/test_operations

test_coverage: test
	gcov --object-directory ${TEST_BUILD_DIR} --no-output test_operations-operations
