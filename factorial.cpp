#include<iostream>
using namespace std;
int isfactorial(int n){
    int f=1;
    for(int i=1;i<=n;i++){
        f=f*i;
    }
    return f;

}
int factorial(int a,int b){
    int num=isfactorial(a);
    int sum=isfactorial(b)*isfactorial(a-b);

    return num/sum;
}
int main(){
    int r;
    int n;
    cout<<"enter the number for r : "<<endl;
    cin>>n;
    cout<<"enter the number for n : "<<endl;
    cin>>r;
    int answer=factorial(n,r);
    cout<<"the factorial is :"<<answer<<endl;
}