#include <iostream>
#include <climits>
using namespace std;

bool power2checker(int n){
    return (n & n-1) == 0 ? 1:0;
}
int main(){
    cout<<power2checker(33);
    return 0;
}