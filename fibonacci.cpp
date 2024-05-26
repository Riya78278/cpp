#include<iostream>
using namespace std;
int main(){
    int n;
    int a=0;
    int b=1;
    cout<<"enter the number n: "<<endl;
    cin>>n;
    for(int i=0;i<=n;i++){
        int fibonacci=a+b;
        cout<<fibonacci <<" ";
        a=b;
        b=fibonacci;
    }
}