# Практическая работа 5. Условные конструкции

## Теоретический материал

[Условные выражения](https://metanit.com/cpp/tutorial/2.7.php)


```c++
#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int b = 15;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    
    cout << endl << "Test 01. Operator <" << endl;
    cout << "(a < b): " << (a < b) << endl;
    bool a_lower_b = a < b;
    cout << "a_lower_b = (a < b): " << a_lower_b << endl;
    
    cout << endl << "Test 02. Operator <=" << endl;
    cout << "(a <= b): " << (a <= b) << endl;
    bool a_lower_eq_b = a <= b;
    cout << "a_lower_eq_b = (a <= b): " << a_lower_eq_b << endl;
    
    cout << endl << "Test 03. Operator ==" << endl;
    cout << "(a == b): " << (a == b) << endl;
    bool a_eq_b = a == b;
    cout << "a_eq_b = (a == b): " << a_eq_b << endl;
    
    cout << endl << "Test 04. Operator !=" << endl;
    cout << "(a != b): " << (a != b) << endl;
    bool a_neq_b = a != b;
    cout << "a_neq_b = (a != b): " << a_neq_b << endl;
    
    cout << endl << "Test 05. Operator >=" << endl;
    cout << "(a >= b): " << (a >= b) << endl;
    bool a_greater_eq_b = a >= b;
    cout << "a_greater_eq_b = (a >= b): " << a_greater_eq_b << endl;
    
    cout << endl << "Test 06. Operator >" << endl;
    cout << "(a > b): " << (a > b) << endl;
    bool a_greater_b = a > b;
    cout << "a_greater_b = (a > b): " << a_greater_b << endl;

    return 0;
}
```


[Конструкция if-else и тернарный оператор](https://metanit.com/cpp/tutorial/2.12.php)

## Синтаксис
```c++
if (УСЛОВИЕ)
    ВЫРАЖЕНИЕ1;
[else if (УСЛОВИЕ2)]
    ВЫРАЖЕНИЕ2;
[else]
    ВЫРАЖЕНИЕ;
```

## Конструкция if


## Конструкция if-else

## Конструкция if-else-if

## Конструкция if-else-if-else