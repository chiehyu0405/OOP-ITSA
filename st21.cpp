#include <iostream>  
#include <string.h> //strcpy()    
using namespace std;  
  
int main() {  
    // [C_ST21-��] ��r�Φr���X�{����  
    string text;  //��J���r��  
    int len = 0; //���h�֥y�l  
    getline(cin, text);//�ϥΪ̿�J(���Ū���]�t�ť�)  
    int arr[26][2];//�x�s�j�p�g�^�媺�ƶq�A[0]�j�g,[1]�p�g  
    int count = text.size();//string ����      
     char result[count]; //�s�J���G      
     strcpy(result, text.c_str());//string to char   
     for(int i = 0;i < 26;i++)//�}�C�k�s  
     {  
        for(int j = 0;j < 2;j++)  
        {  
            arr[i][j] = 0;  
        }  
     }  
     for(int i = 0;i < count;i++)  
     {  
        if(result[i] == 32 || result[i] == 46)  
        //�]���r���᭱�����@�ӪťաA�ҥH�r�����κ�A��r���᪺�ťէY�i  
        {  
            len++;  
        }  
        else if(90 >= result[i] && result[i] >= 65)//�j�g  
        {  
            arr[result[i]-65][0]++;  
        }  
        else if(122 >= result[i] && result[i] >= 97)//�p�g  
        {  
            arr[result[i]-97][1]++;  
        }  
          
     }  
     if((result[count-1] == 32 || result[count-1] == 44 || result[count-1] == 46)&&(result[0] == 32 || result[0] == 44 || result[0] == 46))  
        {  
            cout << len-1 << endl;  
        }  
     else if((result[count-1] == 32 || result[count-1] == 44 || result[count-1] == 46)||(result[0] == 32 || result[0] == 44 || result[0] == 46))  
     {  
        cout << len << endl;  
     }  
     else  
     {  
        cout << len+1 << endl;  
     }  
       
     for(int i = 0;i < 26;i++)  
     {  
        for(int j = 0;j < 2;j++)  
        {  
            if(arr[i][j] != 0)  
            {  
                if(j==0)//�j�g  
                {  
                    cout << char(i+65) << " : " << arr[i][j]<< endl;      
                }  
                if(j==1)//�p�g  
                {  
                    cout << char(i+97) << " : " << arr[i][j]<< endl;  
                }  
            }  
        }  
     }  
    return 0;  
}
