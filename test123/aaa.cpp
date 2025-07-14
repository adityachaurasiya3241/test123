#include<iostream>
using namespace std ;

int reverse(int arr[] , int n , int target ){
   int start = target ;
   int end = n-1 ;

   while(start<end){
    int temp = arr[start];
    arr[start]=arr[end];
    arr[end]=temp;
    start++;
    end--;
   }
   return 1;
}

int main(){
int n ;
cout<<"enter number of elements: ";
cin>>n ;

int target ;
cout<<"enter the position: ";
cin>>target ;
if(target<0 || target>=n){
  cout<<"not valid"<<endl;
}

int arr[n];
for(int i=0 ; i<n ; i++){
    cin>>arr[i];
}

if(reverse(arr , n , target)){
for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

    cout<<endl;
  return 0;
}