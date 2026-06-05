#include "testlib.h"

int main(int argc, char *argv[]) {
    registerValidation(argc, argv); 
    int a = inf.readInt(-100, 100, "a");
    inf.readSpace();
    int b = inf.readInt(-100, 100, "b");
    inf.readEoln();
    inf.readEof();
    exit(42);
    return 0;
}
