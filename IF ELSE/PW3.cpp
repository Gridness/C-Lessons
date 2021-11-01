#include <iostream>
#include <math.h>

int main()
{
    setlocale(0, "");

    char operation;
    double firstNum, secondNum;
    int firstNumForPercent, secondNumForPercent;

    std::cout << "[!] Калькулятор\n\n";
    std::cout << "[+] Сложение\n";
    std::cout << "[-] Вычитание\n";
    std::cout << "[*] Умножение\n";
    std::cout << "[/] Деление\n";
    std::cout << "[%] Остаток от деления\n";
    std::cout << "[s] Корень из числа\n";
    std::cout << "[p] Возведение в степень\n";
    std::cout << "[c] Косинус числа\n\n";

    std::cout << "[!] Введите операцию: ";
    std::cin >> operation;

    if (operation == '%') {
        std::cout << "[!] Введите первое число: ";
        std::cin >> firstNumForPercent;
        std::cout << "[!] Введите второе число: ";
        std::cin >> secondNumForPercent;
    }
    else if(operation == 's' || operation == 'c') {
        std::cout << "[!] Введите число: ";
        std::cin >> firstNum;
    }
    else {
        std::cout << "[!] Введите первое число: ";
        std::cin >> firstNum;
        std::cout << "[!] Введите второе число: ";
        std::cin >> secondNum;
    }

    if (operation == '+') {
        std::cout << "[!] Результат: " << firstNum << " + " << secondNum << " = " << firstNum + secondNum;
    }
    else if (operation == '-') {
        std::cout << "[!] Результат: " << firstNum << " - " << secondNum << " = " << firstNum - secondNum;
    }
    else if (operation == '*') {
        std::cout << "[!] Результат: " << firstNum << " * " << secondNum << " = " << firstNum * secondNum;
    }
    else if (operation == '/') {
        std::cout << "[!] Результат: " << firstNum << " / " << secondNum << " = " << firstNum / secondNum;
    }
    else if (operation == '%') {
        std::cout << "[!] Результат: " << firstNumForPercent << " % " << secondNumForPercent << " = " << firstNumForPercent % secondNumForPercent;
    }
    else if (operation == 's') {
        std::cout << "[!] Результат: sqrt(" << firstNum << ") = " << sqrt(firstNum);
    }
    else if (operation == 'p') {
        std::cout << "[!] Результат: " << firstNum << " ^ " << secondNum << " = " << pow(firstNum, secondNum);
    }
    else if (operation == 'c') {
        std::cout << "[!] Результат: cos(" << firstNum << ") = " << cos(firstNum);
    }
    else {
        std::cout << "[!] Некорректный математический оператор. Пожалуйста, перезапустите программу и введите оператор из предложенного списка";
    }

    return 0;
}