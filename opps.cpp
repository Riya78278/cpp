#include<iostream>
using namespace std;
class hero{
    public:
    char level;
    int health;
   
};

int main(){
    hero riya;
    riya.health=70;
    riya.level='a';
    cout<<"size of riya :"<<sizeof(riya)<<endl;
    cout<<"lets see the concept of private and public :"<<riya.health<<endl;
    cout<<"lets see the concept of private and public :"<<riya.level<<endl;

}
