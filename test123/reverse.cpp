
#include<iostream>
using namespace std ;

int function(int n , int rev = 0){
    if(n == 0)
        return rev;
     return function(n/10 , rev*10 + n%10);
}

int main (){
    int n ;
    cout<<"enter number: ";
    cin>>n ;
    int ans = function(n);
    cout<<ans ;
    return 0 ;
}