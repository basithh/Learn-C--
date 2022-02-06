#include <iostream>
#include <string>

using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int a ,coef;
    cin >> a;
    for (int i = 0; i < a; i++)

    {
        for (int j = a-i; j>0 ; j--)
        {
            cout<<"  ";
        }
        
        for (int j = 0; j < i+1; j++)
        {
            if(i==0||j==0){
                coef=1;
            }
            else{
                coef = coef * (i-j+1)/j;
            }
            cout<<coef<<"  ";


        }
        cout<<endl;
        

    }
        

    

   

    return 0;
}