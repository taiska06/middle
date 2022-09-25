#include "eazy2.h"

using namespace std;
int itc_max(int a, int b) {
    if (a > b)
        return a;
 return b;
}
int itc_min(int a, int b) {
    if (a<b)
        return a;
    return b;
}
double itc_fmax(double a, double b) {
     if (a>b)
        return a;
    return b;
}
double itc_fmin(double a, double b) {
    if (a<b)
        return a;
    return b;
}
int itc_sqrt(int num) {
    for (int i = 0; i * i <= num; ++i)
        if (i * i == num)
            return i;
    return -1;
}
