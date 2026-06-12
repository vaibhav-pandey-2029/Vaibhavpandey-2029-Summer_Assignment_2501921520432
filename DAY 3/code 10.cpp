//print prime numbers in a given range
#include<iostream>
using namespace std;
int main(){
    int n1,n2;
    cout<<"ENTER A STARTING POINT" ;
    cin>>n1;
    cout<<"ENTER A ENDING POINT" ;
    cin>>n2;
     for(int i = n1; i<n2 ; i++){
        if(i<2){
            continue ;
        }
        int count =0 ;
        for(int j = 2; j<i ; j++){
            if(i%j==0){
                count++ ;
            }
        }
        if (count==0){
        cout<<i<<"IS PRIME NUMBER"<<endl ;

        }
    }
    return 0;
}