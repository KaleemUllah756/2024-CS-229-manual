#include <iostream>
using namespace std;
void vote(int age);
  main()
{
int age;
cout<<" Enter the age:"<<endl;
cin>>age;
   vote(age);


}
void vote (int age){
if(age>=18)
{
     cout<<" You are eligible for vote:";

}
  if(age<18){
cout<<"You are not eligible for vote:"<<endl;
}




}