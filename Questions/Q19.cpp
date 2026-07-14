// Q19.Write a program to Print factors of a number.  

#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter a no.: "<<endl;
    cin>>n;

    cout<<"The factors of this no. are: "<<endl;

    for(int i=1;i<=n;i++){
        if(n%i==0){
            cout<<i<<" ";
        }
    }

    return 0;
}