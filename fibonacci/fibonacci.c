#include <stdio.h>
#include <emscripten/emscripten.h>

int main(int argc, char **argv) {
    printf("WebAssembly module is loaded\n");
}

int EMSCRIPTEN_KEEPALIVE fibonacci(value) {
    if (value <= 1) {
        return 1;
    }

    return fibonacci(value - 1) + fibonacci(value - 1);
}
