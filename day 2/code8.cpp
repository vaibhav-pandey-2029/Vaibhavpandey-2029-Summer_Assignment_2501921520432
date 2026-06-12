//palindrome or not
#include<iostream>
using namespace std ;
int main (){
    int n,rev=0,v;
    cout<<"ENTER A NUMBER";
    cin>>n;
    int fake = n;
    for(;n!=0;n/=10){
       v=n%10;
       rev = rev*10+v;
    }
    cout<<"REVERSE NUMBER="<<rev<<endl;
    if(rev == fake){
        cout<<"THE GIVEN NUMBER IS PALINDROME" ;
    }else{
        cout<<"GIVEN NUMBER IS NOT PALINDROME" ;
    }
    return 0;
}