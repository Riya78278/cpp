//write a pragram show that char ch 
/*  a---z ==lowercase
A----Z==upper case 
0----9==numeric
*/
#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter the character"<<endl;
    cin>>ch;
    if(ch>='a' && ch <= 'z'){
        cout<<"this is lower case "<<endl;
    }else if (ch>='A'&& ch<='Z'){
        cout<<"this is upper case"<<endl;
    }else if (ch >='0' && ch<='9') {
        cout<<"this is numeric"<<endl;

    }else{
        cout<<"give the right input"<<endl;
    }


}