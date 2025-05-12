#include "operations.h"

int my_add(int var1, int var2) {
    return var1 + var2;
}

int my_sub(int var1, int var2) {
    return var1 - var2;
}

int my_mul(int var1, int var2) {
    return var1 * var2;
}

double my_div(int var1, int var2) {
    return (double)var1 / (double)var2;
}

int my_pow(int var, int power) {
    int res = 1;
    for (int i = 0; i < power; i++) {
        res *= var;
    }
    return res;
}