//reverse of a number
#include<iostream>
using namespace std ;
int main (){
    int n,rev=0,v;
    cout<<"ENTER A NUMBER";
    cin>>n;
    for(;n!=0;n/=10){
       v=n%10;
       rev = rev*10+v;
    }
    cout<<"REVERSE NUMBER="<<rev<<endl;
    return 0;
}