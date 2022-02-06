#include <bits/stdc++.h>
#include <iostream>
using namespace std;

vector<int> nextPermutation(vector<int> &permutation, int n)
{
    int temp1=-1;
    for(int i = n-1; i >= 1; i--){
        if(permutation[i]>permutation[i-1]){
            temp1=i-1;
            break;
        }
    }
    if(temp1==-1){
    for (int i = 0; i < (n)/2; i++)
    {
        swap(permutation[i],permutation[n-i-1]);
    }
        return permutation;
    }
    for(int i = n-1; i >= 0; i--){
        if(permutation[i]>permutation[temp1]){
            int temp = permutation[i];
            permutation[i] = permutation[temp1];
            permutation[temp1] = temp;
            break;
        }
    }
    int z = 1;
    // cout<<temp1;
    // temp1++;
    temp1++;
    while(temp1<n){
        swap(permutation[temp1],permutation[n-z]);
        temp1++;
        z++;
    }

    // for (int i = temp1+1; i < (n+temp1)/2; i++)
    // {
    //     swap(permutation[i],permutation[n+temp1-i]);
    // }
    

    return permutation;
}

int main()
{
    int a;
    cin>>a;
    vector<int> permutation(a);
    for (int i = 0; i < a; i++)
    {
        cin>>permutation[i];
    }
    
    nextPermutation(permutation, a);
    for(auto i:permutation){
        cout<<i<<" ";
    }
    return 0;
}

