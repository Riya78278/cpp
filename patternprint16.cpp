#include<iostream>
using namespace std;
int main(){
    int i=1;
    int n;
    char value='A';
    cout<<"enter the number n to print the pattern :"<<endl;
    cin>>n;
    while(i<=n){
        int j=1;
       // char value='A';
        while(j<=i){
            //char ch=i+j-1;
           // char value='A';
            cout<<value;
            value=value+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}