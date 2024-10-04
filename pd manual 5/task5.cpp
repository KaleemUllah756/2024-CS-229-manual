#include <iostream>
#include <cmath>
using namespace std;
int main(){
double a,b,c,det,root,root1,root2,root3,root4,root5,root6;
cout<<"Enter the value of a:"<<endl;
cin>>a;
cout<<"Enter the value of b:"<<endl;
cin>>b;
cout<<"Enter the value of c:"<<endl;
cin>>c;
det=b*b-4*a*c;
if(det>0){
root1=(-b+(sqrt(b*b-4*a*c)))/2*a;
root2=(-b-(sqrt(b*b-4*a*c)))/2*a;
cout<<"Solution is:"<<root1<<" and "<<root2<<endl;

}
if(det==0){
root=(-b/2*a);
cout<<"Solution is:"<<root<<endl;
 
}
if(det<0){
root3=(-b/2*a);
root4=(sqrt(-(b*b-4*a*c)))/2*a;
root5=(-b/2*a);
root6=(sqrt(-(b*b-4*a*c)))/2*a;
cout<<"Complex solution is :"<<root3<<" + "<<root4<<"i and "<<root5<<" - "<<root6<<"i"<<endl;

}









return 0;











}