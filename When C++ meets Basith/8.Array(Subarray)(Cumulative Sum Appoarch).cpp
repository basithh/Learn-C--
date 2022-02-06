#include <iostream>
#include <climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int currnet[n+1];
    currnet[0]=0;
    for (int i = 1; i <= n; i++)
    {
        currnet[i] = currnet[i-1] + arr[i];
    }
    int maxNo = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            maxNo = max(maxNo,currnet[j]-currnet[i]);
        }
        
    }

    cout<<maxNo;
    return 0;
    

    

    
    

}