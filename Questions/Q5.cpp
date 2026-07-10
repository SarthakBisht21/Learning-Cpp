//Q5. Write a program to Find sum of digits of a number. 

#include<iostream>
using namespace std;

int main(){

    int n,sum=0;
    cout<<"Enter the no.: "<<endl;
    cin>>n;
    int org = n;

    while(n!=0){
        int a=0;
        a=n%10;
        sum+=a;
        n=n/10;
    }
    cout<<"The sum of digits "<<org<<" is: "<<sum<<endl;

    return 0;
}