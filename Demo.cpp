
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");


    const int SIZE = 2;
    int arr[SIZE][SIZE] = {{ 0,1}, { 3,4}};

    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        { 
            
          cout <<arr[i][j];
         
            
        }

     }
    



    return 0;
}
    


    //int visitors = 0; //���������� �����������
    //int age = 0;      //������� ������ ������������
    //int maxAge = 100; //������������ �������
    //int minAge = 0;   //������������ �������
    //int middleAge = 0;//������� �������
    //int sum = 0;      //����� ����������� ��� ��������

    //   cout << "������� ������� �������� �������� �� ����?" << endl;
    //cin >> visitors;

    //for (int i = 0; i < visitors; i++)
    //{
    //    cout << "������� ������� " << i+1<< "-�� ����������:" << endl;
    //    cin >> age;

    //    if (age < maxAge)
    //        maxAge = age;
    //    if (age > minAge)
    //        minAge = age;

    //    sum += age;
    //}

    //middleAge = sum / visitors;

    //cout << "������� ������ �������� ����������:" << maxAge << endl;
    //cout << "�������� ������ �������� ����������:" << minAge << endl;
    //cout << "������� ������� �����������:" << middleAge << endl;
   

   


   
