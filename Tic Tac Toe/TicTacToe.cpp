#include "ApeX.h"

#define in std::cin
#define out std::cout
#define clear system("cls")
#define change_bg system("color 02")

#pragma comment(lib, "ApeX.lib")

char currentMove = 'x';
char playersFigure = 'x';
char AIFigure = 'o';
char winner;

int boardSize = 3;
char board3[3][3];
char board4[4][4];
char board5[5][5];

/* Не готов только выбор цветов */

void menuError() {
    clear;
    ApeX::Print::stylizedMessage("Крестики-нолики", 38, 43, 45, 124, true, true, false);
    ApeX::Print::stylizedMessage("Ошибка", 38, 43, 45, 124, true, false, true);
    ApeX::Print::stylizedMessage("", 38, 43, 45, 124, false, false, false);
    ApeX::Print::stylizedMessage("Такой опции в меню нет", 38, 43, 45, 124, false, false, false);
    ApeX::Print::stylizedMessage("", 38, 43, 45, 124, false, false);
    Sleep(2000);
}

void determineWinner(char winner) {
    clear;

    if (winner == 'x') {
        ApeX::Print::stylizedMessage("Крестики-нолики", 38, 43, 45, 124, true, true, false);
        ApeX::Print::stylizedMessage("Игра окончена", 38, 43, 45, 124, true, false, true);
        ApeX::Print::stylizedMessage("", 38, 43, 45, 124, false, false, false);
        ApeX::Print::stylizedMessage("Победили крестики!", 38, 43, 45, 124, false, false, false);
        ApeX::Print::stylizedMessage("", 38, 43, 45, 124, false, false);
    }
    else {
        ApeX::Print::stylizedMessage("Крестики-нолики", 38, 43, 45, 124, true, true, false);
        ApeX::Print::stylizedMessage("Игра окончена", 38, 43, 45, 124, true, false, true);
        ApeX::Print::stylizedMessage("", 38, 43, 45, 124, false, false, false);
        ApeX::Print::stylizedMessage("Победили нолики!", 38, 43, 45, 124, false, false, false);
        ApeX::Print::stylizedMessage("", 38, 43, 45, 124, false, false);
    }
    exit(1);
}

