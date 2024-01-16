#include <openthread/heap.h>

int main(int argc, char* argv[]) {
    return ((int) otHeapCAlloc(1, 4));
}
