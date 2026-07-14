// Q18.Write a program to Check strong number. 

#include<iostream>
using namespace std;
int main(){

    int n,org,strong=0;
    cout<<"Enter a no.: "<<endl;
    cin>>n;

    org = n;

    while(n!=0){
        int a = n%10,p=1;
        for(int i=1;i<=a;i++){
            p*=i;
        }
        strong+=p;
        n=n/10;
    }

    if(strong==org){
        cout<<"The entered no. is a strong no."<<endl;
    }
    else{
        cout<<"The entered no. is not a strong no."<<endl;
    }

    return 0;
}