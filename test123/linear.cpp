#include<iostream>
using namespace std ;

int function(int arr[] , int n , int x){
    for(int i = 0 ; i < n ; i++){
        if(arr[i] == x){
            return i ;
        }
        else{
             return -1 ;
        }
    }
}

int main (){
    int n ;
    cout<<"enter number of array elements: ";
    cin>>n ;

    int arr[n];
    cout<<"enter"<<" "<<n<<" "<<"elements";
    for(int i=0 ; i < n ; i++){
        cin>>arr[i];
    }

    int x ; 
    cout<<"enter number to search: ";
    cin>>x ;

    int ans = function(arr , n , x);
    if(ans == -1){
        cout<<"not found";
    }
    else{
        cout<<"found"<<ans;
    }
}