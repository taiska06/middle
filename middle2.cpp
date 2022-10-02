#include "middle.h"
using namespace std;
int itc_max_num(long long number){
    int max,n;
    max=0;
    n=0;
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
    min=9;
    n=0;
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
    while (number > 0) {
        a = a* 10 + number % 10;
        number = number / 10;
    }
    return a;
}
bool itc_mirror_num(long long number) {
    return itc_rev_num(number) == number;
}
int itc_mirror_count(long long number){
  int a;
  a = 0;
    for (int i = 0; i < number; ++i)
        if (itc_mirror_num(i))
            a=a+1;
    return a;


}











