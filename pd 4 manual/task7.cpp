#include <iostream>
using namespace std;
void number(int num);
main(){
int num;
cout<<"Enter the number:"<<endl;
cin>>num;
  number(num);

}

void number(int num){


 if(num%2==0){
   cout<<" Even"<<endl;

}
if(num%2!=0){
  cout<<"Odd"<<endl;

}

}