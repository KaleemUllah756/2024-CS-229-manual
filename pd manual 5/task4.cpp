#include <iostream>
#include <cmath>
using namespace std;
int main(){
float distance,angle,height;
cout<<"Enter the distance from the base of the tree:"<<endl;
cin>>distance;
cout<<"Enter the angle of elecation(in degrees):"<<endl;
cin>>angle;
height=tan(angle*0.0174533)*distance;
cout<<"The height of the tree:"<<height;
 

return 0;











}