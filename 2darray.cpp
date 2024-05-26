#include<iostream>
using namespace std;

int ispresent(int arr[][4], int target, int rows, int cols) {
    for(int i=0; i<rows; i++) {
        for(int j=0; j<cols; j++) {
            if(arr[i][j] == target) {
                return 1;
            }
        }
    }
    return 0;
}
int printsum(int arr[][4],int i,int j){
    int maxi=INT16_MIN;
    int rowindex=-1;
    for(int i=0; i<3; i++) {
        int sum=0;
        for(int j=0; j<4; j++) {
           sum+=arr[i][j];
        }
        if(maxi<sum){
            maxi=sum;
            rowindex=i;
        }
    }
    cout<<"max number is :"<<maxi<<endl;
    return rowindex;

}

int main() {
    int arr[3][4];
    cout<<"enter the 2d array"<<endl;
    for(int i=0; i<3; i++) {
        for(int j=0; j<4; j++) {
            cin >> arr[i][j];
        }
    }

    for(int i=0; i<3; i++) {
        for(int j=0; j<4; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    int target;
    cout << "Enter the number or target which you want to search:" << endl;
    cin >> target;

    if(ispresent(arr, target, 3, 4)) {
        cout << "Element is present";
    } else {
        cout << "Element is not present";
    }
    int ans=printsum(arr,3,4);
    cout<<"max row at index:"<<ans<<endl;

    return 0;
}
