#include "ModulesUstynovych.h"

using namespace std;

string inputData(string msg)
{
    string data = "";
    cout << msg;
    getline(cin, data);
    return data;
}


void addUnit(Settings * root)
{

    Settings *buff = root;
    while (buff->next != nullptr)
    {
        buff = buff->next;
    }
    if(buff != root)
    {
        buff->next = new Settings();
        buff = buff->next;
    }

    strcpy(buff->numSelection, inputData("������ ����� ������: ").c_str());
    strcpy(buff->nameSelection, inputData("������ ����� ������: ").c_str());
    strcpy(buff->codeUnit, inputData("������ ����� ������: ").c_str());
    strcpy(buff->nameUnit, inputData("������ ����� ������: ").c_str());

}

void deleteUnit(Settings *&root)
{
    Settings *find = root;
    Settings *buff = nullptr;

    char searchCode[4] = "";
    cout << endl << "������ ��� ������, ����� ����� ������ ��������: ";
    cin >> searchCode;

    while(find != nullptr)
    {
        if (strcmp(searchCode, find->codeUnit) == 0)
        {
            if (find == root)
                root = root->next;
            else
                buff->next = find->next;
            delete(find);
            break;
        }
        buff = find;
        find = find->next;
    }
}
