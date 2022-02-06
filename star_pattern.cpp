#include <iostream>
#include <string>

using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int a ;
    cin >> a;
    for (int i = 0; i < 3; i++)
    {
        if(i%2==0){
            for (int j = i; j < 3; j++)
            {
                cout<<" ";
            }
            for (int j = 0; j < a; j++)
            {
                if (j%4==0)
              
                {
                    cout<<"x";
                }
                else{
                    cout<<" ";
                }
                
            }
            
            
        }
        else{
            for (int j = i; j < 3; j++)
            {
                cout<<" ";
            }
             for (int j = 0; j < a; j++)
            {
                if (j%2==0)
                {
                    cout<<"x";
                }
                else{
                    cout<<" ";
                }
                
            }


        }
        cout<<endl;
        
    }
    

   

    return 0;
}