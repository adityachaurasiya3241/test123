
#include<iostream>
using namespace std ;

 bool palindrome(string s , int left , int right){
     if(s[left] != s[right]){
         return false ;
     }
     if(left >= right){
        return true ;
     }
     return palindrome(s , left+1 , right-1);
 }

 int main (){
    string s ;
    cout<<"enter character: ";
    cin>>s ;
    if( palindrome(s , 0 , s.length()-1)){
        cout<<"palindrome";
    }
    else{
        cout<<"not palindrome";
    }
    return 0;
 }