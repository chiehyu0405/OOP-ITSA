#include <iostream>  
#include <string>  
#include <sstream> //stringstream  
#include <algorithm> //fill()  
#include <cmath>  //floor()  
  
using namespace std;  
  
int main() {  
    // [C_AR59-] 计拜肈  
    int N; //代戈计秖  
    int two = 0; //计计秖2Τ碭  
    int num; //俱计篈代戈  
    string str_num; //﹃篈代戈  
    int len; //代戈num  
    int count[10];//计计秖参璸  
    fill(count, count+10, 0); //皚恶骸0  
    cin >> N;//块代戈计秖  
    for(int i = 0; i < N;i++)  
    {  
        cin >> num;  
        //int to string(23~25︽)  
        stringstream ss;  
        ss << num;  
        str_num = ss.str();  
        len = str_num.size(); //计  
        //耞琌计  
        if(len != 4)  
        {  
            cout << "Failure Input" << endl;  
        }  
        else  
        {  
            count[int(floor(num/1000))]++;       //  
            count[int(floor((num%1000)/100))]++; //κ  
            count[int(floor(num%100)/10)]++;     //  
            count[int(floor(num%10))]++;         //  
            for(int j = 0;j < 10;j++)   //璸衡计秖2Ω计  
            {  
                if(count[j] == 2)  
                {  
                    two++;  
                }  
                  
            }  
            if(two == 1)  //Τ2琌计块Yes  
            {  
                cout << "Yes" << endl;  
            }  
            else  //ㄤ常琌No  
            {  
                cout << "No" << endl;  
            }  
        }  
        //耴箂  
        fill(count, count+10, 0);  
        two = 0;  
    }  
    return 0;  
} 
