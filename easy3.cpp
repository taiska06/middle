#include"easy3.h"
#define PI 3.14;
int itc_skv(int num) {
    if (num < 0)
        return -1;
    return num * num;
}
int itc_spr(int num,int num1) {
    if (num < 0 || num1 < 0 )
        return -1;
    return num * num1;
}
int itc_str(int a, int b, int c) {
    if (a + b <= c || a + c <= b || b + c <= a || a <= 0 || b <= 0 || c <= 0)
    return -1;
    double p = (a + b + c) / 2;
    return ((p * (p - a) * (p - b) * (p - c)));
}

double itc_scir(int r) {
    if (r < 0)
        return -1;
    return r * r * PI;
}
