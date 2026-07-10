// Q4 Write a program to Count digits in a number.

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no.:"<<endl;
    cin>>n;
    int digit=0;

    while(n!=0){
        n=n/10;
        digit+=1;
    }

    cout<<"The no. of digits in this no. is :"<<digit<<endl;

    return 0;
}