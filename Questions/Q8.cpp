// Q8.Write a program to Check whether a number is palindrome. 

#include<iostream>
using namespace std;

int main(){

    long long n;
    cout<<"Enter the no.: "<<endl;
    cin>>n;
    
    if(n<0){
        cout<<"The entered no. is not a palindrome no. ."<<endl;
    }

    else if(n==0){
        cout<<"The entered no. is a palindrome no. ."<<endl;
    }

    else{
        long long rev = 0 ;
        long long org = n;

        while(n>0){
            long long a = n%10;
            rev = (rev*10)+a;
            n=n/10; 
        }   

        if(org==rev){
            cout<<"The entered no. is a palindrome no. ."<<endl;
        }
        else{
            cout<<"The entered no. is not a palindrome no. ."<<endl;
        }
    }

    return 0;
}