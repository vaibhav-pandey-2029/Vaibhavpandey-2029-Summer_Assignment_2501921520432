#include<iostream>
using namespace std;
int main() {
    int n,fact =1;
    cout<<"ENTER THE NUMBER TO FIND ITS FACTORIAL"<<endl;
    cin>>n;
    if(n=0){
        cout<<"FACTORIAL IS ONLY FOR POSITIVR NUMBER";
    }
    for(int i=1; i<=n+1 ; i++){
        fact = fact*i;
    }
    return 0;
}