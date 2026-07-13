// Q13.Write a program to Generate Fibonacci series.

#include<iostream>
using namespace std;

int main(){

    int a=0,b=1,sum=0,n;
    
    cout<<"How many terms you want?"<<endl;
    cin>>n;

    for(int i = 1 ; i <= n; i++){
        if(i==1){
            cout<<a<<" ";
        }
        else if(i==2){
            cout<<b<<" ";
        }
        else{
            sum=a+b;
            cout<<sum<<" ";
            a=b;
            b=sum;
        }
    }

    return 0;
}