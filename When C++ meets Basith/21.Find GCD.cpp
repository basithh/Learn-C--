#include <iostream>
using namespace std;


int main(){
    int a , b;
    cin>>a>>b;
    int temp = 1;

    while(temp!=0){
        temp = a % b;
        a=b;
        b=temp;
    }
    cout<<a;
    return 0;
}
