#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int hash[12]={0};
    for(int j=0;j<n;j++){
        hash[arr[j]]+=1;
    }

    int q;
    cout<<"Enter the number of queries:";
    cin>>q;
    for(int i=0;i<q;i++){
        int num;
        cin>>num;
        cout<<hash[num]<<endl;
    }
    return 0;
}