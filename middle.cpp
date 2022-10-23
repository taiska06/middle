#include "middle.h"



int itc_second_simple_max_num(long long number) {
    if (number / 10 == 0)
        return -1;
    int max,b,i;
   max = itc_max_num(number);
    b = -1;
     if (number<0){
        number=number*-1;
     }
    while (number > 0) {
        i =number % 10;
         if (i == max)
            return -1;
        if (i > b && i != max)
            b = i;
        number = number / 10;
    }
    return b;
}



