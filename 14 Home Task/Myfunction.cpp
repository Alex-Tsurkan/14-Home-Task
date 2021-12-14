#include <iostream>
#include "Myfunction.h"


using namespace std;

int chekChoose(int a, int b) // функция проверки верности выбора пункта меню
{
    int i; //счетчик цикла
    char* choose = new char; // вводимая строка
    do
    {
        i = 1;

        cout << "Сделайте свой выбор:" << endl;
        cin >> choose;
        if ((isdigit(*choose)) == false) // проверка на ввод символа
        {
            cout << "Неверный выбор. Попробуйте еще раз!" << endl;
            cout << "\n\n" << endl;
            i = 0;
        }
        else if (atoi(choose) < a || atoi(choose) > b) // проверка значений, если int
        {
            cout << "Неверный выбор. Попробуйте еще раз!" << endl;
            cout << "\n\n" << endl;
            i = 0;
        }
    } while (i == 0);
    //   int ChooseSelect;
       //return ChooseSelect = atoi(choose); // приведение char к int и возврат int
    return atoi(choose); // приведение char к int и возврат int
}