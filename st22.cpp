#include <iostream>  
#include <string>  
#include <cmath>  //floor()  
#include <string.h> //strcpy()  
using namespace std;  
  
int main() {  
    // [C_ST22-��] �j��r�� II  
    string text;  
    int count;  
    char change;  
    while(cin >> text)  
    {  
        count = text.size();//string ����    
        char result[count]; //�s�J�^�嵲�G    
        strcpy(result, text.c_str());//string to char    
        for(int i = 0;i < count;i++) //�j�p�g�ഫ  
        {  
            if(90 >= result[i] && result[i] >= 65)//�j�g  
            {  
                result[i] = char(result[i]+32);  
            }  
            else if(122 >= result[i] && result[i] >= 97)//�p�g  
            {  
                result[i] = char(result[i]-32);  
            }  
        }  
          
        for(int i = 0;i < floor(count/2);i++) //�j��  
        {  
            change = result[i];    
            result[i] = result[count-1-i];    
            result[count-1-i] = change;    
        }  
          
        for(int i = 0;i<count;i++)//��X    
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
