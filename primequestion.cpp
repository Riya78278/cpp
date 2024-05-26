#include<iostream>
using namespace std;
int main(){
    int a=2;
    int n;
    cout<<"enter the number n"<<endl;
    cin>>n;
    while(a<n){
        if(n%a==0){
            cout<<"the number is not prime for"<<a<<endl;
            a=a+1;
            break;

        }   else{
            cout<<"prime for"<<a<<endl;
            a=a+1;
        }
        
    }
}