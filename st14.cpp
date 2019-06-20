#include <iostream>  
using namespace std;  
  
int main() {  
    // [C_ST14-] 计àà块  
    int N;//糷计  
    while(cin >> N)  
    {  
        for(int i = 0;i < N;i++)  
        {  
            for(int j = 0;j < N-i-1;j++) //フ  
            {  
                cout << " ";  
            }  
            if(i % 2 == 0)//案计(0,2,4,6,8)  
            {  
                for(int k = 1;k <= i+1;k++)  
                {  
                    cout << k;  
                }  
            }  
            else         //计(1,3,5,7,9)  
            {  
                for(int k = i+1;k > 0;k--)  
                {  
                    cout << k;  
                }  
            }  
            cout << endl;  
        }  
    }  
    return 0;  
}  
