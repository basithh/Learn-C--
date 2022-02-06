#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int subques(int arr[],int n,vector <int> &a2,int ind){
    if(ind==n){
        for(auto ai:a2){
            cout<<ai<<" ";
        }
        cout<<endl;
        return 0;
    }
    a2.push_back(arr[ind]);
    subques(arr,n,a2,ind+1);
    a2.pop_back(    );
    subques(arr,n,a2,ind+1);
    return 0;
}

int main(){
    int a[] = {4,7,6};
    int n = 3;
    vector<int> a2;
    subques(a,n,a2,0);
    
    return 0;
}