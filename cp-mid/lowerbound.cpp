#include<iostream>
#include<algorithm>
using namespace std;
int lowerbound(int A[],int n,int ele){
    int s=0;
    int e=n;
   
    while(s<e){ 
        int mid=s+(e-s)/2;
        if(A[mid]<ele){
            s=mid+1;
        }
        else {
            e=mid;
        }
     
    }
    return s;
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
    sort(A,A+n);
   cout<<"enter element\n";
   cin>>element;
    cout<<lowerbound(A,n,element);
}