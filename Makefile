build:
	mkdir -p build
	gcc main.c -o build/main

run: build
	./build/main

clean:
	rm -rf build/
