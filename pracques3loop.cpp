// show that the two numbers are +ve ,-ve or 0;
#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter the number a"<<endl;
    cin>>a;
    if(a>0){
        cout<<"its positive";

    }else{
        if(a==0){
            cout<<"its zero";

        }else{
            cout<<"its negative";
        }
    }
    return 0;
}    