#include <iostream>

using namespace std;

int palidrome(int i,char arr[] , int a){
    if(i>=a/2){
        return 1;

    }
    if(arr[i]!=arr[a-1-i]){
        return 0; 
    }
    
    return palidrome(i+1,arr,a); 

}

int main(){
    int a;
    cin>>a;
    char arr[a];
    cin>>arr;
    cout<<palidrome(0,arr,a);
    return 0;
}