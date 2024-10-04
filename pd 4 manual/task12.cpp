#include <iostream>
using namespace std;
void discount(string day,int purchase,int payable);
main(){
while(true){
int purchase,payable,payablex;
string day;
cout<<"Enter the day:"<<endl;
cin>>day;
cout<<"Enter the total purchase amount:"<<endl;
cin>>purchase;

  discount(day,purchase,payable);
 
}
}
void discount(string day,int purchase,int payable){

if(day=="sunday"){
payable=purchase-(purchase/10);
cout<<"Payable amount:"<<payable<<endl;
}
if(day!="sunday"){
payable=purchase-(purchase/20);
cout<<"Payable amount:"<<payable<<endl;


}













}