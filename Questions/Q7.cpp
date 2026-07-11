// Q7.Write a program to Find product of digits. 

#include<iostream>
using namespace std;

int main(){

    int n,prod=1;
    cout<<"Enter the no.: "<<endl;
    cin>>n;
    int org = n;

    while(n!=0){
        int a=0;
        a=n%10;
        prod*=a;
        n=n/10;
    }
    cout<<"The product of digits "<<org<<" is: "<<prod<<endl;

    return 0;
}