bool checkWinCondition() {

    switch (boardSize)
    {
    case 3:
        if ((board3[0][0] == board3[0][1] && board3[0][1] == board3[0][2] && board3[0][0] == 'x')
            || (board3[1][0] == board3[1][1] && board3[1][1] == board3[1][2] && board3[1][0] == 'x')
            || (board3[2][0] == board3[2][1] && board3[2][1] == board3[2][2] && board3[2][0] == 'x')
            || (board3[0][0] == board3[1][0] && board3[1][0] == board3[2][0] && board3[0][0] == 'x')
            || (board3[0][1] == board3[1][1] && board3[1][1] == board3[2][1] && board3[0][1] == 'x')
            || (board3[0][2] == board3[1][2] && board3[1][2] == board3[2][2] && board3[0][2] == 'x')
            || (board3[0][0] == board3[1][1] && board3[1][1] == board3[2][2] && board3[0][0] == 'x')
            || (board3[0][2] == board3[1][1] && board3[1][1] == board3[2][0] && board3[0][2] == 'x')) {
            winner = 'x';
            return true;
        }
        else if ((board3[0][0] == board3[0][1] && board3[0][1] == board3[0][2] && board3[0][0] == 'o')
            || (board3[1][0] == board3[1][1] && board3[1][1] == board3[1][2] && board3[1][0] == 'o')
            || (board3[2][0] == board3[2][1] && board3[2][1] == board3[2][2] && board3[2][0] == 'o')
            || (board3[0][0] == board3[1][0] && board3[1][0] == board3[2][0] && board3[0][0] == 'o')
            || (board3[0][1] == board3[1][1] && board3[1][1] == board3[2][1] && board3[0][1] == 'o')
            || (board3[0][2] == board3[1][2] && board3[1][2] == board3[2][2] && board3[0][2] == 'o')
            || (board3[0][0] == board3[1][1] && board3[1][1] == board3[2][2] && board3[0][0] == 'o')
            || (board3[0][2] == board3[1][1] && board3[1][1] == board3[2][0] && board3[0][2] == 'o')) {
            winner = 'o';
            return true;
        }
        break;
    case 4:
        if ((board4[0][0] == board4[0][1] && board4[0][1] == board4[0][2] && board4[0][2] == board4[0][3] && board4[0][0] == 'x')
            || (board4[1][0] == board4[1][1] && board4[1][1] == board4[1][2] && board4[1][2] == board4[1][3] && board4[1][0] == 'x')
            || (board4[2][0] == board4[2][1] && board4[2][1] == board4[2][2] && board4[2][2] == board4[2][3] && board4[2][0] == 'x')
            || (board4[3][0] == board4[3][1] && board4[3][1] == board4[3][2] && board4[3][2] == board4[3][3] && board4[3][0] == 'x')
            || (board4[0][0] == board4[1][0] && board4[1][0] == board4[2][0] && board4[2][0] == board4[3][0] && board4[0][0] == 'x')
            || (board4[0][1] == board4[1][1] && board4[1][1] == board4[2][1] && board4[2][1] == board4[3][1] && board4[0][1] == 'x')
            || (board4[0][2] == board4[1][2] && board4[1][2] == board4[2][2] && board4[2][2] == board4[3][2] && board4[0][2] == 'x')
            || (board4[0][3] == board4[1][3] && board4[1][3] == board4[2][3] && board4[2][3] == board4[3][3] && board4[0][0] == 'x')) {
            winner = 'x';
            return true;
        }
        else if ((board4[0][0] == board4[0][1] && board4[0][1] == board4[0][2] && board4[0][2] == board4[0][3] && board4[0][0] == 'o')
            || (board4[1][0] == board4[1][1] && board4[1][1] == board4[1][2] && board4[1][2] == board4[1][3] && board4[1][0] == 'o')
            || (board4[2][0] == board4[2][1] && board4[2][1] == board4[2][2] && board4[2][2] == board4[2][3] && board4[2][0] == 'o')
            || (board4[3][0] == board4[3][1] && board4[3][1] == board4[3][2] && board4[3][2] == board4[3][3] && board4[3][0] == 'o')
            || (board4[0][0] == board4[1][0] && board4[1][0] == board4[2][0] && board4[2][0] == board4[3][0] && board4[0][0] == 'o')
            || (board4[0][1] == board4[1][1] && board4[1][1] == board4[2][1] && board4[2][1] == board4[3][1] && board4[0][1] == 'o')
            || (board4[0][2] == board4[1][2] && board4[1][2] == board4[2][2] && board4[2][2] == board4[3][2] && board4[0][2] == 'o')
            || (board4[0][3] == board4[1][3] && board4[1][3] == board4[2][3] && board4[2][3] == board4[3][3] && board4[0][0] == 'o')) {
            winner = 'o';
            return true;
        }
        break;
    case 5:
        if ((board5[0][0] == board5[0][1] && board5[0][1] == board5[0][2] && board5[0][2] == board5[0][3] && board5[0][3] == board5[0][4] && board5[0][0] == 'x')
            || (board5[1][0] == board5[1][1] && board5[1][1] == board5[1][2] && board5[1][2] == board5[1][3] && board5[1][3] == board5[1][4] && board5[1][0] == 'x')
            || (board5[2][0] == board5[2][1] && board5[2][1] == board5[2][2] && board5[2][2] == board5[2][3] && board5[2][3] == board5[2][4] && board5[2][0] == 'x')
            || (board5[3][0] == board5[3][1] && board5[3][1] == board5[3][2] && board5[3][2] == board5[3][3] && board5[3][3] == board5[3][4] && board5[3][0] == 'x')
            || (board5[4][0] == board5[4][1] && board5[4][1] == board5[4][2] && board5[4][2] == board5[4][3] && board5[4][3] == board5[4][4] && board5[4][0] == 'x')
            || (board5[0][0] == board5[1][0] && board5[1][0] == board5[2][0] && board5[2][0] == board5[3][0] && board5[3][0] == board5[4][0] && board5[0][0] == 'x')
            || (board5[0][1] == board5[1][1] && board5[1][1] == board5[2][1] && board5[2][1] == board5[3][1] && board5[3][1] == board5[4][1] && board5[0][1] == 'x')
            || (board5[0][2] == board5[1][2] && board5[1][2] == board5[2][2] && board5[2][2] == board5[3][2] && board5[3][2] == board5[4][2] && board5[0][2] == 'x')
            || (board5[0][3] == board5[1][3] && board5[1][3] == board5[2][3] && board5[2][3] == board5[3][3] && board5[3][3] == board5[4][3] && board5[0][3] == 'x')
            || (board5[0][4] == board5[1][4] && board5[1][4] == board5[2][4] && board5[2][4] == board5[3][4] && board5[3][4] == board5[4][4] && board5[0][4] == 'x')
            || (board5[0][0] == board5[1][1] && board5[1][1] == board5[2][2] && board5[2][2] == board5[3][3] && board5[3][3] == board5[4][4] && board5[0][0] == 'x')
            || (board5[0][4] == board5[1][3] && board5[1][3] == board5[2][2] && board5[2][2] == board5[3][1] && board5[3][1] == board5[4][0] && board5[0][4] == 'x')) {
            winner = 'x';
            return true;
        }
        else if ((board5[0][0] == board5[0][1] && board5[0][1] == board5[0][2] && board5[0][2] == board5[0][3] && board5[0][3] == board5[0][4] && board5[0][0] == 'o')
            || (board5[1][0] == board5[1][1] && board5[1][1] == board5[1][2] && board5[1][2] == board5[1][3] && board5[1][3] == board5[1][4] && board5[1][0] == 'o')
            || (board5[2][0] == board5[2][1] && board5[2][1] == board5[2][2] && board5[2][2] == board5[2][3] && board5[2][3] == board5[2][4] && board5[2][0] == 'o')
            || (board5[3][0] == board5[3][1] && board5[3][1] == board5[3][2] && board5[3][2] == board5[3][3] && board5[3][3] == board5[3][4] && board5[3][0] == 'o')
            || (board5[4][0] == board5[4][1] && board5[4][1] == board5[4][2] && board5[4][2] == board5[4][3] && board5[4][3] == board5[4][4] && board5[4][0] == 'o')
            || (board5[0][0] == board5[1][0] && board5[1][0] == board5[2][0] && board5[2][0] == board5[3][0] && board5[3][0] == board5[4][0] && board5[0][0] == 'o')
            || (board5[0][1] == board5[1][1] && board5[1][1] == board5[2][1] && board5[2][1] == board5[3][1] && board5[3][1] == board5[4][1] && board5[0][1] == 'o')
            || (board5[0][2] == board5[1][2] && board5[1][2] == board5[2][2] && board5[2][2] == board5[3][2] && board5[3][2] == board5[4][2] && board5[0][2] == 'o')
            || (board5[0][3] == board5[1][3] && board5[1][3] == board5[2][3] && board5[2][3] == board5[3][3] && board5[3][3] == board5[4][3] && board5[0][3] == 'o')
            || (board5[0][4] == board5[1][4] && board5[1][4] == board5[2][4] && board5[2][4] == board5[3][4] && board5[3][4] == board5[4][4] && board5[0][4] == 'o')
            || (board5[0][0] == board5[1][1] && board5[1][1] == board5[2][2] && board5[2][2] == board5[3][3] && board5[3][3] == board5[4][4] && board5[0][0] == 'o')
            || (board5[0][4] == board5[1][3] && board5[1][3] == board5[2][2] && board5[2][2] == board5[3][1] && board5[3][1] == board5[4][0] && board5[0][4] == 'o')) {
            winner = 'o';
            return true;
        }
        break;
    }

    return false;
}

