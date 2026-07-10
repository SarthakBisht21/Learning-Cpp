// Q2 Write a program to Print multiplication table of a given number. 

#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the no. whose table you want:"<<endl;
    cin>>n;

    cout<<"The table of entered no. is:"<<endl;

    for(int i = 1 ; i<=10 ; i++ ){
        cout<<n<<"x"<<i<<" = "<<n*i<<endl;
    }

    return 0;
}