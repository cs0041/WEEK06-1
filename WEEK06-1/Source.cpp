#include <iostream>

using namespace std;

int main()
{
    int a;
    cin >> a;
    int c[100];
    for (int i = 0; i < a; i++)
    {
        cin >> c[i];
    }
    for (int i = 0; i < a - 1; i++)
    {
        bool out = false;
        if (i == a - 2)
        {
            out = true;
        }
        for (int j = 0; j < a - 1; j++)
        {
            if (c[j] > c[j + 1])
            {
                int p = c[j];
                c[j] = c[j + 1];
                c[j + 1] = p;
                out = true;
            }
        }
        if (out)
        {
            for (int i = 0; i < a; i++)
            {
                cout << c[i] << " ";
            }
            cout << endl;
            int num = 0;
            for (int i = 0; i < a - 1; i++)
            {

                if (c[i] < c[i + 1])
                {
                    num++;
                }
            }
            if (num == a - 1)
            {
                return 0;
            }
        }

    }
    return 0;
}
