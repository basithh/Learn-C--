#include <iostream>
using namespace std;

int fact(int n){
    if (n==0){
        return 1;
    }
    int presum = fact(n-1);
    return n * presum;

}


int main(){
    int n,p;
    cin>>n>>p;
    cout<<fact(n);
    return 0;
}
