#include "ApeX.h"

#define in std::cin
#define out std::cout

#pragma comment(lib, "ApeX.lib")

void clear() {
    system("cls");
}

void changeBackgroundColor() {
    clear();
    system("color 30");
    ApeX::Print::stylizedMessage("Успех", 32);
    ApeX::Print::centeredMessage("Цвет фона изменен", 32);
}

void changeFontColor() {
    clear();
    system("color 0E");
    ApeX::Print::stylizedMessage("Успех", 32);
    ApeX::Print::centeredMessage("Цвет текста изменен", 34);
}

void showDataTypeSize(std::string dataType) {
    clear();
    if (dataType == "INT" || dataType == "FLOAT" || dataType == "LONG") {
        ApeX::Print::stylizedMessage(dataType, 32);
        ApeX::Print::stylizedMessage("", 32, 43, 45, 124, false, false, false);
        ApeX::Print::stylizedMessage("Размер: 4 б", 32, 43, 45, 124, false, false, false);
        ApeX::Print::stylizedMessage("", 32, 43, 45, 124, false, false);
    }
    else if (dataType == "SHORT") {
        ApeX::Print::stylizedMessage(dataType, 32);
        ApeX::Print::stylizedMessage("", 32, 43, 45, 124, false, false, false);
        ApeX::Print::stylizedMessage("Размер: 2 б", 32, 43, 45, 124, false, false, false);
        ApeX::Print::stylizedMessage("", 32, 43, 45, 124, false, false);
    }
    else if (dataType == "DOUBLE") {
        ApeX::Print::stylizedMessage(dataType, 32);
        ApeX::Print::stylizedMessage("", 32, 43, 45, 124, false, false, false);
        ApeX::Print::stylizedMessage("Размер: 8 б", 32, 43, 45, 124, false, false, false);
        ApeX::Print::stylizedMessage("", 32, 43, 45, 124, false, false);
    }
    else if (dataType == "BOOL" || dataType == "CHAR") {
        ApeX::Print::stylizedMessage(dataType, 32);
        ApeX::Print::stylizedMessage("", 32, 43, 45, 124, false, false, false);
        ApeX::Print::stylizedMessage("Размер: 1 б", 32, 43, 45, 124, false, false, false);
        ApeX::Print::stylizedMessage("", 32, 43, 45, 124, false, false);
    }
}

void showMessage() {
    clear();
    ApeX::Print::stylizedMessage("Привет, я функция", 32);
}

void drawASquare(char texture) {
    clear();
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            out << texture;
        }
        out << "\n";
    }
}

int main()
{
    setlocale(0, "");

    int function;
    char texture;
    std::string dataType;

    ApeX::Copyright::copyright();

    ApeX::Print::stylizedMessage("Функции", 32);
    ApeX::Print::stylizedMessage("", 32, 43, 45, 124, false, false, false);
    ApeX::Print::stylizedMessage("[1] Очистить консоль", 32, 43, 45, 124, false, false, false);
    ApeX::Print::stylizedMessage("[2] Изменить цвет фона", 32, 43, 45, 124, false, false, false);
    ApeX::Print::stylizedMessage("[3] Изменить цвет текста", 32, 43, 45, 124, false, false, false);
    ApeX::Print::stylizedMessage("[4] Вывести размер типа данных", 32, 43, 45, 124, false, false, false);
    ApeX::Print::stylizedMessage("[5] Показать сообщение", 32, 43, 45, 124, false, false, false);
    ApeX::Print::stylizedMessage("[6] Квадрат 5x5", 32, 43, 45, 124, false, false, false);
    ApeX::Print::stylizedMessage("", 32, 43, 45, 124, false, false);

    out << "Выберите функцию -> ";
    in >> function;
    switch (function)
    {
    case 1:
        clear();
        break;
    case 2:
        changeBackgroundColor();
        break;
    case 3:
        changeFontColor();
        break;
    case 4:
        out << "Выберите тип данных -> ";
        in >> dataType;
        showDataTypeSize(dataType);
        break;
    case 5:
        showMessage();
        break;
    case 6:
        out << "Выберите текстуру -> ";
        in >> texture;
        drawASquare(texture);
        break;
    default:
        clear();
        ApeX::Print::stylizedMessage("Ошибка", 32);
        out << "Такой функции нет";
        break;
    }

    return 0;
}
