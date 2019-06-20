#include <iostream>  
#include <string>  
#include <sstream> //stringstream  
#include <algorithm> //fill()  
#include <cmath>  //floor()  
  
using namespace std;  
  
int main() {  
    // [C_AR59-��] �n�ư��D  
    int N; //����ƶq  
    int two = 0; //�Ʀr�ƶq��2�����X��  
    int num; //��ƫ��A������  
    string str_num; //�r�ꫬ�A������  
    int len; //����num������  
    int count[10];//�Ʀr�ƶq���έp  
    fill(count, count+10, 0); //�}�C��0  
    cin >> N;//��J����ƶq  
    for(int i = 0; i < N;i++)  
    {  
        cin >> num;  
        //int to string(23~25��)  
        stringstream ss;  
        ss << num;  
        str_num = ss.str();  
        len = str_num.size(); //�Ʀr����  
        //�P�_�O�_���|���  
        if(len != 4)  
        {  
            cout << "Failure Input" << endl;  
        }  
        else  
        {  
            count[int(floor(num/1000))]++;       //�d��  
            count[int(floor((num%1000)/100))]++; //�ʦ�  
            count[int(floor(num%100)/10)]++;     //�Q��  
            count[int(floor(num%10))]++;         //�Ӧ�  
            for(int j = 0;j < 10;j++)   //�p��ƶq��2������  
            {  
                if(count[j] == 2)  
                {  
                    two++;  
                }  
                  
            }  
            if(two == 1)  //�u���@��2�N��O�n�ơA��XYes  
            {  
                cout << "Yes" << endl;  
            }  
            else  //��L���ONo  
            {  
                cout << "No" << endl;  
            }  
        }  
        //�k�s  
        fill(count, count+10, 0);  
        two = 0;  
    }  
    return 0;  
} 
