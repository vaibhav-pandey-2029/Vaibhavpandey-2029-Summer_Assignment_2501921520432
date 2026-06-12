#include<iostream>
using namespace std;
int main(){
    int n1,n2, GCD;
    cout<<"ENTER A NUMBER" ;
    cin>>n1 ;
    cout<<"ENTER A NUMBER" ;
    cin>>n2 ;
    for(int i =(n1<n2?n1:n2); i>=1;i--){
        if(n1%i==0 && n2%i==0){
           GCD = i ;
           break ; 
        }
    }
    cout<<"GCD OF GIVEN NUMBERS IS "<<GCD<<endl ;
    return 0;
}