#include<iostream>
using namespace std;
int min( int arr[],int n){
    int minnum=INT32_MAX;
    for(int i=0;i<n;i++){
        if(arr[i] < minnum){
            minnum=arr[i];

        }

    }
    return minnum;
}
int max( int arr[],int n){
    int maxnum=INT32_MIN;
    for(int i=0;i<n;i++){
        if(arr[i] >maxnum){
            maxnum=arr[i];

        }
        
    }
    return maxnum;
}

int main(){
    int n;
    int arr[100];
    cout<<"enter the n for the length of the array: "<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        min(arr ,n);
        max(arr ,n);


    }
    cout<<"the maximum value is"<<max(arr ,n) <<endl;
    cout<<"the minimum value is"<<min(arr ,n)<<endl;
}