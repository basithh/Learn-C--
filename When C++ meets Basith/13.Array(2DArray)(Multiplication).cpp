#include <iostream>
using namespace std;

int main(){
    int n1,m1;
    cin>>n1>>m1;
    int a[n1][m1];
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < m1; j++)
        {
            cin>>a[i][j];
        }
        
    }
    int n2,m2;
    cin>>n2>>m2;
    int b[n2][m2];
    for (int i = 0; i < n2; i++)
    {
        for (int j = 0; j < m2; j++)
        {
            cin>>b[i][j];
        }
        
    }
    int ans[n1][m2];
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < m2; j++)
        {
            int temp =0;
            for (int k = 0; k < n2; k++)
            {
               temp += a[i][k]*b[k][j];
            //    cout<<a[j][k]<<"*"<<b[k][i]<<"  ";
               
            }
      
            ans[i][j]=temp;
            
        }
        
    }
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < m2; j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
        
    }

    return 0;

   
    
    
}