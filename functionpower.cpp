#include<iostream>
using namespace std;
int power(int x,int y){
    int ans =1;
    for(int i=1;i<=y;i++){
        ans=ans*x;
    }
    return ans ;

}
int main(){
    int a,b;
    cout<<"enter a"<<endl;
    cin>>a;
    cout<<"enter b"<<endl;
    cin>>b;
    int answer=power(a,b);
    cout<<"the answer is:"<<answer<<endl;

}