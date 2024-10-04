#include <iostream>
using namespace std;
void discount(string day,int payable,int purchase);
main(){
int purchase,payable;
string day;
cout<<"Enter the day:"<<endl;
cin>>day;
cout<<"Enter the total purchase amount in dollars:"<<endl;
cin>>purchase;
  discount(day, payable,purchase);
}
void discount( string day, int payable,int purchase){

if(day== "sunday"){
   payable=purchase-(purchase/10);
   cout<<"Payable amount:"<<payable<<endl;
}
 if (day!="sunday"){
cout<<"Payable amount:"<<purchase<<endl;


}




}