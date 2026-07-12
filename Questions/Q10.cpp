// Q10.Write a program to Print prime numbers in a range. 

#include<iostream>
using namespace std;

int main(){

    int n1,n2;
    cout<<"Enter the first no.: "<<endl;
    cin>>n1;
    cout<<"Enter the second no.: "<<endl;
    cin>>n2;

    bool is_prime;

    cout<<"The prime no. between these no. are:"<<endl;

    for(int j = n1 ; j<=n2 ; j++ ){
        is_prime = true;
        if(j<=1){
            continue;
        }
        for(int i=2 ; i<=(j/2) ; i++){
            if(j%i==0){
                is_prime = false;
                break;
            }
        }
        if(is_prime){
            cout<<j<<" ";
        }
    }

    return 0;
}