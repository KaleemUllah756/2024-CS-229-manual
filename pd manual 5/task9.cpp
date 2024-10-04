#include <iostream>
#include <cmath>
using namespace std;
int timetravel(int time);
int main(){

int hours,minutes,time;
cout<<"Enter Hours:"<<endl;
cin>>hours;
cout<<"Enter Minutes:"<<endl;
cin>>minutes;

timetravel(time);

}
int timetravel(int time){
int hours,minutes;
if(minutes >=60){
hours=hours+1;

}
if(minutes<=60){
minutes=minutes+15;
}
cout<<"Future time "<<hours<<" : "<<minutes<<endl; 






}