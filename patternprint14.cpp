#include<iostream>
using namespace std;
int main(){
    int i=1;
    int n;
    cout<<"enter the number n to print the pattern:"<<endl;
    cin>>n;
    while(i<=n){
        int j=1;
        while(j<=n){
            char ch=i+j+'A'-2;
            cout<<ch;
            j=j+1;

        }
        cout<<endl;
        i=i+1;
    }
}