#include<iostream>
using namespace std;
int main(){
    int i=1;
    int n;
    cout<<"enter the number n to print the pattern:"<<endl;
    cin>>n;
    while(i<=n){
        int j=1;
        char ch='A'+n-i;
        while(j<=i){
            cout<<ch;
            ch=ch+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}