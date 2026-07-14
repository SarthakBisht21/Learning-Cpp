// Q20.Write a program to Find largest prime factor.

#include<iostream>
using namespace std;
int main(){

    int n,prime_factor=0;
    cout<<"Enter a no.: "<<endl;
    cin>>n;

    for(int i=2;i<=n;i++){
        if(n%i==0){
            bool prime=true;
            for(int j=2;j<i;j++){
                if(i%j==0){
                    prime=false;
                    break;
                }
            }    
            if(prime){
                prime_factor=i;
            }
        }
    }    

    cout<<"The largest prime factor of this no. is: "<<prime_factor<<endl;
   
    return 0;
}