void switchTurn() {
    if (currentMove == 'x') {
        currentMove = 'o';
    }
    else {
        currentMove = 'x';
    }
}

void makeAMove() {
    int x, y;
    if (playersFigure == currentMove) {
        out << "Введите x: ";
        in >> x;
        out << "Введите y: ";
        in >> y;
        switch (boardSize)
        {
        case 3:
            while (board3[x][y] == 'x' || board3[x][y] == 'o') {
                out << "Введите x: ";
                in >> x;
                out << "Введите y: ";
                in >> y;
            }
            board3[x][y] = playersFigure;
            break;
        case 4:
            while (board4[x][y] == 'x' || board4[x][y] == 'o') {
                out << "Введите x: ";
                in >> x;
                out << "Введите y: ";
                in >> y;
            }
            board4[x][y] = playersFigure;
            break;
        case 5:
            while (board5[x][y] == 'x' || board5[x][y] == 'o') {
                out << "Введите x: ";
                in >> x;
                out << "Введите y: ";
                in >> y;
            }
            board5[x][y] = playersFigure;
            break;
        }
        checkWinCondition();
        switchTurn();
    }
    else {
        x = rand() % boardSize;
        y = rand() % boardSize;
        switch (boardSize)
        {
        case 3:
            while (board3[x][y] == 'x' || board3[x][y] == 'o') {
                x = rand() % boardSize;
                y = rand() % boardSize;
            }
            board3[x][y] = AIFigure;
            break;
        case 4:
            while (board4[x][y] == 'x' || board4[x][y] == 'o') {
                x = rand() % boardSize;
                y = rand() % boardSize;
            }
            board4[x][y] = AIFigure;
            break;
        case 5:
            while (board5[x][y] == 'x' || board5[x][y] == 'o') {
                x = rand() % boardSize;
                y = rand() % boardSize;
            }
            board5[x][y] = AIFigure;
            break;
        }
        checkWinCondition();
        switchTurn();
    }
}

