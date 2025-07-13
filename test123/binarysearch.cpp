#include<iostream>
using namespace std ;

int function(int arr[] , int n , int target){
    int left = 0;
    int right = n-1 ;

    while(left <= right){
        int mid = (left + right)/2 ;

        if(arr[mid]==target){
            return mid ;
        }
        else if(arr[mid]>target){
            right = mid-1 ;
        }
        else{
            left = mid+1 ;
        }
    }
    return -1;
}

int main(){
    int n ;
    cout<<"enter number of elements: ";
    cin>>n ;

    int arr[n];
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }

    int target ;
    cout<<"enter the target number: ";
    cin>>target ;

    int ans = function(arr , n , target);
    if(ans == -1){
        cout<<"target not found";
    }
    else{
        cout<<"target found";
    }
}