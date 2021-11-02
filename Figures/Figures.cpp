#include <iostream>
#include <Windows.h>
#include <filesystem>
#include <vector>

#define in std::cin
#define out std::cout

#pragma comment(lib, "winmm.lib") // для PlaySound

void clear() {
    system("cls");
}

void line(short lineType, short figureSize, char texture) {
    int i = 0;

    if (lineType == 1) {
        while (i < figureSize) {
            out << texture;
            i++;
        }
    }
    else if (lineType == 2) {
        while (i < figureSize) {
            out << texture << "\n";
            i++;
        }
    }
}

void square(short lineType, short figureSize, char texture) {
    int i = 0,
        j = 0;

    if (lineType == 1) {
        while (i < figureSize) {
            while (j < figureSize)
            {
                out << texture;
                j++;
            }
            j = 0;
            out << "\n";
            i++;
        }
    }
    else if (lineType == 2) {
        while (i < figureSize) {
            while (j < figureSize) {
                if (i == 0 || i == figureSize - 1) {
                    out << texture;
                    j++;
                }
                else if (j == 0 || j == figureSize - 1) {
                    out << texture;
                    j++;
                }
                else {
                    out << " ";
                    j++;
                }
            }
            j = 0;
            out << "\n";
            i++;
        }
    }
}

void rectangle(short lineType, short rectangleWidth, short rectangleLength, char texture) {
    if (lineType == 1) {
        for (int n = 0; n < rectangleWidth; n++) {
            for (int k = 0; k < rectangleLength; k++)
            {
                out << texture;
            }
            out << "\n";
        }
    }
    else if (lineType == 2) {
        for (int n = 0; n < rectangleWidth; n++) {
            for (int k = 0; k < rectangleLength; k++) {
                if (n == 0 || n == rectangleWidth - 1) {
                    out << texture;
                }
                else if (k == 0 || k == rectangleLength - 1) {
                    out << texture;
                }
                else {
                    out << " ";
                }
            }
            out << "\n";
        }
    }
}

void triangle(short lineType, short figureSize, char texture) {
    int middle = figureSize / 2;

    if (lineType == 1) {
        for (int n = 0; n < middle + 1; n++) {
            for (int k = 0; k < figureSize; k++) {
                if ((k < middle - n || k > middle + n) && n != middle) {
                    out << " ";
                }
                else {
                    out << texture;
                }
            }
            out << "\n";
        }
    }
    else if (lineType == 2) {
        for (int n = 0; n < middle + 1; n++) {
            for (int k = 0; k < figureSize; k++) {
                if (((k < middle - n || k > middle + n) || (k > middle - n && k < middle + n)) && n != middle) {
                    out << " ";
                }
                else {
                    out << texture;
                }
            }
            out << "\n";
        }
    }
}

void romb(short lineType, short figureSize, char texture) {
    const int middle = figureSize / 2;

    if (lineType == 1) {
        for (int n = 0; n < middle + 1; n++) {
            for (int k = 0; k < figureSize; k++) {
                if ((k < middle - n || k > middle + n) && n != middle) {
                    out << " ";
                }
                else {
                    out << texture;
                }
            }
            out << "\n";
        }
        for (int n = middle - 1; n >= 0; n--) {
            for (int k = 0; k < figureSize; k++) {
                if ((k < middle - n || k > middle + n) && n != middle) {
                    out << " ";
                }
                else {
                    out << texture;
                }
            }
            out << "\n";
        }
    }
    else if (lineType == 2) {
        for (int n = 0; n < middle + 1; n++) {
            for (int k = 0; k < figureSize; k++) {
                if (((k < middle - n || k > middle + n) || (k > middle - n && k < middle + n)) && n != middle) {
                    out << " ";
                }
                else if (n == middle) {
                    if (k == 0 || k == figureSize - 1) {
                        out << texture;
                    }
                    else {
                        out << " ";
                    }
                }
                else {
                    out << texture;
                }
            }
            out << "\n";
        }
        for (int n = middle - 1; n >= 0; n--) {
            for (int k = 0; k < figureSize; k++) {
                if (((k < middle - n || k > middle + n) || (k > middle - n && k < middle + n)) && n != middle) {
                    out << " ";
                }
                else {
                    out << texture;
                }
            }
            out << "\n";
        }
    }
}

