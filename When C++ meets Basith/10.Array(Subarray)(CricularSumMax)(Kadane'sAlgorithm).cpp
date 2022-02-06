#include <iostream>
#include <climits>
using namespace std;
int kadane(int arr[],int n){
    int maxNo = INT_MIN;
    int curr = 0;
    for (int i = 0; i < n; i++)
    {
        curr += arr[i];
        if(curr<0){
            curr = 0;
        } 
        maxNo = max(maxNo,curr);
    }
    return maxNo;

}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int nonwarp = kadane(arr,n);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        arr[i] = -arr[i];
    }
    int warp = kadane(arr,n);
    cout<<max(nonwarp,(sum+warp));
    
    return 0;
    

}