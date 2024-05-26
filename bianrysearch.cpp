#include<iostream>
using namespace std;
int binary(int arr[],int n,int key){
    int start=0;
    int end=n-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        else if(key>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return -1;
    

}
int main(){
    int even[6]={1,2,3,4,5,6};
    int odd[5]={7,9,10,11,12};
    int answer =binary(even, 6,5);
    cout<<"the answer is:"<<answer<<endl;
    int solution =binary(odd,5,7);
    cout<<"the solution is:"<<solution<<endl;
    return 0;


}