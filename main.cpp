#include <iostream>
using namespace std;


long double factorial(int N)
{
    if(N < 0) // если пользователь ввел отрицательное число
        return 0; // возвращаем ноль
    if (N == 0) // если пользователь ввел ноль,
        return 1; // возвращаем факториал от нуля - не удивляетесь, но это 1 =)
    else // Во всех остальных случаях
        return N * factorial(N - 1); // делаем рекурсию.
}
int main() {
    setlocale(LC_ALL, "Russian");
    int n,m;
    cout << "\n" "Введите число N: " << endl;
    cin >> n;
    m = n;
    cout << "\n" "Cтрока треугольника Паскаля: " << endl;
    while (m!=-1){
        cout << (factorial(n) / (factorial(m) * factorial(n-m))) << " ";
        m-=1;
    }
    cout << endl;
}
