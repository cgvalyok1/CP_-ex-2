#include <iostream>
using namespace std;

/*
—читать из консоли несколько строк.
ќпределить количество палиндромов среди них.
(**char / char[][]).
*/

int main()
{
    char *c = new char[30];
    int counter = 0;
    //cin.getline(c, 15);
    for (int p = 0; p < 5; p++)
    {
        cin >> c;
        int i = 0; //кол-во букв в слове
        while (c[i])
        {
            ++i;
        }
        bool flag = true;
        for (int j = 0; j < (i / 2); j++)
            if (c[j] != c[i-j-1])
            {
                flag = false;
            }
        if (flag == true)
        {
            counter++;
        }
    }
    cout << counter << endl;
    /*cout << c << endl;
    cout << i << endl;

    if (flag == false)
        {
            cout << "not pollindrom";
        }
    else
        {
            cout << "pollindrom";
        }*/
}


