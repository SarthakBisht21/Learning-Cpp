// Q15.Write a program to Check Armstrong number. 

#include<iostream>
using namespace std;

int main(){

    int n,arm=0;
    cout<<"Enter the no.: "<<endl;
    cin>>n;
    int org = n , digit=0;

    while(n!=0){
        n=n/10;
        digit +=1;
    }

    n = org;

    while(n!=0){
        int a = n%10;
        int p=1;
        for(int j=1 ; j<=digit ; j++){
            p=p*a;
        }
        arm+=p;
        n=n/10;
    }

    if(arm==org){
        cout<<"The entered no. is an armstrong no."<<endl;
    }
    else{
        cout<<"The entered no. is not an armstrong no."<<endl;
    }

    return 0;
}