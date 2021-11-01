#include "ApeX.h"
#include <math.h>

#define in std::cin
#define out std::cout
#define clear system("cls")
#define change_bg system("color 02")

#pragma comment(lib, "ApeX.lib")

std::vector<double> insertArgs() {
    clear;

    int amountOfArgs;
    std::vector<double> numbers;

    ApeX::Print::stylizedMessage("Калькулятор", 38, 43, 45, 124, true, true, false);
    ApeX::Print::stylizedMessage("Ввод значений", 38, 43, 45, 124, true, false, true);
    
    out << "Выберите количество аргументов -> ";
    in >> amountOfArgs;
    numbers.resize(amountOfArgs);
    clear;
    ApeX::Print::stylizedMessage("Калькулятор", 38, 43, 45, 124, true, true, false);
    ApeX::Print::stylizedMessage("Ввод значений", 38, 43, 45, 124, true, false, true);
    for (int i = 0; i < amountOfArgs; i++) {
        out << "Введите " << i + 1 << " число -> ";
        in >> numbers[i];
    }

    return numbers;
}

void displayResult(std::string operationName, double result) {
    ApeX::Print::stylizedMessage("Калькулятор", 38, 43, 45, 124, true, true, false);
    ApeX::Print::stylizedMessage(operationName, 38, 43, 45, 124, true, false, true);
    ApeX::Print::stylizedMessage("", 38, 43, 45, 124, false, false, false);
    ApeX::Print::stylizedMessage("Результат: " + std::to_string(result), 38, 43, 45, 124, false, false, false);
    ApeX::Print::stylizedMessage("", 38, 43, 45, 124, false, false);
}

void summ(std::vector<double> numbers) {
    double result = 0;
    for (int i = 0; i < numbers.size(); i++) {
        result += numbers[i];
    }

    displayResult("Сложение", result);
}

void sub(std::vector<double> numbers) {
    double result = numbers[0];
    for (int i = 1; i < numbers.size(); i++) {
        numbers[i] -= 2 * numbers[i];
        result += numbers[i];
    }

    displayResult("Вычитание", result);
}

void multiply(std::vector<double> numbers) {
    double result = 1;
    for (int i = 0; i < numbers.size(); i++) {
        result *= numbers[i];
    }

    displayResult("Умножение", result);
}

void divide(std::vector<double> numbers) {
    double result = numbers[0];
    for (int i = 1; i < numbers.size(); i++) {
        numbers[i] = 1 / numbers[i];
        result *= numbers[i];
    }

    displayResult("Деление", result);
}

void sqrt(std::vector<double> numbers) {
    displayResult("Квадратный корень", sqrt(numbers[0]));
}

void sin(std::vector<double> numbers) {
    displayResult("Синус", sin(numbers[0]));
}

void cos(std::vector<double> numbers) {
    displayResult("Косинус", cos(numbers[0]));
}

void tg(std::vector<double> numbers) {
    displayResult("Тангенс", tan(numbers[0]));
}

void ctg(std::vector<double> numbers) {
    double result = 1 / tan(numbers[0]);
    displayResult("Котангенс", result);
}

void arcsin(std::vector<double> numbers) {
    displayResult("Арксинус", asin(numbers[0]));
}

void power(std::vector<double> numbers) {
    displayResult("Степень", pow(numbers[0], numbers[1]));
}

void e(std::vector<double> numbers) {
    displayResult("Экспонента", exp(numbers[0]));
}


void selectOperation(int operation, std::vector<double> numbers) {
    clear;
    switch (operation)
    {
    case 1:
        summ(numbers);
        break;
    case 2:
        sub(numbers);
        break;
    case 3:
        multiply(numbers);
        break;
    case 4:
        divide(numbers);
        break;
    case 5:
        sqrt(numbers);
        break;
    case 6:
        sin(numbers);
        break;
    case 7:
        cos(numbers);
        break;
    case 8:
        tg(numbers);
        break;
    case 9:
        ctg(numbers);
        break;
    case 10:
        arcsin(numbers);
        break;
    case 11:
        power(numbers);
        break;
    case 12:
        e(numbers);
        break;
    }
}

