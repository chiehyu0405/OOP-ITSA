#include <iostream>  
#include <string.h> //strcpy()   
using namespace std;  
  
int main() {  
    // [C_ST31-��] �����r�ꤤ���ť���M�w����  
    string text;  
    getline(cin, text);//�ϥΪ̿�J(���Ū���]�t�ť�)    
    int count = text.size();//string ����        
     char result[count]; //�s�J���G        
     strcpy(result, text.c_str());//string to char   
     for(int i = 0;i < count;i++)    
     {  
        if(result[i] != 32 && result[i] != 9)  //���O�ťդ]���OTab
        {  
            if(i == count-1)  
            {  
                cout << result[i] << endl;  
            }  
            else  
            {  
                cout << result[i];  
            }  
        }  
     }  
    return 0;  
}
