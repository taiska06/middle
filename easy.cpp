#include "easy.h"
#include <iostream>
using namespace std;
void itc_name(){
cout<<"Taisia" << endl;
}
void itc_fio(){
cout<<"Apakina" << endl<<"Germanovna"<< endl;
}

int itc_abc(int num){
if (num < 0)
    return (num*(-1));
return(num);

}
double itc_fabs(double num){
if (num < 0)
    return (num*(-1));
return(num);

}


int itc_revnbr(int num) {
    int a = num / 100;
    int b = num / 10 % 10;
    int c = num % 10;
    return c * 100 + b * 10 + a;
}
