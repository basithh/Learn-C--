#include <iostream>
#include <string>
#include <cmath>

using namespace std;

bool triplet(int a,int b,int c){
    int x = max(a,max(b,c));
    int y,z;
    if(a==x){
        y=b;
        z=c;
    }
    else if (b==x)
    {
        y=a;
        z=c;
    }
    else{
        y=a;
        z=b;
    }
    if (x*x == y*y + z*z) return true;
    else return false;


    
}

int32_t main(){
    int a,b,c;
    cin>>a>>b>>c;
    cout<<triplet(a,b,c);
}