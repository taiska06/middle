#include "middle2.h"
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
	cout<<max<<endl;
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
	cout<<min<<endl;
}
int itc_rev_num(long long number){
    int n;
while (number > 0){
		n = number % 10;
        cout<<n;
		number=number/10;

	}

}









