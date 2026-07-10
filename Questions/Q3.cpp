// Q3 Write a program to Find factorial of a number.

#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the no. whose factorial you want:"<<endl;
    cin>>n;
    int fact=1;

    for(int i = 1 ; i<=n ; i++){
        fact = fact*i;
    }

    cout<<"The factorial of the entered no. is: "<< fact << endl; 

    return 0;
}