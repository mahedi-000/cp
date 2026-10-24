#include<bits/stdc++.h>
using namespace std;
int binarysearch(int A[],int n,int ele){
    int s=0;
    int e=n;
    while(s<=e){
        int mid=(s+e)/2;
        if(A[mid]==ele){
            return mid+1; 
        }
        else if(A[mid]>ele){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return -1;

}
int main()
{
    int N,element,i,j,temp;
    cin>>N;
    int A[N];
    cout<<"enter an array\n";
    for(i=0;i<N;i++){
        cin>>A[i];
    }
    sort(A,A+N);
    cout<<"enter element\n";
    cin>>element;
    cout<<binarysearch(A,N,element);


}