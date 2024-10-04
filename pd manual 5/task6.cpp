#include <iostream>
using namespace std;
char checkalphabetcase(char ch);
int main(){
char ch;
cout<<"Enter the character(A/a):"<<endl;
cin>>ch;
 checkalphabetcase(ch);
 

}
char checkalphabetcase(char ch){
char A,a;
if(ch>='A' && ch<='Z'){
cout<<"You have entered Capital character"<<endl;
}
if(ch>='a' && ch<='z'){
cout<<"You have entered small character"<<endl;
}


}




