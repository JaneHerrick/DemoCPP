//int amountOfApples1 = 11;
//int amountOfApples2 = 44;
//
//int inBox = 0;
//
//cout << "В пустой коробке - " << inBox << endl;
//cout << "В первой сумке - " << amountOfApples1 << endl;
//cout << "Во второй сумке - " << amountOfApples2 << endl;
//cout << endl;
//
//inBox = amountOfApples1 + amountOfApples2;
//
//cout << "Всего в коробку добавлено - " << inBox << " яблок" << endl;







//int chocolate = 6;
//int coffe = 2;
//int milk = 4;
//
//float priceOfChocolate = 65.99;
//float priceOfCoffe = 349.99;
//float priceOfMilk = 96.99;
//
//int purchase = 0;
//
//cout << "Vasya buy:" << endl;
//cout << "Chocolate = " << chocolate << endl;
//cout << "Coffe = " << coffe << endl;
//cout << "Milk = " << milk << endl;
//cout << endl;
//
//purchase = (chocolate * priceOfChocolate) + (coffe * priceOfCoffe) + (milk * priceOfMilk);
//
//cout << "Vasya spent:" << endl;
//cout << "Chocolate = " << priceOfChocolate << "$" << endl;
//cout << "Coffe = " << priceOfCoffe << "$" << endl;
//cout << "Milk = " << priceOfMilk << "$" << endl;
//
//
//cout << "Total purshase = " << purchase << "$" << endl;









//int number;
//float pointNumber;
//char symbol;
//bool variable;


//cout << "Введите число: ";
//cin >> number;
//cout << "Вы ввели число: " << number << endl;
//cout << endl;
//
//cout << "Введите дробное число: ";
//cin >> pointNumber;
//cout << "Вы ввели дробное число: " << pointNumber << endl;
//cout << endl;
//
//
//cout << "Введите символ: ";
//cin >> symbol;
//cout << "Вы ввели символ: " << symbol << endl;
//cout << endl;
//
//cout << "Введите 1 или 0: ";
//cin >> variable;
//cout << "Вы ввели: " << variable << endl;
//cout << endl;





//char symbol1 = 0;
//char symbol2 = 0;
//char symbol3 = 0;
//char symbol4 = 0;
//char symbol5 = 0;
//
//cout << "Enter a five letter word: ";
//cin >> symbol1 >> symbol2 >> symbol3 >> symbol4 >> symbol5;
//cout << endl;
//
//cout << "You entered the word: ";
//cout << symbol1 << symbol2 << symbol3 << symbol4 << symbol5;
//cout << endl;






    //cout << "А почему в ресторане ей никогда не нравится то," << endl;
    //cout << "что заказала она, и ей всегда нравиться то, что заказал я?" << endl;
    //cout << "И она начинает есть у меня из тарелки. Я ей говорю:" << endl;
    //cout << "\"Закажи себе то же самое\". Она говорит: \"Зачем?" << endl;
    //cout << "Я только попробовать\". И съедает половину." << endl;
    //cout << "//к.ф. \"О чём говорят мужчины\"//";



    //float a = 0;
    //float b = 0;

    //cout << "Enter first number: ";
    //cin >> a;

    //cout << "Enter second number: ";
    //cin >> b;

    //cout << "Sum of your numbers: " << a << " + " << b << " = " << a + b << endl;
    //cout << "Multiplying your numbers: " << a * b << endl;
    //cout << "Different of your numbers: " << a - b << endl;
    //cout << "Arithmetic mean of your numbers: " << (a + b)/2 << endl;



    //float interestRate = 5;
    //int dayInMonth = 30;
    //int dayInYear = 365;
    //int indexRate = 100;

    //float depositSum = 0;
    //int depositTime = 0;
    //float rateInMonth = 0;
    //float rateInAll = 0;
    //float totalSum = 0;

    //cout << "Введите сумму депозита: ";
    //cin >> depositSum;

    //cout << "Ведите срок депозита в месяцах: ";
    //cin >> depositTime;
    //cout << endl;

    //rateInMonth = depositSum * (interestRate /indexRate) / dayInYear * dayInMonth;
    //cout << "Прибыль с депозита за месяц: " << rateInMonth << " $" << endl;

    //rateInAll = rateInMonth * depositTime;
    //cout << "Прибыль с депозита на весь срок: " << rateInAll << " $" << endl;

    //totalSum = depositSum + rateInAll;
    //cout << "Общая сумма выплат в конце срока: " << totalSum << " $" << endl;











