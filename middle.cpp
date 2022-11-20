#include "middle.h"
using namespace std;

int itc_second_simple_max_num(long long number) {
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
        return -1;
    }
    else{
        return b;
    }

}


