// Q9.Write a program to Check whether a number is prime.

#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the no.: "<<endl;
    cin>>n;

    if(n <= 1){
        cout << "The entered no. is not a prime no." << endl;
        return 0;
    }

    bool is_prime = true;
    
    for(int i=2 ; i<=(n/2) ; i++){
        if(n%i==0){
            is_prime = false;
            break;
        }
    }

    if(is_prime){
        cout<<"The entered no. is a prime no. ."<<endl;
    }
    else{
        cout<<"The entered no. is not a prime no. ."<<endl;
    }

    return 0;
}