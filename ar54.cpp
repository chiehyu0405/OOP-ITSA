#include <iostream>  
#include<algorithm> // fill()  
  
using namespace std;  
  
int main() {  
    // [C_AR54-��] �p�g�r���p��  
    // a=97 ~ z=122 ASCII  
    //  a=0 ~ z=25  count�}�C��m  
    int count[26];  
    fill(count, count+26,0);  //�p��Ӽƪ��}�C�k�s  
    int n; //�ϥΪ̿�J���r���Ӽ�  
    char ch; //��J���r��  
    cin >> n; //��J  
    for(int i = 0;i < n;i++)  //�p��ƶq  
    {  
        cin >> ch;  
        count[ch-97]++;  
    }  
    for(int i = 0;i < 26;i++)  //��X�ƶq  
    {  
        if(count[i] != 0)  
        {  
            cout << char(i+97) << " " << count[i] << endl;  
        }  
    }  
    return 0;  
} 
