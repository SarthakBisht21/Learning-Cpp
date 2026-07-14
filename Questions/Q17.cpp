// Q17.Write a program to Check perfect number. 

#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter a no.: "<<endl;
    cin>>n;

    int perf_no =0;

    for(int i = 1 ; i<n ; i++){
        if(n%i==0){
            perf_no+=i;
        }
    }

    if(perf_no==n){
        cout<<"The entered no. is a perfect no."<<endl;
    }
    else{
        cout<<"The entered no. is not a perfect no."<<endl;
    }

    return 0;
}