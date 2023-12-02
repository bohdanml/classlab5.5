#include <iostream>
#include "Windows.h"

using namespace std;

double r1 = 0;
double r2 = 0;

// ���������� ������� ��� ����������� n-�� ����� ����������� �������
int nthTerm(int firstTerm, int difference, int n) {
    if (n == 1) {
        return firstTerm;
    }
    else {
        r1++;
        return nthTerm(firstTerm, difference, n - 1) + difference;
    }
}

// ���������� ������� ��� ����������� ���� ������ n ����� ����������� �������
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

    // ������� ����� ��� � ���������
    int firstTerm, difference, n;
    std::cout << "������ ������ ����: ";
    std::cin >> firstTerm;
    std::cout << "������ ������: ";
    std::cin >> difference;
    std::cout << "������ �������� n: ";
    std::cin >> n;

    // �������� n-� ���� ����������� �������
    std::cout << "n-� ����: " << nthTerm(firstTerm, difference, n) << std::endl;
    std::cout << "������� ������:" << r1 << std::endl;

    // �������� ���� ������ n ����� ����������� �������
    std::cout << "���� ������ " << n << " �����: " << sumOfTerms(firstTerm, difference, n) << std::endl;
    std::cout << "������� ������:" << r2 << std::endl;
    return 0;
}
