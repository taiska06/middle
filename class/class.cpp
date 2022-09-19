#include "class.h"
using namespace std;

 void itc_num_print(int number){
    cout << number;

 }
 int itc_len_num(long long number){
 while (number > 0){
    i=number%10;
    i=i+1;
    number=number/10;

 }
 cout<<i;
 }

 int itc_sum_num(long long number){
 while (number > 0){
    i=number%10;
    sum=sum+i;
    number=number/10;

 }
 cout<<sum;
 }
 int itc_multi_num(long long number){
 while (number > 0){
    i=number%10;
    sum=sum*i;
    number=number/10;

 }
 cout<<sum;
 }

