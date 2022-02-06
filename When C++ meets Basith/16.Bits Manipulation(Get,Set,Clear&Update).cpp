#include <iostream>
#include <climits>
using namespace std;

int getbit(int num,int k){
    return num&(1<<k);
}
int setbit(int num,int k){
    return num|(1<<k);
}
int clearbit(int num,int k){
    return num&(~(1<<k));
}
int updatebit(int num,int k,int value){
    return (num&(~(1<<k))) |(value<<k);
}

int main(){
    cout<<updatebit(5,1,1);
    return 0;
}