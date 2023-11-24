Написать консольное приложение, выполняющее построение таблицы истинности для логического выражения Y = (A or B) and !C
Пример работы программы:
*** Y = (A or B) and !C  ***
A       B       C       D       E       Y        | Y1 | IsEqual
-       -       -       -       -       -        | -- | -------
0       0       0       0       1       0        | 0  |  +
0       0       1       0       0       0        | 0  |  +
0       1       0       1       1       1        | 1  |  +
0       1       1       1       0       0        | 0  |  +
1       0       0       1       1       1        | 1  |  +
1       0       1       1       0       0        | 0  |  +
1       1       0       1       1       1        | 1  |  +
1       1       1       1       0       0        | 0  |  +

```C++
#include <iostream>

using namespace std;

int main()
{    
    cout << "*** Y = (A or B) and !C  ***" << endl;

    cout << "A\tB\tC\tD\tE\tY\t | Y1 | IsEqual" << endl;
    cout << "-\t-\t-\t-\t-\t-\t | -- | -------"<< endl;
    for(int i = 0; i <= 7; i++)
    {
        bool A = (i & 4) == 4;
        bool B = (i & 2) == 2;
        bool C = (i & 1) == 1;

        bool D = A || B;
        bool E = !C;
        bool Y = D && E;

        bool Y1 = (A or B) and  not C;

        cout << A << "\t" << B << "\t" << C <<"\t";
        cout << D <<"\t" << E <<"\t" << Y <<"\t";
        cout << " | " << Y1 << "  | ";
        //(Y==Y1) ? (cout << " + ") : (cout << " - ");
        cout << ((Y==Y1) ? " + " : " - ");
        cout << endl;
    }

    return 0;
}
```
