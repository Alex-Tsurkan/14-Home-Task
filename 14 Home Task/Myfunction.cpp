#include <iostream>
#include "Myfunction.h"


using namespace std;

int chekChoose(int a, int b) // ������� �������� �������� ������ ������ ����
{
    int i; //������� �����
    char* choose = new char; // �������� ������
    do
    {
        i = 1;

        cout << "�������� ���� �����:" << endl;
        cin >> choose;
        if ((isdigit(*choose)) == false) // �������� �� ���� �������
        {
            cout << "�������� �����. ���������� ��� ���!" << endl;
            cout << "\n\n" << endl;
            i = 0;
        }
        else if (atoi(choose) < a || atoi(choose) > b) // �������� ��������, ���� int
        {
            cout << "�������� �����. ���������� ��� ���!" << endl;
            cout << "\n\n" << endl;
            i = 0;
        }
    } while (i == 0);
    //   int ChooseSelect;
       //return ChooseSelect = atoi(choose); // ���������� char � int � ������� int
    return atoi(choose); // ���������� char � int � ������� int
}