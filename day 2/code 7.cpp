//product of digits
#include<iostream>
using namespace std ;
int main (){
    int n,pro =1,v;
    cout<<"ENTER A NUMBER";
    cin>>n;
    if(n == 0){
         cout<<"PRODUCT OF DIGITS IS 0"<<endl ;
    }
    while(n!=0){
        v=n%10;
        pro = pro*v;
        n=n/10;
    }
    cout<<"PRODUCT OF DIGITS ="<<pro;
    return 0;
}