// С кодом нам помогли
// Это вчерашний алгоритм, идею которого Вы дали, только с законченной реализацией
void superSquare(short figureSize, char texture) {
    for (int i = 0; i < figureSize; i++) {
        for (int j = 0; j < figureSize; j++) {
            if (i % 2 == 0 && j > i - 1 && j < figureSize - i // проверка на начало внутренних квадратов и его границ (начало на четных строках, первая и последняя заполнятся целиком)
                || (figureSize - i + 1) % 2 == 0 && j > figureSize - i - 2 && j <= i // определение длины стороны внутреннего квадрата (те самые n - 2k)
                || j % 2 == 0 && i > j - 1 && i < figureSize - j // аналогичные проверки, но уже для высот внутренних квадратов и для заполнения боковых сторон основного квадрата
                || (figureSize - j + 1) % 2 == 0 && i > figureSize - j - 2 && j >= i) {
                out << texture << " ";
            }
            else {
                out << "  ";
            }
        }
        out << "\n";
    }
}

void grid(short figureSize, char texture){
    for(int i = 0; i < figureSize; i++){
        for(int j = 0; j < figureSize; j++){
            if(i % 2 != 0){
                std::cout << texture << texture;
                if(j == figureSize - 1){
                    std::cout << texture;
                }
            } else {
                std::cout << " " << texture;
            }
        }
        std::cout << " \n";
    }
}

void plus(short figureSize, char texture){
    int middle = figureSize / 2;

    for(int i = 0; i < figureSize; i++){
        for(int j = 0; j < figureSize; j++){
            if(i == middle){
                std::cout << texture;
            } else if(j == middle){
                std::cout << texture;
            } else {
                std::cout << " ";
            }
        }
        std::cout << "\n";
    }
}

void cross(short figureSize, char texture){
    int middle = figureSize / 2;

    for (int n = middle - 1; n >= 0; n--) {
            for (int k = 0; k < figureSize; k++) {
                if (((k < middle - n || k > middle + n) || (k > middle - n && k < middle + n)) && n != middle) {
                    std::cout << " ";
                }
                else {
                    std::cout << texture;
                }
            }
            std::cout << "\n";
    }
    
    for (int n = 1; n < middle + 1; n++) {
            for (int k = 0; k < figureSize; k++) {
                if (((k < middle - n || k > middle + n) || (k > middle - n && k < middle + n)) && n != middle) {
                    std::cout << " ";
                }
                else if (n == middle) {
                    if (k == 0 || k == figureSize - 1) {
                        std::cout << texture;
                    }
                    else {
                        std::cout << " ";
                    }
                }
                else {
                    std::cout << texture;
                }
            }
            std::cout << "\n";
    }
}

void draw(short figureType, char texture, short lineType = 0, short figureSize = 0, short rectangleLength = 0, short rectangleWidth = 0) {
    switch (figureType)
    {
    case 1:
        line(lineType, figureSize, texture);
        break;
    case 2:
        square(lineType, figureSize, texture);
        break;
    case 3:
        rectangle(lineType, rectangleWidth, rectangleLength, texture);
        break;
    case 4:
        triangle(lineType, figureSize, texture);
        break;
    case 5:
        romb(lineType, figureSize, texture);
        break;
    case 6:
        superSquare(figureSize, texture);
        break;
    case 7:
        grid(figureSize, texture);
        break;
    case 8:
        plus(figureSize, texture);
        break;
    case 9:
        cross(figureSize, texture);
        break;
    }
}

