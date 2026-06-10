#include<iostream>
using namespace std;
int main() {
    int n,l=0;
    cout<<"ENTER THE NUMBER TO FIND ITS DIGIT"<<endl;
    cin>>n;
    while(n>0){
        n=n/10;
        l=l+1;
    }
    return 0;
}