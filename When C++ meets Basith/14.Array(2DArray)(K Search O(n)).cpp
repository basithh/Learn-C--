#include <iostream>

using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    int k;
    cin>>k;
    int start = 0;
    int end = m-1;
    bool flag = 0;

    while (start<n&&end<m)
    {
        if(arr[start][end]==k){
            flag = 1;
            cout<<start<<" "<<end;
            break;
        }
        else if (arr[start][end]<k)
        {
            start++;
        }
        else{
            end--;
        }
        
    }
    if (!flag)
    {
       cout<<"LOL";
    }
    
    
    
    return 0;


    
}