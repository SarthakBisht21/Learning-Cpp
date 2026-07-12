// Q11.Write a program to Find GCD of two numbers.

#include<iostream>
using namespace std;

int main(){

    int n1,n2;
    cout<<"Enter the first no.: "<<endl;
    cin>>n1;
    cout<<"Enter the second no.: "<<endl;
    cin>>n2;

    int n = (n1<n2)?n1:n2;
    int gcd;

    for(int i = 1 ; i <= n ; i++){
        if((n1%i==0)&&(n2%i==0)){
            gcd=i;
        }
    }

    cout<<"The GCD of these no. is: "<<gcd<<endl;

    return 0;
}