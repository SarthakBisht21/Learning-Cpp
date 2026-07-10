// Q6.Write a program to Reverse a number.

#include<iostream>

using namespace std;
int main(){

    int n,rev=0;
    cout<<"Enter the no.: "<<endl;
    cin>>n;

    while(n!=0){
        int a = 0;
        a = n%10;
        rev = (rev*10)+a;
        n=n/10;
    }

    cout<<"The reverse of the entered no. is: "<<rev<<endl;

    return 0;
}