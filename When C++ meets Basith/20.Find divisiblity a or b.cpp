#include <iostream>
using namespace std;
int divisiblity(int n,int a,int b){
    int x = n/a;
    int y = n/b;
    int z = n/(a*b);
    

    return x+y-z;
}
int main(){
    int n,a,b;
    cin>>n>>a>>b;
    cout<<divisiblity(n,a,b);
    return 0;

}