int main()
{
    setlocale(0, "");

    const int NOT_USED = system("color 0E");

    short figureType,
        lineType,
        figureSize,
        rectangleLength,
        rectangleWidth;
    char texture;

    out << "\a\t Добро пожаловать в гениальную программу \"ФИГУРОЧКИ\"\n\n";
    
    out << "\t\t\t[->]^KaVkAz^CaSe^[<-]\n\n\n\n";
    out << "[1] Линия\n";
    out << "[2] Квадрат\n";
    out << "[3] Прямоугольник\n";
    out << "[4] Равносторонний треугольник\n";
    out << "[5] Ромб\n";
    out << "[6] Вложенные квадраты\n";
    out << "[7] Сетка\n";
    out << "[8] Плюс\n";
    out << "[9] Крест\n\n";

    out << "[-] Выбрите фигуру -> ";
    in >> figureType;

    clear();
    switch (figureType)
    {
    case 1:
        out << "[-] Выбрана линия\n\n";
        out << "[-] Типы линий:\n";
        out << "[1] Горизонтальная\n";
        out << "[2] Вертикальная\n\n";
        out << "[-] Выберите тип линии -> ";
        in >> lineType;
        while (lineType != 1 && lineType != 2) {
            out << "[-] Неверный тип линии. Пожалуйста, повторите ввод -> ";
            in >> lineType;
        }
        out << "\n[-] Введите длину линии -> ";
        in >> figureSize;
        while (figureSize <= 0) {
            out << "[-] Введен нулевой или отрицатеельный размер фигуры. Пожалуйста, повторите ввод -> ";
            in >> figureSize;
        }

        out << "[-] Выберите текстуру -> ";
        in >> texture;
        clear();
        draw(figureType, texture, lineType, figureSize);
        break;
    case 2:
        out << "[-] Выбран квадрат\n\n";

        out << "[-] Типы квадратов:\n";
        out << "[1] Заполненный\n";
        out << "[2] Незаполненный\n\n";
        out << "[-] Выберите тип квадрата -> ";
        in >> lineType;
        while (lineType != 1 && lineType != 2) {
            out << "[-] Неверный тип квадрата. Пожалуйста, повторите ввод -> ";
            in >> lineType;
        }
        out << "\n[-] Введите длину стороны квадрата -> ";
        in >> figureSize;
        while (figureSize <= 0) {
            out << "[-] Введен нулевой или отрицатеельный размер фигуры. Пожалуйста, повторите ввод -> ";
            in >> figureSize;
        }
        out << "[-] Выберите текстуру -> ";
        in >> texture;
        clear();
        draw(figureType, texture, lineType, figureSize);
        break;
    case 3:
        out << "[-] Выбран прямоугольник\n\n";

        out << "[-] Типы прямоугольников:\n";
        out << "[1] Заполненный\n";
        out << "[2] Незаполненный\n\n";
        out << "[-] Выберите тип прямоугольника -> ";
        in >> lineType;
        while (lineType != 1 && lineType != 2) {
            out << "[-] Неверный тип прямоугольника. Пожалуйста, повторите ввод -> ";
            in >> lineType;
        }

        out << "[-] Введите длину прямоугольника -> ";
        in >> rectangleLength;
        while (rectangleLength <= 0) {
            out << "[-] Введена нулевая или отрицатеельная длина фигуры. Пожалуйста, повторите ввод -> ";
            in >> rectangleLength;
        }
        out << "[-] Введите ширину прямоугольника -> ";
        in >> rectangleWidth;
        while (rectangleWidth <= 0) {
            out << "[-] Введена нулевая или отрицатеельная ширина фигуры. Пожалуйста, повторите ввод -> ";
            in >> rectangleWidth;
        }

        out << "[-] Выберите текстуру -> ";
        in >> texture;
        clear();
        draw(figureType, texture, lineType, 0, rectangleLength, rectangleWidth);
        break;
        break;
    case 4:
        out << "[-] Выбран равносторонний треугольник\n\n";

        out << "[-] Типы равносторонних треугольников:\n";
        out << "[1] Заполненный\n";
        out << "[2] Незаполненный\n\n";
        out << "[-] Выберите тип равностороннего треугольника -> ";
        in >> lineType;
        while (lineType != 1 && lineType != 2) {
            out << "[-] Неверный тип равностороннего треугольника. Пожалуйста, повторите ввод -> ";
            in >> lineType;
        }

        out << "[-] Введите длину основания -> ";
        in >> figureSize;
        while (figureSize <= 0 || figureSize % 2 == 0) {
            out << "Введена нулевая или отрицатеельная длина основания или она четная. Пожалуйста, повторите ввод -> ";
            in >> figureSize;
        }
        out << "[-] Выберите текстуру -> ";
        in >> texture;
        clear();
        draw(figureType, texture, lineType, figureSize, 0, 0);
        break;
    case 5:
        out << "[-] Выбран ромб\n\n";

        out << "[-] Типы ромбов:\n";
        out << "[1] Заполненный\n";
        out << "[2] Незаполненный\n\n";
        out << "[-] Выберите тип ромба -> ";
        in >> lineType;
        while (lineType != 1 && lineType != 2) {
            out << "[-] Неверный тип ромба. Пожалуйста, повторите ввод -> ";
            in >> lineType;
        }

        out << "[-] Введите длину основания -> ";
        in >> figureSize;
        while (figureSize <= 0 || figureSize % 2 == 0) {
            out << "Введена нулевая или отрицатеельная длина основания или она четная. Пожалуйста, повторите ввод -> ";
            in >> figureSize;
        }
        out << "[-] Выберите текстуру -> ";
        in >> texture;
        clear();
        draw(figureType, texture, lineType, figureSize, 0, 0);
        break;
    case 6:
        out << "[-] Выбраны вложенные квадраты\n\n";

        out << "[-] Введите длину стороны квадрата -> ";
        in >> figureSize;
        while (figureSize <= 0) {
            out << "[-] Введен нулевой или отрицатеельный размер фигуры. Пожалуйста, повторите ввод -> ";
            in >> figureSize;
        }
        out << "[-] Выберите текстуру -> ";
        in >> texture;
        clear();
        draw(figureType, texture, 0, figureSize, 0, 0);
        break;
    case 7:
        out << "[-] Выбрана сетка\n\n";

        out << "[-] Введите длину стороны сетки -> ";
        in >> figureSize;
        while (figureSize <= 0) {
            out << "[-] Введен нулевой или отрицатеельный размер фигуры. Пожалуйста, повторите ввод -> ";
            in >> figureSize;
        }
        out << "[-] Выберите текстуру -> ";
        in >> texture;
        clear();
        draw(figureType, texture, 0, figureSize, 0, 0);
        break;
    case 8:
        out << "[-] Выбран плюс\n\n";

        out << "[-] Введите длину стороны плюса -> ";
        in >> figureSize;
        while (figureSize <= 0) {
            out << "[-] Введен нулевой или отрицатеельный размер фигуры. Пожалуйста, повторите ввод -> ";
            in >> figureSize;
        }
        out << "[-] Выберите текстуру -> ";
        in >> texture;
        clear();
        draw(figureType, texture, 0, figureSize, 0, 0);
        break;
    case 9:
        out << "[-] Выбран крест\n\n";

        out << "[-] Введите длину стороны креста -> ";
        in >> figureSize;
        while (figureSize <= 0) {
            out << "[-] Введен нулевой или отрицатеельный размер фигуры. Пожалуйста, повторите ввод -> ";
            in >> figureSize;
        }
        out << "[-] Выберите текстуру -> ";
        in >> texture;
        clear();
        draw(figureType, texture, 0, figureSize, 0, 0);
        break;
    default:
        out << "\aТы как из дурки сбежал? Тут всего 2 цифры";
        break;
    }

    // Вообще, изначально я хотел запустить эту музыку на фон в самом начале программы, но SND_ASYNC возвращает
    // PlaySound сразу после его исполнения, поэтому что-то длиннее пары секунд так не запустить
    PlaySound(TEXT("C:\\DetroitCityAmbient.wav"), NULL, SND_FILENAME); // я бы скин ул и сам файл, но он весит 44мб,
    // а таким способом можно только вавки запускать. Еще я пытался поиграться с получением текущего пути, чтобы запускать
    // трек вне зависимости от расположения exe, но там какая-то лютая дичь началась с std::filesystem::path и LPCWSTR

    return 0;
}