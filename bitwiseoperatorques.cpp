#include<iostream>
using namespace std;
int main(){
    int a;
    int b;
    cout<<"enter the number a: "<<endl;
    cin>>a;
    cout<<"enter the number b: "<<endl;
    cin>>b;
    cout<<" using AND operator the and is"<<(a&b)<<endl;
    cout<<" using OR operator the and is"<<(a|b)<<endl;
    cout<<" using NOT FOR A operator the and is"<<(~a)<<endl;
    cout<<" using NOT FOR B operator the and is"<<(~b)<<endl;
    cout<<" using XOR operator the and is"<<(a^b)<<endl;

}