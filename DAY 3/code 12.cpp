#include<iostream>
using namespace std;
int main(){
    int n1,n2, LCM;
    cout<<"ENTER A NUMBER" ;
    cin>>n1 ;
    cout<<"ENTER A NUMBER" ;
    cin>>n2 ;
    LCM = (n1>n2)?n1:n2 ;
    while(true){
        if(LCM%n1 ==0 && LCM%n2== 0){
            cout<<"LCM OF GIVEN NUMNERS IS"<<LCM<<endl ;
            break ;   
        }
        LCM++ ;
    }
    return 0;
}