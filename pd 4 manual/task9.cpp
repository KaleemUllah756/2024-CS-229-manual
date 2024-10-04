#include <iostream>
using namespace std;
void distance(float dis,float fuel);
main(){
float dis,fuel;
cout<<"Enter the distance:"<<endl;
cin>>dis;
 
 distance(dis,fuel);

}
void distance(float dis, float fuel){
fuel=dis*10;
if(fuel>=100){
cout<<"Fuel needed:"<<fuel<<endl;
}
if(fuel<100){
cout<<"Fuel needed: 100"<<endl;
}




}