#include <iostream>
#include <cmath>
using namespace std;
int OddishOrEvenish(int num);
int main(){
int num;
cout<<"Enter the five digit number:"<<endl;
cin>>num;

OddishOrEvenish(num);

}
int OddishOrEvenish(int num){
int digit1,digit2,digit3,digit4,digit5,sum;
digit1=num/10000;
digit2=(num/1000)%10;
digit3=(num/100)%10;
digit4=(num/10)%10;
digit5=num%10;

sum=digit1+digit2+digit3+digit4+digit5;
if(sum %2==0){
cout<<"Evenish"<<endl;
}else{
cout<<"Oddish"<<endl;
}

}



