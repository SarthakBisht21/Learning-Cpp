// Q1. Write a program to Calculate sum of first N natural numbers. 

#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter the no. till which you want sum:"<<endl;
    cin>>n;

    int sum=0;
    for(int i = 1 ; i<=n; i++){
        sum=sum+i;
    }

    cout<<"The sum of all natural no. till "<<n<<" is "<<sum<<endl; 

    return 0;
}