#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <emscripten/emscripten.h>

int main(int argc, char **argv) {
    printf("WebAssembly module loaded\n");
}

int EMSCRIPTEN_KEEPALIVE rolling() {
    srand(time(NULL));
    return rand() % 6 + 1;
}
