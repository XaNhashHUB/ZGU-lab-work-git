#include <iostream>
using namespace std;

// Функция сложения двух чисел
int Summ(int num1, int num2) {
    return num1 + num2;
}


void PrintResult(int num1, int num2) {
    cout << num1 << " + " << num2 << " = " << Summ(num1, num2) << endl;

}

int main()
{
    std::cout << "Hello everybody!\n";

    PrintResult(1, 9);

    PrintResult(5, 5);

    return 0;
}
