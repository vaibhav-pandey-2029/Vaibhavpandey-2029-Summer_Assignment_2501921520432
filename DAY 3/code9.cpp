// PRIME NUMBER
#include<iostream>
using namespace std;
int main(){
    int n,count=0;
    cout<<"ENTER A NUMBER" ;
    cin>>n;
    if( n==1||n==0){
        cout<<"GIVEN NUMBER IS A NOT A PRIME NUMBER" ;
    }
    for(int i = 2; i<n ; i++){
        if (n%i==0){
            count++;
        }
    }
    if (count!=0){
        cout<<"GIVEN NUMBER IS A NOT A PRIME NUMBER" ;

    }else{
        cout<<"GIVEN NUMBER IS A PRIME NUMBER" ;
    }
    return 0 ;
}