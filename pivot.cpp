#include<iostream>
using namespace std;
int pivot(int arr[],int n){
    int start=0;
    int end=n-1;
    int mid=start+(end-start)/2;
    while(start<end){
        if (arr[mid]>=arr[0]){
            start=mid+1;
        }else{
            end=mid;
        }
        mid=start+(end-start)/2;
    }
    return start;
}
int main(){
    int arr[5]={7,5,8,17,3};
    int answer=pivot(arr,5);
    cout<<"the ans is: "<<answer<<endl;


}