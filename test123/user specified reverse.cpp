#include<iostream>
using namespace std ;

int reverse(int arr[] , int n , int target ){
    int rev ;
    for(int i =0 ; i<n ; i++){

        for(int j=0 ; j<i ; j++){
            if(arr[n] == target){
               int a = n/10;
               rev = rev*10 +a ;
               n = n%10 ;
               return reverse(arr , n);
            }
        }
    }
}

int main(){
int n ;
cout<<"enter number of elements: ";
cin>>n ;

int target ;
cout<<"enter the position: ";
cin>>target ;

int arr[n];
for(int i=0 ; i<n ; i++){
    cin>>arr[i];
}

int ans = reverse(arr , n , target);
cout<<ans ;

}