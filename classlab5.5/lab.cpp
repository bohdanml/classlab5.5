#include <iostream>
#include "Windows.h"

using namespace std;

double r1 = 0;
double r2 = 0;

// Рекурсивна функція для знаходження n-го члена арифметичної прогресії
int nthTerm(int firstTerm, int difference, int n) {
    if (n == 1) {
        return firstTerm;
    }
    else {
        r1++;
        return nthTerm(firstTerm, difference, n - 1) + difference;
    }
}

// Рекурсивна функція для знаходження суми перших n членів арифметичної прогресії
int sumOfTerms(int firstTerm, int difference, int n) {
    if (n == 1) {
        return firstTerm;
    }
    else {
        r2++;
        return sumOfTerms(firstTerm, difference, n - 1) + nthTerm(firstTerm, difference, n);
    }
}

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    // Зчитуємо вхідні дані з клавіатури
    int firstTerm, difference, n;
    std::cout << "Введіть перший член: ";
    std::cin >> firstTerm;
    std::cout << "Введіть різницю: ";
    std::cin >> difference;
    std::cout << "Введіть значення n: ";
    std::cin >> n;

    // Виводимо n-й член арифметичної прогресії
    std::cout << "n-й член: " << nthTerm(firstTerm, difference, n) << std::endl;
    std::cout << "глибина рекурсії:" << r1 << std::endl;

    // Виводимо суму перших n членів арифметичної прогресії
    std::cout << "Сума перших " << n << " членів: " << sumOfTerms(firstTerm, difference, n) << std::endl;
    std::cout << "глибина рекурсії:" << r2 << std::endl;
    return 0;
}
