

#include "middle.h"
using namespace std;
long long itc_bin_num(long long number) {
    int a,b;
     a = 0;
     b = 1;
    while (number > 0) {
         a = a + b * (number % 2);
         b=b* 10;
         number = number / 2;
    }
    return a;
}

long long itc_oct_num(long long number){

 int a,b;
     a = 0;
     b = 1;
    while (number > 0) {
         a = a + b * (number % 8);
         b=b* 10;
         number = number / 8;
    }
    return a;

}
int itc_rev_bin_num(long long number) {
     int a,b,c;
     a = 0;
     b = 1;
     c=0;
    while (number > 0) {
        c =number % 10;
        if (c >= 2)
            return -1;
        a = a+(c * b);
        b = b*2;
        number = number/10;
    }
    return a;
}
int itc_rev_oct_num(long long number) {
     int a,b,c;
     a = 0;
     b = 1;
     c=0;
    while (number > 0) {
        c =number % 10;
        if (c >= 8)
            return -1;
        a = a+(c * b);
        b = b*8;
        number = number/10;
    }
    return a;
}
