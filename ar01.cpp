#include <iostream>  
#include<sstream>  
#include<algorithm>  
  
using namespace std;  
  
int main() {  
    // [C_AR01-��] �@���}�C���� I  
    string s;  
    string str[100];//���Ϋ��Jstr[]  
    int count = 0; //�p�⦳�X�ӼƦr  
    while(getline(cin , s))//����  
    {  
        stringstream ss(s);//�Ns�r���Jss  
        string token; //�N���Ϋ᪺���G�s�Jtoken  
        while (getline(ss, token, ' '))  
        {  
            str[count] = token;  
            count++;  
        }  
        reverse(str, str+count); // ����}�C  
        for(int i = 0;i < count;i++)  
        {  
            if(i != count-1)  
            {  
                cout << str[i] << " ";  
            }  
            else  
            {  
                cout << str[i] << endl;  
            }  
        }  
        count = 0;  
    }  
    return 0;  
}
