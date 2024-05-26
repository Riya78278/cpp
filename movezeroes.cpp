#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int  move_zero(int arr[],int n){
    int i=0;
    for(int j=0;j<n;j++){
        if(arr[j]!=0){
            swap(arr[j],arr[i]);
            i++;
        }
    }

}

int main(){
    int arr[6]={0,5,3,0,0,7};
    int ans= move_zero(arr,6);
    cout<<ans<<" ";

}