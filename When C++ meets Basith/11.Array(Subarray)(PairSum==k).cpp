#include <iostream>
#include <climits>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int start = 0;
    int end = n-1;
    while(start<end){
        if(arr[start]+arr[end]==k){
            cout<<arr[start]<<" "<<arr[end];
            break;
        }
        
        else if (arr[start]+arr[end]>k)
        {
            
            end--;
        }
        else{
            start++;
        }
        
    }
    
    return 0;
    

}