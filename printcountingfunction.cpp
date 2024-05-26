#include<iostream>
using namespace std;
void printcount(int a){
    int i;
    for( i=1;i<=a;i++){
        cout<<i<<endl;

    }

}
int main(){
    int n;
    cout<<"enter the number upto which you want to print the counting :"<<endl;
    cin>>n;
    printcount(n);
    //cout<<ans<<endl;

}