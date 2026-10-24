#include<iostream>
using namespace std;
int linearsearch(int A[],int n,int ele){
    for(int i=0;i<n;i++){
        if(A[i]==ele){
            return i+1;
        }
    }
    return -1;
}

int main(){
    int n,element;
    cout<<"array size\n";
    cin>>n;
    int A[n];
    cout<<"enter an array\n";
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
   cout<<"enter element\n";
   cin>>element;
    cout<<linearsearch(A,n,element);
}