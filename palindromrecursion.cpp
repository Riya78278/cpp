#include<iostream>
using namespace std;
bool checkpalindrome(string name,int i,int j){
    if(i>j){
        return true;
    }
    if(name[i]!=name[j]){
        return false;
    }else{
        return checkpalindrome(name,i+1,j-1);
    }
}
int main(){
    string name="aabbam";
    cout<<endl;
    bool ispalindrome= checkpalindrome(name ,0,name.length()-1);
    if(ispalindrome){
        cout<<"yes it is a palindrome"<<endl;

    }else{
        cout<<"no its not a palindrome"<<endl;
    }

}