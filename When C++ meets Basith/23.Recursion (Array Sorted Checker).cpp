#include <iostream>
using namespace std;

bool arraychecker(int arr[],int n){
    if(n==1){
        return 1;
    }
    bool restofarr = arraychecker(arr+1,n-1);

    return (arr[0]<arr[1]&&restofarr) ;


}


int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    cout<<arraychecker(arr,n);
    return 0;
}
