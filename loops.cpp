#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number : "<<endl;
    cin>>n;
    if(n==0){
        cout<<"print valid number"<<endl;
    }else if (n<0){
        cout <<"number is negative";
    
    }else{
        cout<<"the numnber is positive";
    }
    return 0;
}