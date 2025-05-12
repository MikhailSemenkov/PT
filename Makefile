build: main.c
	mkdir -p build
	gcc main.c operations.c -I include/ -o build/main

run: build
	./build/main

clean:
	rm -rf build/