void drawBoard() {
    clear;
    
    switch (boardSize)
    {
    case 3:
        for (int i = 0; i < boardSize; i++) {
            for (int j = 0; j < boardSize; j++) {
                out << board3[i][j] << " ";
            }
            out << "\n\n";
        }
        break;
    case 4:
        for (int i = 0; i < boardSize; i++) {
            for (int j = 0; j < boardSize; j++) {
                out << board4[i][j] << " ";
            }
            out << "\n\n";
        }
        break;
    case 5:
        for (int i = 0; i < boardSize; i++) {
            for (int j = 0; j < boardSize; j++) {
                out << board5[i][j] << " ";
            }
            out << "\n\n";
        }
        break;
    }

    makeAMove();
}

void initPlayer() {
    ApeX::Print::stylizedMessage("Крестики-нолики", 38, 43, 45, 124, true, true, false);
    ApeX::Print::stylizedMessage("Игра", 38, 43, 45, 124, true, false, true);
    ApeX::Print::stylizedMessage("", 38, 43, 45, 124, false, false, false);
    ApeX::Print::stylizedMessage("За кого хотите играть?", 38, 43, 45, 124, false, false, false);
    ApeX::Print::stylizedMessage("", 38, 43, 45, 124, false, false, false);
    ApeX::Print::stylizedMessage("!. Назад", 38, 43, 45, 124, false, false, false);
    ApeX::Print::stylizedMessage("", 38, 43, 45, 124, false, false);
    in >> playersFigure;
    if (playersFigure == '!') {
        exit(2);
    }

    if (playersFigure == 'o') {
        AIFigure = 'x';
    }
}

