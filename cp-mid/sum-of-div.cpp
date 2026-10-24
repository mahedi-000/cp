#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n<=0){
        cout<<"invalid, please enter a positive integer : ";
        cin>>n;
    }
    int sum=0;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
         sum+=i;
         if(n/i!=i){
            sum+=n/i;
         }
        }
    }
    cout<<sum;
}