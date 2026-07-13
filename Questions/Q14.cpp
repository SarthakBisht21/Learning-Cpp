// Q14.Write a program to Find nth Fibonacci term. 

#include<iostream>
using namespace std;

int main(){

    int a=0,b=1,sum=0,n;
    
    cout<<"Which term you want?"<<endl;
    cin>>n;

    for(int i = 1; i < n; i++){
            sum=a+b;
            a=b;b=sum;
    }

    cout<<a<<endl;

    return 0;
}