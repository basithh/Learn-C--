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
    int maxNo = INT_MIN;
    int previous = 0;
    for (int i = 0; i < n; i++)
    {
        
        previous += arr[i];
        if(previous<0){
            previous =0;
        }
        
        maxNo = max(maxNo,previous);
        
    }
    


    cout<<maxNo;
    return 0;
    

    

    
    

}