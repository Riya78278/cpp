#include<iostream>
using namespace std;
bool search(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(key==arr[i]){
            return 1;
    }
    }  
    return 0;  

}
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int key;
    cout<<"enter the key or number you want to search :"<<endl;
    cin>>key;
    bool found= search(arr,10,key);
    if(found){
        cout<<"the element is found "<<endl;
    }else{
        cout<<"the element is not found"<<endl;
    }


}