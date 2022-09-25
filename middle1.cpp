

#include "middle.h"
using namespace std;

 void itc_num_print(int number){
    cout << number<<endl;

 }
int itc_len_num(long long number){
     int d;
     d=0;
 while (number != 0){
    number=number/10;
    d=d+1;
}
cout<<d<<endl;
}
int itc_sum_num(long long number){
     int i,sum;
      i=0;
      sum=0;
 while (number != 0){
    i=number%10;
    sum=sum+i;
    number=number/10;

 }
 cout<<sum<<endl;
 }
 int itc_multi_num(long long number){
     int i,sum;
      i=0;
      sum=1;
 while (number > 0){
    i=number%10;
    sum=sum*i;
    number=number/10;

 }
 cout<<sum<<endl;
 }
 int itc_null_count(long long number){
 int kol,c;
 kol=0;
 while(number != 0){
    c=number%10;
    if(c==0){
        kol=kol+1;

    }
 number=number/10;
 }
 cout<<kol;
 }
