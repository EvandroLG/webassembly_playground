#include <stdio.h>
#include <emscripten/emscripten.h>

int main(int argc, char **argv) {
    printf("WebAssembly module is loaded\n");
}

int EMSCRIPTEN_KEEPALIVE fibonacci(int value) {
    if (value < 2) {
        return value;
    }

    return fibonacci(value - 1) + fibonacci(value - 2);
}
