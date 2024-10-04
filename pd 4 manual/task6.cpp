#include <iostream>
using namespace std;
void result(int num);
main(){
int num;
cout<<"Enter the marks:"<<endl;
cin>>num;
    result(num);
}
void result(int num){
if(num>=51)
{
cout<<"Pass"<<endl;

}
if(num<=50)
{

cout<<"Fail"<<endl;
}
}
