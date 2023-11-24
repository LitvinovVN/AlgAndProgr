Написать консольное приложение, выполняющее построение таблицы истинности для логического выражения Y = (A or B) and !C.
Пример работы программы:

```
*** Y = (A or B) and !C  ***
A       B       C |     D       E       Y        | Y1 | IsEqual
-       -       - |     -       -       -        | -- | -------
0       0       0 |     0       1       0        | 0  |  +
0       0       1 |     0       0       0        | 0  |  +
0       1       0 |     1       1       1        | 1  |  +
0       1       1 |     1       0       0        | 0  |  +
1       0       0 |     1       1       1        | 1  |  +
1       0       1 |     1       0       0        | 0  |  +
1       1       0 |     1       1       1        | 1  |  +
1       1       1 |     1       0       0        | 0  |  +
```

```C++
#include <iostream>

using namespace std;

int main()
{    
    cout << "*** Y = (A or B) and !C  ***" << endl;

    cout << "A\tB\tC |\tD\tE\tY\t | Y1 | IsEqual" << endl;
    cout << "-\t-\t- |\t-\t-\t-\t | -- | -------"<< endl;
    for(int i = 0; i <= 7; i++)
    {
        bool A = (i & 4) == 4;
        bool B = (i & 2) == 2;
        bool C = (i & 1) == 1;

        bool D = A || B;
        bool E = !C;
        bool Y = D && E;

        bool Y1 = (A or B) and  not C;

        cout << A << "\t" << B << "\t" << C <<" |\t";
        cout << D <<"\t" << E <<"\t" << Y <<"\t";
        cout << " | " << Y1 << "  | ";
        //(Y==Y1) ? (cout << " + ") : (cout << " - ");
        cout << ((Y==Y1) ? " + " : " - ");
        cout << endl;
    }

    return 0;
}
    return 0;
}
```


```C++
#include <iostream>

using namespace std;

int main()
{
    bool A[8], B[8], C[8], D[8], E[8], Y[8], Y1[8];
    
    cout << "*** Y = (A or B) and !C  ***" << endl;
    cout << "A\tB\tC |\tD\tE\tY\t | Y1 | IsEqual" << endl;
    cout << "-\t-\t- |\t-\t-\t-\t | -- | -------"<< endl;
    
    for(int i = 0; i <= 7; i++)
    {
        A[i] = (i & 4) == 4;
        B[i] = (i & 2) == 2;
        C[i] = (i & 1) == 1;

        D[i] = !A[i];
        E[i] = D[i] && B[i];
        Y[i] = E[i] || C[i];

        Y1[i] = not A[i] and B[i] or C[i];
    }
    
    for(int i = 0; i <= 7; i++)
    {
        cout << A[i] << "\t" << B[i] << "\t" << C[i] <<" |\t";
        cout << D[i] <<"\t" << E[i] <<"\t" << Y[i] <<"\t";
        cout << " | " << Y1[i] << "  | ";
        cout << ((Y[i]==Y1[i]) ? " + " : " - ");
        cout << endl;
    }

    return 0;
}
```
