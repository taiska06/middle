

#include "middle.h"
using namespace std;
int itc_second_max_num(long long number) {
    if (number / 10 == 0)
        return -1;
    int max,b,i,c;
    c=0;
   max = itc_max_num(number);
    b = -1;
     if (number/10==0){
        return -1;
     }
     if (number<0){
        number=number*-1;
     }
    while (number > 0) {
        i =number % 10;
        if (i == max){
           c++;
        }
        if (i > b && i != max)
            b = i;
        number = number / 10;

    }
    if(c>1){
        return max;
    }
    else{
        return b;
    }
}
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
