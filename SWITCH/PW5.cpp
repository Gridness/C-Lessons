#include <iostream>
#include <Windows.h>

int main()
{
    setlocale(0, "");

    char operation;
    char language;
    short numberOfWord;

    const int NOT_USED = system("color 30");

    std::cout << "Выберите язык программы\n\n";
    
    std::cout << "[r] Русский\n";
    std::cout << "[e] English\n";
    std::cout << "[x] Выйти\n\n";

    std::cin >> language;
    switch (language)
    {
    case 'r':
        std::cout << "[w] Вывести список слов\n";
        std::cout << "[x] Выйти\n\n";
        std::cout << "Что делать будем? ";
        std::cin >> operation;
        switch (operation)
        {
        case 'w':
            std::cout << "[1] Привет\n";
            std::cout << "[2] Пока\n";
            std::cout << "[3] Здарова\n";
            std::cout << "[4] Ало\n";
            std::cout << "[5] Че\n";
            std::cout << "[6] Аче\n";
            std::cout << "[7] Да\n";
            std::cout << "[8] Ниче\n";
            std::cout << "[9] Нет\n";
            std::cout << "[10] Абоба\n";
            std::cout << "[11] Прогрмирвне\n";
            std::cout << "[12] Цэ\n";
            std::cout << "[13] Плюс\n";
            std::cout << "[14] Минус\n";
            std::cout << "[15] Равно\n";
            std::cout << "[0] Выйти\n\n";
            std::cout << "Какое слово хош? ";
            std::cin >> numberOfWord;
            switch (numberOfWord)
            {
            case 1:
                std::cout << "Привет";
                break;
            case 2:
                std::cout << "Пока";
                break;
            case 3:
                std::cout << "Здарова";
                break;
            case 4:
                std::cout << "Ало";
                break;
            case 5:
                std::cout << "Че";
                break;
            case 6:
                std::cout << "Аче";
                break;
            case 7:
                std::cout << "Да";
                break;
            case 8:
                std::cout << "Ниче";
                break;
            case 9:
                std::cout << "Нет";
                break;
            case 10:
                std::cout << "Абоба";
                break;
            case 11:
                std::cout << "Прогрмирвне";
                break;
            case 12:
                std::cout << "Цэ";
                break;
            case 13:
                std::cout << "Плюс";
                break;
            case 14:
                std::cout << "Минус";
                break;
            case 15:
                std::cout << "Равно";
                break;
            case 0:
                std::cout << "Как знаешь, Васян";
                return 0;
                break;
            default:
                std::cout << "Э, бро, зачем так поступаешь, бро";
                break;
            }
            break;
        case 'x':
            std::cout << "Как знаешь, Васян";
            return 0;
            break;
        default:
            std::cout << "Че это такое, бро";
            break;
        }
        break;
    case 'e':
        std::cout << "[w] Display the list of words\n";
        std::cout << "[x] Exit\n\n";
        std::cout << "What shall we do? ";
        std::cin >> operation;
        switch (operation)
        {
        case 'w':
            std::cout << "[1] Hello\n";
            std::cout << "[2] Bye\n";
            std::cout << "[3] Sup\n";
            std::cout << "[4] Yo\n";
            std::cout << "[5] What\n";
            std::cout << "[6] Hm\n";
            std::cout << "[7] Yes\n";
            std::cout << "[8] Nothng\n";
            std::cout << "[9] No\n";
            std::cout << "[10] This\n";
            std::cout << "[11] Programming\n";
            std::cout << "[12] That\n";
            std::cout << "[13] Plus\n";
            std::cout << "[14] Minus\n";
            std::cout << "[15] Equals\n";
            std::cout << "[0] Exit\n\n";
            std::cout << "What word do you want to be displayed? ";
            std::cin >> numberOfWord;
            switch (numberOfWord)
            {
            case 1:
                std::cout << "Hello";
                break;
            case 2:
                std::cout << "Bye";
                break;
            case 3:
                std::cout << "Sup";
                break;
            case 4:
                std::cout << "Yo";
                break;
            case 5:
                std::cout << "What";
                break;
            case 6:
                std::cout << "Hm";
                break;
            case 7:
                std::cout << "Yes";
                break;
            case 8:
                std::cout << "Nothng";
                break;
            case 9:
                std::cout << "No";
                break;
            case 10:
                std::cout << "This";
                break;
            case 11:
                std::cout << "Programming";
                break;
            case 12:
                std::cout << "That";
                break;
            case 13:
                std::cout << "Plus";
                break;
            case 14:
                std::cout << "Minus";
                break;
            case 15:
                std::cout << "Equals";
                break;
            case 0:
                std::cout << "As you wish, Vasyan";
                return 0;
                break;
            default:
                std::cout << "Hey, why do you do such a thing?";
                break;
            }
            break;
        case 'x':
            std::cout << "As you wish, Vasyan";
            return 0;
            break;
        default:
            std::cout << "What is this, dude?";
            break;
        }
        break;
        break;
    case 'x':
        std::cout << "Как знаешь, Васян";
        return 0;
        break;
    default:
        std::cout << "Че";
        break;
    }

    return 0;
}