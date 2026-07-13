// Q16.Write a program to Print Armstrong numbers in a range. 

#include<iostream>
using namespace std;

int main(){

    int n1,n2;
    cout<<"Enter the no.: "<<endl;
    cin>>n1;
    cout<<"Enter the no.: "<<endl;
    cin>>n2;

    for(int z = n1 ; z<=n2 ; z++){
        int n=z;
        int org = n , digit=0,arm=0;

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
            cout<<org<<" ";
        }
    }

    return 0;
}