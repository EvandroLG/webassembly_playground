compile:
	emcc -O3 -s WASM=1 -s EXTRA_EXPORTED_RUNTIME_METHODS='["cwrap"]' fibonacci.c -o index.js

run:
	python -m SimpleHTTPServer 9000
