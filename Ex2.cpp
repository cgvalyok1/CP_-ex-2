#include <iostream>
using namespace std;

/*
������� �� ������� ��������� �����.
���������� ���������� ����������� ����� ���.
*/

int main()
{
    char *c = new char[30];
    int counter = 0;
    for (int p = 0; p < 5; p++)
    {
        cin >> c;
        int i = 0; //���-�� ���� � �����
        while (c[i])
        {
            i++;
        }
        bool flag = true;
        for (int j = 0; j < (i / 2); j++)
            if (c[j] != c[i-j-1])
            {
                flag = false;
            }
        if (flag)
        {
            counter++;
        }
    }
    cout << counter << endl;

}