void initBoard() {
    switch (boardSize)
    {
    case 3:
        for (int i = 0; i < boardSize; i++) {
            for (int j = 0; j < boardSize; j++) {
                board3[i][j] = '#';
            }
        }
        break;
    case 4:
        for (int i = 0; i < boardSize; i++) {
            for (int j = 0; j < boardSize; j++) {
                board4[i][j] = '#';
            }
        }
        break;
    case 5:
        for (int i = 0; i < boardSize; i++) {
            for (int j = 0; j < boardSize; j++) {
                board5[i][j] = '#';
            }
        }
        break;
    }
}

void play() {
    clear;

    initPlayer();
    initBoard();
    while (!checkWinCondition()) {
        drawBoard();
    }

    determineWinner(winner);
}

void settings() {
    clear;
    int option;

    ApeX::Print::stylizedMessage("Крестики-нолики", 38, 43, 45, 124, true, true, false);
    ApeX::Print::stylizedMessage("Настройки", 38, 43, 45, 124, true, false, true);
    ApeX::Print::stylizedMessage("", 38, 43, 45, 124, false, false, false);
    ApeX::Print::stylizedMessage("1. Цвет крестика", 38, 43, 45, 124, false, false, false);
    ApeX::Print::stylizedMessage("2. Цвет нолика", 38, 43, 45, 124, false, false, false);
    ApeX::Print::stylizedMessage("3. Право первого хода", 38, 43, 45, 124, false, false, false);
    ApeX::Print::stylizedMessage("4. Размер поля", 38, 43, 45, 124, false, false, false);
    ApeX::Print::stylizedMessage("", 38, 43, 45, 124, false, false, false);
    ApeX::Print::stylizedMessage("0. Назад", 38, 43, 45, 124, false, false, false);
    ApeX::Print::stylizedMessage("", 38, 43, 45, 124, false, false);
    in >> option;
    switch (option)
    {
    case 1:
        clear;
        ApeX::Print::stylizedMessage("Крестики-нолики", 38, 43, 45, 124, true, true, false);
        ApeX::Print::stylizedMessage("Цвет крестика", 38, 43, 45, 124, true, false, true);
        ApeX::Print::stylizedMessage("", 38, 43, 45, 124, false, false, false);
        ApeX::Print::stylizedMessage("0. Назад", 38, 43, 45, 124, false, false, false);
        ApeX::Print::stylizedMessage("", 38, 43, 45, 124, false, false);
        break;
    case 2:
        clear;
        ApeX::Print::stylizedMessage("Крестики-нолики", 38, 43, 45, 124, true, true, false);
        ApeX::Print::stylizedMessage("Цвет нолика", 38, 43, 45, 124, true, false, true);
        ApeX::Print::stylizedMessage("", 38, 43, 45, 124, false, false, false);
        ApeX::Print::stylizedMessage("0. Назад", 38, 43, 45, 124, false, false, false);
        ApeX::Print::stylizedMessage("", 38, 43, 45, 124, false, false);
        clear;
        break;
    case 3:
        clear;
        ApeX::Print::stylizedMessage("Крестики-нолики", 38, 43, 45, 124, true, true, false);
        ApeX::Print::stylizedMessage("Право первого хода", 38, 43, 45, 124, true, false, true);
        ApeX::Print::stylizedMessage("", 38, 43, 45, 124, false, false, false);
        ApeX::Print::stylizedMessage("x -> Крестик", 38, 43, 45, 124, false, false, false);
        ApeX::Print::stylizedMessage("o -> Нолик", 38, 43, 45, 124, false, false, false);
        ApeX::Print::stylizedMessage("", 38, 43, 45, 124, false, false, false);
        ApeX::Print::stylizedMessage("!. Назад", 38, 43, 45, 124, false, false, false);
        ApeX::Print::stylizedMessage("", 38, 43, 45, 124, false, false);
        in >> currentMove;
        if (currentMove == 'x') {
            clear;
            ApeX::Print::stylizedMessage("Крестики-нолики", 38, 43, 45, 124, true, true, false);
            ApeX::Print::stylizedMessage("Право первого хода", 38, 43, 45, 124, true, false, true);
            ApeX::Print::stylizedMessage("", 38, 43, 45, 124, false, false, false);
            ApeX::Print::stylizedMessage("Первыми теперь ходят X", 38, 43, 45, 124, false, false, false);
            ApeX::Print::stylizedMessage("", 38, 43, 45, 124, false, false);
            Sleep(2000);
            settings();
        }
        else if (currentMove == 'o') {
            clear;
            ApeX::Print::stylizedMessage("Крестики-нолики", 38, 43, 45, 124, true, true, false);
            ApeX::Print::stylizedMessage("Право первого хода", 38, 43, 45, 124, true, false, true);
            ApeX::Print::stylizedMessage("", 38, 43, 45, 124, false, false, false);
            ApeX::Print::stylizedMessage("Первыми теперь ходят O", 38, 43, 45, 124, false, false, false);
            ApeX::Print::stylizedMessage("", 38, 43, 45, 124, false, false);
            Sleep(2000);
            settings();
        }
        else if (currentMove == '!') {
            settings();
        }
        else {
            menuError();
            settings();
        }
        break;
    case 4:
        clear;
        ApeX::Print::stylizedMessage("Крестики-нолики", 38, 43, 45, 124, true, true, false);
        ApeX::Print::stylizedMessage("Размер поля", 38, 43, 45, 124, true, false, true);
        ApeX::Print::stylizedMessage("", 38, 43, 45, 124, false, false, false);
        ApeX::Print::stylizedMessage("3 -> 3x3", 38, 43, 45, 124, false, false, false);
        ApeX::Print::stylizedMessage("4 -> 4x4", 38, 43, 45, 124, false, false, false);
        ApeX::Print::stylizedMessage("5 -> 5x5", 38, 43, 45, 124, false, false, false);
        ApeX::Print::stylizedMessage("", 38, 43, 45, 124, false, false, false);
        ApeX::Print::stylizedMessage("0. Назад", 38, 43, 45, 124, false, false, false);
        ApeX::Print::stylizedMessage("", 38, 43, 45, 124, false, false);
        in >> boardSize;
        switch (boardSize)
        {
        case 3:
            clear;
            ApeX::Print::stylizedMessage("Крестики-нолики", 38, 43, 45, 124, true, true, false);
            ApeX::Print::stylizedMessage("Право первого хода", 38, 43, 45, 124, true, false, true);
            ApeX::Print::stylizedMessage("", 38, 43, 45, 124, false, false, false);
            ApeX::Print::stylizedMessage("Выбрано поле 3x3", 38, 43, 45, 124, false, false, false);
            ApeX::Print::stylizedMessage("", 38, 43, 45, 124, false, false);
            Sleep(2000);
            settings();
            break;
        case 4:
            clear;
            ApeX::Print::stylizedMessage("Крестики-нолики", 38, 43, 45, 124, true, true, false);
            ApeX::Print::stylizedMessage("Право первого хода", 38, 43, 45, 124, true, false, true);
            ApeX::Print::stylizedMessage("", 38, 43, 45, 124, false, false, false);
            ApeX::Print::stylizedMessage("Выбрано поле 4x4", 38, 43, 45, 124, false, false, false);
            ApeX::Print::stylizedMessage("", 38, 43, 45, 124, false, false);
            Sleep(2000);
            settings();
            break;
        case 5:
            clear;
            ApeX::Print::stylizedMessage("Крестики-нолики", 38, 43, 45, 124, true, true, false);
            ApeX::Print::stylizedMessage("Право первого хода", 38, 43, 45, 124, true, false, true);
            ApeX::Print::stylizedMessage("", 38, 43, 45, 124, false, false, false);
            ApeX::Print::stylizedMessage("Выбрано поле 5x5", 38, 43, 45, 124, false, false, false);
            ApeX::Print::stylizedMessage("", 38, 43, 45, 124, false, false);
            Sleep(2000);
            settings();
            break;
        case 0:
            settings();
            break;
        default:
            menuError();
            settings();
            break;
        }
        break;
    case 0:
        break;
    default:
        clear;
        menuError();
        settings();
        break;
    }
}

