#include<iostream>
using namespace std;
int first_occurence(int arr[],int n,int key){
    int start=0;
    int end=n-1;
    int mid;
    int ans=-1;
    mid=start+(end-start)/2;
    while(start<=end){
        if(key==arr[mid]){
            ans=mid;
            end=mid-1;

        }
        else if(key>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
    
}
int last_occurence(int arr[],int n,int key){
    int start=0;
    int end=n-1;
    int mid;
    int ans=-1;
    mid=start+(end-start)/2;
    while(start<=end){
        if(key==arr[mid]){
            ans=mid;
            start=mid+1;

        }
        else if(key>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}    
int main(){
    int arr1[6]={1,2,3,4,4,6};
    int answer=first_occurence(arr1,6,4);
    cout<<"the first occurence is :"<<answer<<endl;
    int solution=last_occurence(arr1,6,4);
    cout<<"the last occurence is :"<<solution<<endl;

}