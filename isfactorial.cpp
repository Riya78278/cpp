#include<iostream>
using namespace std;
int factorial(int a,int b){
    int f=1;
    f=a/b*(a-b);
    return f;
}
int main(){
    int r;
    int n;
    cout<<"enter the number for n : "<<endl;
    cin>>n;
    cout<<"enter the number for r : "<<endl;
    cin>>r;
    int answer=factorial(n,r);
    cout<<"the factorial is :"<<answer<<endl;
}