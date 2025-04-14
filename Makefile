build: main.c
	mkdir -p build
	gcc main.c -o build/main

build_2_1:
	mkdir -p build
	gcc lab2/program1/main.c -o build/lab_2_1

run: build
	./build/main

run_2_1: build
	./build/lab_2_1

clean:
	rm -rf build/