//int enterNumber;
//
//   cout << "Введите количество долларов: ";
//   cin >> enterNumber;
//
//   if (enterNumber <= 0 || enterNumber > 9999)
//       cout << "Число не входит в диапазон от 1 до 9999!\n";
//   else
//   {
//       cout << "Вы ввели: " ;
//
//       if ((enterNumber / 1000) % 10 == 1) cout << "Одна тысяча ";
//       else if ((enterNumber / 1000) % 10 == 2) cout << "Две тысячи ";
//       else if ((enterNumber / 1000) % 10 == 3) cout << "Три тысячи ";
//       else if ((enterNumber / 1000) % 10 == 4) cout << "Четыре тысячи ";
//       else if ((enterNumber / 1000) % 10 == 5) cout << "Пять тысяч ";
//       else if ((enterNumber / 1000) % 10 == 6) cout << "Шесть тысяч ";
//       else if ((enterNumber / 1000) % 10 == 7) cout << "Семь тысяч ";
//       else if ((enterNumber / 1000) % 10 == 8) cout << "Восемь тысяч ";
//       else if ((enterNumber / 1000) % 10 == 9) cout << "Девять тысяч ";
//
//
//       if ((enterNumber / 100) % 10 == 1) cout << "сто ";
//       else if ((enterNumber / 100) % 10 == 2) cout << "двести ";
//       else if ((enterNumber / 100) % 10 == 3) cout << "триста ";
//       else if ((enterNumber / 100) % 10 == 4) cout << "четыреста ";
//       else if ((enterNumber / 100) % 10 == 5) cout << "пятьсот ";
//       else if ((enterNumber / 100) % 10 == 6) cout << "шестьсот ";
//       else if ((enterNumber / 100) % 10 == 7) cout << "семьсот ";
//       else if ((enterNumber / 100) % 10 == 8) cout << "восемьсот ";
//       else if ((enterNumber / 100) % 10 == 9) cout << "девятьсот ";
//
//       if ((enterNumber / 10) % 10 == 1)
//       {
//           if (enterNumber % 10 == 0) cout << "десять долларов";
//           else if (enterNumber % 10 == 1) cout << "одинадцать долларов";
//           else if (enterNumber % 10 == 2) cout << "двенадцать долларов";
//           else if (enterNumber % 10 == 3) cout << "тринадцать долларов";
//           else if (enterNumber % 10 == 4) cout << "четырнадцать долларов";
//           else if (enterNumber % 10 == 5) cout << "пятнадцать долларов";
//           else if (enterNumber % 10 == 6) cout << "шестнадцать долларов";
//           else if (enterNumber % 10 == 7) cout << "семнадцать долларов";
//           else if (enterNumber % 10 == 8) cout << "восемнадцать долларов";
//           else if (enterNumber % 10 == 9) cout << "девятнадцать долларов";
//       }
//
//       if ((enterNumber / 10) % 10 == 2) cout << "двадцать ";
//       else if ((enterNumber / 10) % 10 == 3) cout << "тридцать ";
//       else if ((enterNumber / 10) % 10 == 4) cout << "сорок ";
//       else if ((enterNumber / 10) % 10 == 5) cout << "пятьдесят ";
//       else if ((enterNumber / 10) % 10 == 6) cout << "шестьдесят ";
//       else if ((enterNumber / 10) % 10 == 7) cout << "семьдесят ";
//       else if ((enterNumber / 10) % 10 == 8) cout << "восемьдесят ";
//       else if ((enterNumber / 10) % 10 == 9) cout << "девяносто ";
//
//       if ((enterNumber / 10) % 10 != 1)
//       {
//           if (enterNumber % 10 == 0) cout << "долларов";
//           else if (enterNumber % 10 == 1) cout << "один доллар";
//           else if (enterNumber % 10 == 2) cout << "два доллара ";
//           else if (enterNumber % 10 == 3) cout << "три доллара ";
//           else if (enterNumber % 10 == 4) cout << "четыре доллара ";
//           else if (enterNumber % 10 == 5) cout << "пять долларов ";
//           else if (enterNumber % 10 == 6) cout << "шесть долларов ";
//           else if (enterNumber % 10 == 7) cout << "семь долларов ";
//           else if (enterNumber % 10 == 8) cout << "восемь долларов ";
//           else cout << "девять долларов ";
//       }
//   }
//
//   cout << endl << endl;
//   return 0;
//}









    //int numFin = 0;

    //cout << "Введите порядковый номер пальца руки: ";
    //cin >> numFin;
    //cout << endl;

    //    cout << "Вы ввели номер: ";

        //if (numFin == 1) 
        //    cout << "большого пальца\n";       
        //else if (numFin == 2)
        //    cout << "указательного пальца\n";
        //else if (numFin == 3) 
        //    cout << "среднего пальца\n";
        //else if (numFin == 4) 
        //    cout << "безымяного пальца\n";
        //else if (numFin == 5) 
        //    cout << "мизинца\n";
        //else
        //    cout << "Нет пальца с таким номером, введите число от 1 до 5!\n";
                                        
                                        /*OR*/
        //switch (numFin)
        //{
        //case 1: cout << "большого пальца\n";
        //    break;
        //case 2: cout << "указательного пальца\n";
        //    break;
        //case 3: cout << "среднего пальца\n";
        //    break;
        //case 4: cout << "безымяного пальца\n";
        //    break;
        //case 5: cout << "мизинца\n";
        //    break;
        //default: cout << "Нет пальца с таким номером, введите число от 1 до 5!\n";
        //    break;
        //}





    //int a, b, c;

    //cout << "Проверка знаний таблицы умножения =) \n\n";
    //cout << "Введите два целых однозначных числа:\n\n";
    //cout << "Первое: ";
    //cin >> a;
    //cout << "Второе: ";
    //cin >> b;
    //cout << "Введите результат умножения первого и второго числа: ";
    //cin >> c;
    //cout << endl;


    //if (a * b != c)
    //    cout << "Не правильно =(\n" << "Правильный ответ : " << (a * b);
    //else
    //{
    //    cout << "Все правильно. Вы молодец!";
    //}






    
    
    
    //int a;
    //cin >> a;

    //if (a < 10)
    //{
    //    cout << a << " меньше 10\n";
    //    cout << "fuk";

    //}
    //else
    //{
    //    if (a > 10)
    //    {
    //        cout << a << " больше 10\n";
    //        cout << "hi";
    //    }
    //    else
    //    {
    //        cout << a << " равно 10\n";
    //        cout << "puk";
    //    }
    //}


    //(a < 10) ? (a += 5) : (a -= 1);
    //cout << a;









    //int amountSymbols;
    //int typeLines;
    //int condition = 0;
    //string symbols;

    //cout << "Введите символ: ";
    //cin >> symbols;
    //cout << "Введите количество символов: ";
    //cin >> amountSymbols;
    //cout << "Как будут выводиться символы?" << endl << 
    //        "1 - ветрикально" << endl << "2 - горизонтально" << endl;
    //cin >> typeLines;
    //cout << endl << endl;

    //if (typeLines == 1)
    //{
    //    do
    //    {
    //        cout << symbols << endl;
    //        condition++;

    //    } while (condition < amountSymbols);
    //}

    //else
    //{
    //    do
    //    {
    //        cout << symbols << " ";
    //        condition++;

    //    } while (condition < amountSymbols);
    //}








    //int a;
    //int stopRepeat=0;

    //for (; ;)
    //{
    //    cout << "Введите число, кторое хотите возвести в квадрат:" << endl;
    //    cin >> a;
    //    cout << a * a << endl;
    //    cout << "Что бы продолжить введите - 1" << endl
    //        << "Чтобы выйти нажмите - 2" << endl;
    //    cin >> stopRepeat;


    //    if (stopRepeat == 2)
    //        break;