int main()
{
    setlocale(0, "");

    change_bg;

    int operation;
    std::vector<double> numbers;

    ApeX::Copyright::copyright();

    ApeX::Print::stylizedMessage("Калькулятор", 38);
    ApeX::Print::stylizedMessage("", 38, 43, 45, 124, false, false, false);
    ApeX::Print::stylizedMessage("[1] Сложение", 38, 43, 45, 124, false, false, false);
    ApeX::Print::stylizedMessage("[2] Вычитание", 38, 43, 45, 124, false, false, false);
    ApeX::Print::stylizedMessage("[3] Умножение", 38, 43, 45, 124, false, false, false);
    ApeX::Print::stylizedMessage("[4] Деление", 38, 43, 45, 124, false, false, false);
    ApeX::Print::stylizedMessage("[5] Квадратный корень", 38, 43, 45, 124, false, false, false);
    ApeX::Print::stylizedMessage("[6] Синус", 38, 43, 45, 124, false, false, false);
    ApeX::Print::stylizedMessage("[7] Косинус", 38, 43, 45, 124, false, false, false);
    ApeX::Print::stylizedMessage("[8] Тангенс", 38, 43, 45, 124, false, false, false);
    ApeX::Print::stylizedMessage("[9] Котангенс", 38, 43, 45, 124, false, false, false);
    ApeX::Print::stylizedMessage("[10] Арксинус", 38, 43, 45, 124, false, false, false);
    ApeX::Print::stylizedMessage("[11] Возведение в степень", 38, 43, 45, 124, false, false, false);
    ApeX::Print::stylizedMessage("[12] Экспонента", 38, 43, 45, 124, false, false, false);
    ApeX::Print::stylizedMessage("", 38, 43, 45, 124, false, false);

    out << "Выберите действие -> ";
    in >> operation;
    while (operation != 1 && operation != 2 && operation != 3 && operation != 4 && operation != 5 && operation != 6 && operation != 7 && operation != 8 && operation != 9 && operation != 10 && operation != 11 && operation != 12) {
        clear;
        ApeX::Print::stylizedMessage("Ошибка", 38);
        ApeX::Print::stylizedMessage("", 38, 43, 45, 124, false, false, false);
        ApeX::Print::stylizedMessage("Несуществующая операция. Пожалуйста,", 38, 43, 45, 124, false, false, false);
        ApeX::Print::stylizedMessage("повторите ввод", 38, 43, 45, 124, false, false, false);
        ApeX::Print::stylizedMessage("", 38, 43, 45, 124, false, false);
        out << "Выберите действие -> ";
        in >> operation;
    }

    if (operation == 1 || operation == 2 || operation == 3 || operation == 4) {
        numbers = insertArgs();
    }
    else if (operation == 11) {
        numbers.resize(2);
        clear;
        ApeX::Print::stylizedMessage("Калькулятор", 38, 43, 45, 124, true, true, false);
        ApeX::Print::stylizedMessage("Ввод значений", 38, 43, 45, 124, true, false, true);
        out << "Введите число -> ";
        in >> numbers[0];
        clear;
        ApeX::Print::stylizedMessage("Калькулятор", 38, 43, 45, 124, true, true, false);
        ApeX::Print::stylizedMessage("Ввод значений", 38, 43, 45, 124, true, false, true);
        out << "Введите степень -> ";
        in >> numbers[1];
    }
    else {
        numbers.resize(1);
        clear;
        ApeX::Print::stylizedMessage("Калькулятор", 38, 43, 45, 124, true, true, false);
        ApeX::Print::stylizedMessage("Ввод значений", 38, 43, 45, 124, true, false, true);
        out << "Введите число -> ";
        in >> numbers[0];
    }

    selectOperation(operation, numbers);

    return 0;
}
