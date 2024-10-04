#include <iostream>
using namespace std;

void add(int number1, int number2);
void subtraction(int number1, int number2);
void multiplication(int number1, int number2);
void divide(int number1, int number2);
   main(){
int number1,number2;
char op;
cout<<"Enter the first number:"<<endl;
cin>>number1;
cout<<"Enter the second number:"<<endl;
cin>>number2;
cout<<"Enter the operator(+,-,/,*):"<<endl;
cin>>op;
if(op== '+'){
   add(number1,number2);
}
if(op=='-'){
   subtraction(number1,number2);
}
if (op=='*'){
   multiplication(number1,number2);  
}
if(op=='/'){
   divide(number1,number2);
}

}
void add(int number1, int number2){
cout<<"Sum is "<<number1+number2<<endl;
}
void subtraction(int number1, int number2){
cout<< "Subtract is: "<<number1-number2<<endl;
}
void multiplication(int number1, int number2){
  cout<<" Multiplication is: "<<number1*number2<<endl;
}
void divide(int number1, int number2){
cout<<"Division is: "<<number1/number2<<endl;

}