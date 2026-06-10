#include<iostream>
using namespace std;
int main() {
    int n,sum=0;
    cout<<"ENTER THE END LIMIT"<<endl;
    cin>>n;
    for(int i=1; i<n+1 ; i++){
        sum = sum+i;
    }
    cout<<"SUM OF FIRST N NATURAL NO. ="<<sum;
    return 0;
}