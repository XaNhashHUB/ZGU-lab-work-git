#include <iostream>
using namespace std;

// Функция сложения двух чисел
int Summ(int num1, int num2) {
    return num1 + num2;
}

void PrintSumm(int a, int b) {
    cout << Summ(a, b);
}

int main()
{
    std::cout << "Hello everybody!\n";

    PrintSumm(1, 9);

    return 0;
}
