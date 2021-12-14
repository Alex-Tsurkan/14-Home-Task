#include <iostream>
#include "Trie.h"
#include "Myfunction.h"



using namespace std;


int main()
{
    setlocale(LC_ALL, "");

    TrieNode* Node14 = getNewNode();

    string H1 = "hello";
    string H2 = "helloween";
    string H3 = "story";
    string H4 = "storynight";
    insert(Node14, H1);
    insert(Node14, H2);
    insert(Node14, H3);
    insert(Node14, H4);
    string res;

  

    int ChooseSelect = 1;
    while (ChooseSelect == 1)
    {
        string pref;
        
        cout << "������� ������ �����(�������)" << endl;
        cin >> pref;
        
        
        findWordbyPref(Node14, res, pref);

      
        if (!res.empty())
        {
            cout <<"Possible words by the entered prefix: " << res << endl;
        }
        pref.clear();
        res.clear();
        cout << "��� ����������� � ������� ������ ������ ����, ��������: 1" << endl;
        cout << "��� ���������� ������ � ����������, ��������: 0" << endl;

        ChooseSelect = chekChoose(0, 1);
    }
 
   
    return 0;
}