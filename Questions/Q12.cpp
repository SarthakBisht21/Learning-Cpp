// Q12.Write a program to Find LCM of two numbers.

#include<iostream>
using namespace std;

int main(){

    int n1,n2;
    cout<<"Enter the first no.: "<<endl;
    cin>>n1;
    cout<<"Enter the second no.: "<<endl;
    cin>>n2;

    int n = (n1<n2)?n1:n2;
    int gcd=1,lcm=1;

    for(int i = 1 ; i <= n ; i++){
        if((n1%i==0)&&(n2%i==0)){
            gcd=i;
        }
    }

    lcm=(n1*n2)/gcd;

    cout<<"The LCM of these no. is: "<<lcm<<endl;

    return 0;
}