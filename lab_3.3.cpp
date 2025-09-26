// Lab_03_3.cpp
// Щур Божена
// Лабораторна робота № 3.3
// Розгалуження, задане графіком функції
// Варіант 27

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x;   // вхідний аргумент
    double R1;  // вхідний параметр 1
    double R2;  // вхідний параметр 2
    double y;   // результат обчислення виразу

    cout << "R1 = "; cin >> R1;
    cout << "R2 = "; cin >> R2;
    cout << "x = "; cin >> x;

    // розгалуження в повній формі
    if (x <= -R1)
        y = R1;   // горизонтальна лінія
    else
        if (-R1 < x && x <= R1)
            y = R1 - sqrt(R1 * R1 - x * x);   // нижнє півколо
        else
            if (R1 < x && x <= 6)
                y = R1 + ((-R2 - R1) / (6 - R1)) * (x - R1);   // спадна лінія
            else
                y = -R2 + ((6 + R2) / 3.0) * (x - 6);   // висхідна лінія

    cout << endl;
    cout << "y = " << y << endl;

    cin.get();
    return 0;
}