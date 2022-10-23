#include "middle.h"
using namespace std;
int itc_max_num(long long number){
    int max,n;
    max=-1;
    n=0;
    if (number==0){
    return 0;
     }
     if (number<0){
     number=number*-1;
     }
    while (number > 0){
       n = number % 10;
	 if (n > max){
           max = n;
             }
	number=number/10;
           }
	return max;
           }
int itc_min_num(long long number){
    int min,n;
    min=10;
    n=0;
     if (number==0){
        return 0;
     }
   if (number<0){
       number=number*-1;
     }
while (number > 0){
	n = number % 10;
	if (n < min){
           min = n;
            }
number=number/10;
           }
	return min;
}
int itc_rev_num(long long number) {
    int a = 0;
	if(number<0){
            number = number *(-1);
	}
    while (number > 0) {
        a = a* 10 + number % 10;
        number = number / 10;
    }
    int c = itc_len_num(a);
     return c;
	}

bool itc_mirror_num(long long number) {
    return itc_rev_num(number) == number;
}











