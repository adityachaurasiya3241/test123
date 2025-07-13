#include<iostream>
using namespace std ;

void function(int arr[] , int n){
    for(int i=0 ; i<n-1 ; i++){
        int small = i ;
        for(int j= i+1 ; j<n ; j++){
            if(arr[j]<arr[small]){
                small = j;
            }
        }
        swap(arr[i] , arr[small]);
    }
}

int main(){
    int n ;
    cout<<"enter number of elements: ";
    cin>>n ;

    int arr[n];
    cout<<"enter"<<" "<<n<<" "<<"elements";
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }

    function(arr , n);

    cout<<"sorted array: ";
    for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }

}