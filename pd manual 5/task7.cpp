#include <iostream>
#include <cmath>
using namespace std;
int reverse(int n);
int main(){
int n;
cout<<"Enter the three digit number:"<<endl;
cin>>n;
reverse(n);
}
int reverse(int n){
int num1,num2,num3;
 num1=n/100;
 num2=(n/10)%10;
 num3= n%10;

if(num1==num3){
cout<<"The number is symmetrical."<<endl;
}else{
cout<<"The number is not symmetrical."<<endl;
}

}