void rules() {
    clear;
    int option;

    ApeX::Print::stylizedMessage("Крестики-нолики", 38, 43, 45, 124, true, true, false);
    ApeX::Print::stylizedMessage("Правила", 38, 43, 45, 124, true, false, true);
    ApeX::Print::stylizedMessage("", 38, 43, 45, 124, false, false, false);
    ApeX::Print::stylizedMessage("Поле выбранного размера состоит", 38, 43, 45, 124, false, false, false);
    ApeX::Print::stylizedMessage("из ячеек размером 1x1. Каждый", 38, 43, 45, 124, false, false, false);
    ApeX::Print::stylizedMessage("игрок ходит по очереди,", 38, 43, 45, 124, false, false, false);
    ApeX::Print::stylizedMessage("заполняя любую клетку своей", 38, 43, 45, 124, false, false, false);
    ApeX::Print::stylizedMessage("фигурой, крестиком или", 38, 43, 45, 124, false, false, false);
    ApeX::Print::stylizedMessage("ноликом.", 38, 43, 45, 124, false, false, false);
    ApeX::Print::stylizedMessage("", 38, 43, 45, 124, false, false, false);
    ApeX::Print::stylizedMessage("Победу одерживает игрок,", 38, 43, 45, 124, false, false, false);
    ApeX::Print::stylizedMessage("первый заполнивший либо линию,", 38, 43, 45, 124, false, false, false);
    ApeX::Print::stylizedMessage("либо диагональ своей фигурой", 38, 43, 45, 124, false, false, false);
    ApeX::Print::stylizedMessage("", 38, 43, 45, 124, false, false, false);
    ApeX::Print::stylizedMessage("0. Назад", 38, 43, 45, 124, false, false, false);
    ApeX::Print::stylizedMessage("", 38, 43, 45, 124, false, false);
    in >> option;
    if (option == 0) {
        return;
    }
    else {
        clear;
        menuError();
        rules();
    }
}

