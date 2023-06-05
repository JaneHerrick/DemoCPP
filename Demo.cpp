
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
    


    //int visitors = 0; //количество посетителей
    //int age = 0;      //возраст вводит пользователь
    //int maxAge = 100; //максимальный возраст
    //int minAge = 0;   //миниммальный возраст
    //int middleAge = 0;//средний возраст
    //int sum = 0;      //сумма посетителей для среднего

    //   cout << "Сколько человек посетило спортзал за день?" << endl;
    //cin >> visitors;

    //for (int i = 0; i < visitors; i++)
    //{
    //    cout << "Введите возраст " << i+1<< "-го посетителя:" << endl;
    //    cin >> age;

    //    if (age < maxAge)
    //        maxAge = age;
    //    if (age > minAge)
    //        minAge = age;

    //    sum += age;
    //}

    //middleAge = sum / visitors;

    //cout << "Возраст самого младшего посетителя:" << maxAge << endl;
    //cout << "Ввозраст самого старшего посетителя:" << minAge << endl;
    //cout << "Средний возраст посетителей:" << middleAge << endl;
   

   


   
