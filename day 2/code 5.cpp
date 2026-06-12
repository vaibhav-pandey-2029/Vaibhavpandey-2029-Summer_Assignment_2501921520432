//sum of digits
#include<iostream>
using namespace std ;
int main (){
    int n,sum=0,v;
    cout<<"ENTER A NUMBER";
    cin>>n;
    while(n!=0){
        v=n%10;
        sum=sum+v;
        n=n/10;
    }
    cout<<"SUM OF DIGITS ="<<sum;
    return 0;
}