void stop() {
    clear;
    exit(1);
}

void menuSwitcher(int menuOption) {
    switch (menuOption)
    {
    case 1:
        play();
        break;
    case 2:
        settings();
        break;
    case 3:
        rules();
        break;
    case 4:
        stop();
        break;
    default:
        clear;
        ApeX::Print::stylizedMessage("Крестики-нолики", 38, 43, 45, 124, true, true, false);
        ApeX::Print::stylizedMessage("Ошибка", 38, 43, 45, 124, true, false, true);
        ApeX::Print::stylizedMessage("", 38, 43, 45, 124, false, false, false);
        ApeX::Print::stylizedMessage("Такой опции в меню нет", 38, 43, 45, 124, false, false, false);
        ApeX::Print::stylizedMessage("", 38, 43, 45, 124, false, false);
        Sleep(2000);
        break;
    }
}

void mainMenu() {
    clear;
    int menuOption;

    ApeX::Print::stylizedMessage("Крестики-нолики", 38, 43, 45, 124, true, true, false);
    ApeX::Print::stylizedMessage("Главное меню", 38, 43, 45, 124, true, false, true);
    ApeX::Print::stylizedMessage("", 38, 43, 45, 124, false, false, false);
    ApeX::Print::stylizedMessage("1. Начать игру", 38, 43, 45, 124, false, false, false);
    ApeX::Print::stylizedMessage("2. Настройки", 38, 43, 45, 124, false, false, false);
    ApeX::Print::stylizedMessage("3. Правила", 38, 43, 45, 124, false, false, false);
    ApeX::Print::stylizedMessage("4. Выйти", 38, 43, 45, 124, false, false, false);
    ApeX::Print::stylizedMessage("", 38, 43, 45, 124, false, false);
    in >> menuOption;
    menuSwitcher(menuOption);
}

int main()
{
    setlocale(0, "");

    change_bg;

    ApeX::Copyright::copyright();

    while (true) {
        mainMenu();
    }

    return 0;
}