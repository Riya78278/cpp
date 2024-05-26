#include<iostream>
using namespace std;
int main(){
    int a;
    int b;
    int num=1;
    cout<<"enter the number a : "<<endl;
    cin>>a;
    cout<<"enter the number b :"<<endl;
    cin>>b;
    for(int i=1;i<=b;i++){
        num=num*a;
        //cout<<num*a;
    }
    cout<<num;
    return 0;
}