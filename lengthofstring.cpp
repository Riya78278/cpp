#include<iostream>
using namespace std;
int getname( char name[]){
    int count=0;
    for(int i=0;name[i]!=0;i++){
        count++;

    }
    return count;

}
int main(){
    char name[20];
    cout<<"enter your names"<<endl;;
    cin>>name;
    cout<<"your name is:";
    cout<<name<<endl;
    int ans=getname(name);
    cout<<ans;
    return 0;
}