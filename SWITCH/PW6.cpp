#include <iostream>
#include <Windows.h>

int main()
{
    setlocale(0, "");

    const int NOT_USED = system("color 30");

    short numberOfMonth;
    short dayNumber;
    short typeOfYear;

    std::cout << "[-] Добро пожаловать в гениальную консольную программу по выбору дня месяца,\n разработанную укропом для шизоидов\n\n";

    std::cout << "[1] Январь\n";
    std::cout << "[2] Февраль\n";
    std::cout << "[3] Март\n";
    std::cout << "[4] Апрель\n";
    std::cout << "[5] Май\n";
    std::cout << "[6] Июнь\n";
    std::cout << "[7] Июль\n";
    std::cout << "[8] Август\n";
    std::cout << "[9] Сентябрь\n";
    std::cout << "[10] Октябрь\n";
    std::cout << "[11] Ноябрь\n";
    std::cout << "[12] Декабрь\n\n";

    std::cout << "[-] Выберите месяц -> ";
    std::cin >> numberOfMonth;
    switch (numberOfMonth)
    {
    case 1:
        std::cout << "[-] Выбран январь\n";
        std::cout << "[-] Введите номер дня -> ";
        std::cin >> dayNumber;
        switch (dayNumber)
        {
        case 1:
            std::cout << "[-] " << dayNumber << " января";
            break;
        case 2:
            std::cout << "[-] " << dayNumber << " января";
            break;
        case 3:
            std::cout << "[-] " << dayNumber << " января";
            break;
        case 4:
            std::cout << "[-] " << dayNumber << " января";
            break;
        case 5:
            std::cout << "[-] " << dayNumber << " января";
            break;
        case 6:
            std::cout << "[-] " << dayNumber << " января";
            break;
        case 7:
            std::cout << "[-] " << dayNumber << " января";
            break;
        case 8:
            std::cout << "[-] " << dayNumber << " января";
            break;
        case 9:
            std::cout << "[-] " << dayNumber << " января";
            break;
        case 10:
            std::cout << "[-] " << dayNumber << " января";
            break;
        case 11:
            std::cout << "[-] " << dayNumber << " января";
            break;
        case 12:
            std::cout << "[-] " << dayNumber << " января";
            break;
        case 13:
            std::cout << "[-] " << dayNumber << " января";
            break;
        case 14:
            std::cout << "[-] " << dayNumber << " января";
            break;
        case 15:
            std::cout << "[-] " << dayNumber << " января";
            break;
        case 16:
            std::cout << "[-] " << dayNumber << " января";
            break;
        case 17:
            std::cout << "[-] " << dayNumber << " января";
            break;
        case 18:
            std::cout << "[-] " << dayNumber << " января";
            break;
        case 19:
            std::cout << "[-] " << dayNumber << " января";
            break;
        case 20:
            std::cout << "[-] " << dayNumber << " января";
            break;
        case 21:
            std::cout << "[-] " << dayNumber << " января";
            break;
        case 22:
            std::cout << "[-] " << dayNumber << " января";
            break;
        case 23:
            std::cout << "[-] " << dayNumber << " января";
            break;
        case 24:
            std::cout << "[-] " << dayNumber << " января";
            break;
        case 25:
            std::cout << "[-] " << dayNumber << " января";
            break;
        case 26:
            std::cout << "[-] " << dayNumber << " января";
            break;
        case 27:
            std::cout << "[-] " << dayNumber << " января";
            break;
        case 28:
            std::cout << "[-] " << dayNumber << " января";
            break;
        case 29:
            std::cout << "[-] " << dayNumber << " января";
            break;
        case 30:
            std::cout << "[-] " << dayNumber << " января";
            break;
        case 31:
            std::cout << "[-] " << dayNumber << " января";
            break;
        default:
            std::cout << "[-] В январе только 31 день, или вы ввели неположительное число";
            break;
        }
        break;
    case 2:
        std::cout << "[-] Выбран февраль\n";
        std::cout << "[-] Високосный ли год? Введите 1, если да, и 0, если нет -> ";
        std::cin >> typeOfYear;
        switch (typeOfYear)
        {
        case 1:
            std::cout << "[-] Введите номер дня -> ";
            std::cin >> dayNumber;
            switch (dayNumber)
            {
            case 1:
                std::cout << "[-] " << dayNumber << " февраля";
                break;
            case 2:
                std::cout << "[-] " << dayNumber << " февраля";
                break;
            case 3:
                std::cout << "[-] " << dayNumber << " февраля";
                break;
            case 4:
                std::cout << "[-] " << dayNumber << " февраля";
                break;
            case 5:
                std::cout << "[-] " << dayNumber << " февраля";
                break;
            case 6:
                std::cout << "[-] " << dayNumber << " февраля";
                break;
            case 7:
                std::cout << "[-] " << dayNumber << " февраля";
                break;
            case 8:
                std::cout << "[-] " << dayNumber << " февраля";
                break;
            case 9:
                std::cout << "[-] " << dayNumber << " февраля";
                break;
            case 10:
                std::cout << "[-] " << dayNumber << " февраля";
                break;
            case 11:
                std::cout << "[-] " << dayNumber << " февраля";
                break;
            case 12:
                std::cout << "[-] " << dayNumber << " февраля";
                break;
            case 13:
                std::cout << "[-] " << dayNumber << " февраля";
                break;
            case 14:
                std::cout << "[-] " << dayNumber << " февраля";
                break;
            case 15:
                std::cout << "[-] " << dayNumber << " февраля";
                break;
            case 16:
                std::cout << "[-] " << dayNumber << " февраля";
                break;
            case 17:
                std::cout << "[-] " << dayNumber << " февраля";
                break;
            case 18:
                std::cout << "[-] " << dayNumber << " февраля";
                break;
            case 19:
                std::cout << "[-] " << dayNumber << " февраля";
                break;
            case 20:
                std::cout << "[-] " << dayNumber << " февраля";
                break;
            case 21:
                std::cout << "[-] " << dayNumber << " февраля";
                break;
            case 22:
                std::cout << "[-] " << dayNumber << " февраля";
                break;
            case 23:
                std::cout << "[-] " << dayNumber << " февраля";
                break;
            case 24:
                std::cout << "[-] " << dayNumber << " февраля";
                break;
            case 25:
                std::cout << "[-] " << dayNumber << " февраля";
                break;
            case 26:
                std::cout << "[-] " << dayNumber << " февраля";
                break;
            case 27:
                std::cout << "[-] " << dayNumber << " февраля";
                break;
            case 28:
                std::cout << "[-] " << dayNumber << " февраля";
                break;
            case 29:
                std::cout << "[-] " << dayNumber << " февраля";
                break;
            default:
                std::cout << "[-] В феврале только 29 дней в високосном году, или вы ввели неположительное число";
                break;
            }
            break;
        case 0:
            std::cout << "[-] Введите номер дня -> ";
            std::cin >> dayNumber;
            switch (dayNumber)
            {
            case 1:
                std::cout << "[-] " << dayNumber << " февраля";
                break;
            case 2:
                std::cout << "[-] " << dayNumber << " февраля";
                break;
            case 3:
                std::cout << "[-] " << dayNumber << " февраля";
                break;
            case 4:
                std::cout << "[-] " << dayNumber << " февраля";
                break;
            case 5:
                std::cout << "[-] " << dayNumber << " февраля";
                break;
            case 6:
                std::cout << "[-] " << dayNumber << " февраля";
                break;
            case 7:
                std::cout << "[-] " << dayNumber << " февраля";
                break;
            case 8:
                std::cout << "[-] " << dayNumber << " февраля";
                break;
            case 9:
                std::cout << "[-] " << dayNumber << " февраля";
                break;
            case 10:
                std::cout << "[-] " << dayNumber << " февраля";
                break;
            case 11:
                std::cout << "[-] " << dayNumber << " февраля";
                break;
            case 12:
                std::cout << "[-] " << dayNumber << " февраля";
                break;
            case 13:
                std::cout << "[-] " << dayNumber << " февраля";
                break;
            case 14:
                std::cout << "[-] " << dayNumber << " февраля";
                break;
            case 15:
                std::cout << "[-] " << dayNumber << " февраля";
                break;
            case 16:
                std::cout << "[-] " << dayNumber << " февраля";
                break;
            case 17:
                std::cout << "[-] " << dayNumber << " февраля";
                break;
            case 18:
                std::cout << "[-] " << dayNumber << " февраля";
                break;
            case 19:
                std::cout << "[-] " << dayNumber << " февраля";
                break;
            case 20:
                std::cout << "[-] " << dayNumber << " февраля";
                break;
            case 21:
                std::cout << "[-] " << dayNumber << " февраля";
                break;
            case 22:
                std::cout << "[-] " << dayNumber << " февраля";
                break;
            case 23:
                std::cout << "[-] " << dayNumber << " февраля";
                break;
            case 24:
                std::cout << "[-] " << dayNumber << " февраля";
                break;
            case 25:
                std::cout << "[-] " << dayNumber << " февраля";
                break;
            case 26:
                std::cout << "[-] " << dayNumber << " февраля";
                break;
            case 27:
                std::cout << "[-] " << dayNumber << " февраля";
                break;
            case 28:
                std::cout << "[-] " << dayNumber << " февраля";
                break;
            default:
                std::cout << "[-] В фееврале только 28 дней в невисокосном году, или вы ввели неположительное число";
                break;
            }
            break;
        default:
            std::cout << "[-] Такого типа летоисчисления не существует, шизоид на юзере";
            break;
        }
        break;
    case 3:
        std::cout << "[-] Выбран март\n";
        std::cout << "[-] Введите номер дня -> ";
        std::cin >> dayNumber;
        switch (dayNumber)
        {
        case 1:
            std::cout << "[-] " << dayNumber << " марта";
            break;
        case 2:
            std::cout << "[-] " << dayNumber << " марта";
            break;
        case 3:
            std::cout << "[-] " << dayNumber << " марта";
            break;
        case 4:
            std::cout << "[-] " << dayNumber << " марта";
            break;
        case 5:
            std::cout << "[-] " << dayNumber << " марта";
            break;
        case 6:
            std::cout << "[-] " << dayNumber << " марта";
            break;
        case 7:
            std::cout << "[-] " << dayNumber << " марта";
            break;
        case 8:
            std::cout << "[-] " << dayNumber << " марта";
            break;
        case 9:
            std::cout << "[-] " << dayNumber << " марта";
            break;
        case 10:
            std::cout << "[-] " << dayNumber << " марта";
            break;
        case 11:
            std::cout << "[-] " << dayNumber << " марта";
            break;
        case 12:
            std::cout << "[-] " << dayNumber << " марта";
            break;
        case 13:
            std::cout << "[-] " << dayNumber << " марта";
            break;
        case 14:
            std::cout << "[-] " << dayNumber << " марта";
            break;
        case 15:
            std::cout << "[-] " << dayNumber << " марта";
            break;
        case 16:
            std::cout << "[-] " << dayNumber << " марта";
            break;
        case 17:
            std::cout << "[-] " << dayNumber << " марта";
            break;
        case 18:
            std::cout << "[-] " << dayNumber << " марта";
            break;
        case 19:
            std::cout << "[-] " << dayNumber << " марта";
            break;
        case 20:
            std::cout << "[-] " << dayNumber << " марта";
            break;
        case 21:
            std::cout << "[-] " << dayNumber << " марта";
            break;
        case 22:
            std::cout << "[-] " << dayNumber << " марта";
            break;
        case 23:
            std::cout << "[-] " << dayNumber << " марта";
            break;
        case 24:
            std::cout << "[-] " << dayNumber << " марта";
            break;
        case 25:
            std::cout << "[-] " << dayNumber << " марта";
            break;
        case 26:
            std::cout << "[-] " << dayNumber << " марта";
            break;
        case 27:
            std::cout << "[-] " << dayNumber << " марта";
            break;
        case 28:
            std::cout << "[-] " << dayNumber << " марта";
            break;
        case 29:
            std::cout << "[-] " << dayNumber << " марта";
            break;
        case 30:
            std::cout << "[-] " << dayNumber << " марта";
            break;
        case 31:
            std::cout << "[-] " << dayNumber << " марта";
            break;
        default:
            std::cout << "[-] В марте только 31 день, или вы ввели неположительное число";
            break;
        }
        break;
    case 4:
        std::cout << "[-] Выбран апрель\n";
        std::cout << "[-] Введите номер дня -> ";
        std::cin >> dayNumber;
        switch (dayNumber)
        {
        case 1:
            std::cout << "[-] " << dayNumber << " апреля";
            break;
        case 2:
            std::cout << "[-] " << dayNumber << " апреля";
            break;
        case 3:
            std::cout << "[-] " << dayNumber << " апреля";
            break;
        case 4:
            std::cout << "[-] " << dayNumber << " апреля";
            break;
        case 5:
            std::cout << "[-] " << dayNumber << " апреля";
            break;
        case 6:
            std::cout << "[-] " << dayNumber << " апреля";
            break;
        case 7:
            std::cout << "[-] " << dayNumber << " апреля";
            break;
        case 8:
            std::cout << "[-] " << dayNumber << " апреля";
            break;
        case 9:
            std::cout << "[-] " << dayNumber << " апреля";
            break;
        case 10:
            std::cout << "[-] " << dayNumber << " апреля";
            break;
        case 11:
            std::cout << "[-] " << dayNumber << " апреля";
            break;
        case 12:
            std::cout << "[-] " << dayNumber << " апреля";
            break;
        case 13:
            std::cout << "[-] " << dayNumber << " апреля";
            break;
        case 14:
            std::cout << "[-] " << dayNumber << " апреля";
            break;
        case 15:
            std::cout << "[-] " << dayNumber << " апреля";
            break;
        case 16:
            std::cout << "[-] " << dayNumber << " апреля";
            break;
        case 17:
            std::cout << "[-] " << dayNumber << " апреля";
            break;
        case 18:
            std::cout << "[-] " << dayNumber << " апреля";
            break;
        case 19:
            std::cout << "[-] " << dayNumber << " апреля";
            break;
        case 20:
            std::cout << "[-] " << dayNumber << " апреля";
            break;
        case 21:
            std::cout << "[-] " << dayNumber << " апреля";
            break;
        case 22:
            std::cout << "[-] " << dayNumber << " апреля";
            break;
        case 23:
            std::cout << "[-] " << dayNumber << " апреля";
            break;
        case 24:
            std::cout << "[-] " << dayNumber << " апреля";
            break;
        case 25:
            std::cout << "[-] " << dayNumber << " апреля";
            break;
        case 26:
            std::cout << "[-] " << dayNumber << " апреля";
            break;
        case 27:
            std::cout << "[-] " << dayNumber << " апреля";
            break;
        case 28:
            std::cout << "[-] " << dayNumber << " апреля";
            break;
        case 29:
            std::cout << "[-] " << dayNumber << " апреля";
            break;
        case 30:
            std::cout << "[-] " << dayNumber << " апреля";
            break;
        default:
            std::cout << "[-] В апреле только 30 дней, или вы ввели неположительное число";
            break;
        }
        break;
    case 5:
        std::cout << "[-] Выбран май\n";
        std::cout << "[-] Введите номер дня -> ";
        std::cin >> dayNumber;
        switch (dayNumber)
        {
        case 1:
            std::cout << "[-] " << dayNumber << " мая";
            break;
        case 2:
            std::cout << "[-] " << dayNumber << " мая";
            break;
        case 3:
            std::cout << "[-] " << dayNumber << " мая";
            break;
        case 4:
            std::cout << "[-] " << dayNumber << " мая";
            break;
        case 5:
            std::cout << "[-] " << dayNumber << " мая";
            break;
        case 6:
            std::cout << "[-] " << dayNumber << " мая";
            break;
        case 7:
            std::cout << "[-] " << dayNumber << " мая";
            break;
        case 8:
            std::cout << "[-] " << dayNumber << " мая";
            break;
        case 9:
            std::cout << "[-] " << dayNumber << " мая";
            break;
        case 10:
            std::cout << "[-] " << dayNumber << " мая";
            break;
        case 11:
            std::cout << "[-] " << dayNumber << " мая";
            break;
        case 12:
            std::cout << "[-] " << dayNumber << " мая";
            break;
        case 13:
            std::cout << "[-] " << dayNumber << " мая";
            break;
        case 14:
            std::cout << "[-] " << dayNumber << " мая";
            break;
        case 15:
            std::cout << "[-] " << dayNumber << " мая";
            break;
        case 16:
            std::cout << "[-] " << dayNumber << " мая";
            break;
        case 17:
            std::cout << "[-] " << dayNumber << " мая";
            break;
        case 18:
            std::cout << "[-] " << dayNumber << " мая";
            break;
        case 19:
            std::cout << "[-] " << dayNumber << " мая";
            break;
        case 20:
            std::cout << "[-] " << dayNumber << " мая";
            break;
        case 21:
            std::cout << "[-] " << dayNumber << " мая";
            break;
        case 22:
            std::cout << "[-] " << dayNumber << " мая";
            break;
        case 23:
            std::cout << "[-] " << dayNumber << " мая";
            break;
        case 24:
            std::cout << "[-] " << dayNumber << " мая";
            break;
        case 25:
            std::cout << "[-] " << dayNumber << " мая";
            break;
        case 26:
            std::cout << "[-] " << dayNumber << " мая";
            break;
        case 27:
            std::cout << "[-] " << dayNumber << " мая";
            break;
        case 28:
            std::cout << "[-] " << dayNumber << " мая";
            break;
        case 29:
            std::cout << "[-] " << dayNumber << " мая";
            break;
        case 30:
            std::cout << "[-] " << dayNumber << " мая";
            break;
        case 31:
            std::cout << "[-] " << dayNumber << " мая";
            break;
        default:
            std::cout << "[-] В мае только 31 день, или вы ввели неположительное число";
            break;
        }
        break;
    case 6:
        std::cout << "[-] Выбран июнь\n";
        std::cout << "[-] Введите номер дня -> ";
        std::cin >> dayNumber;
        switch (dayNumber)
        {
        case 1:
            std::cout << "[-] " << dayNumber << " июня";
            break;
        case 2:
            std::cout << "[-] " << dayNumber << " июня";
            break;
        case 3:
            std::cout << "[-] " << dayNumber << " июня";
            break;
        case 4:
            std::cout << "[-] " << dayNumber << " июня";
            break;
        case 5:
            std::cout << "[-] " << dayNumber << " июня";
            break;
        case 6:
            std::cout << "[-] " << dayNumber << " июня";
            break;
        case 7:
            std::cout << "[-] " << dayNumber << " июня";
            break;
        case 8:
            std::cout << "[-] " << dayNumber << " июня";
            break;
        case 9:
            std::cout << "[-] " << dayNumber << " июня";
            break;
        case 10:
            std::cout << "[-] " << dayNumber << " июня";
            break;
        case 11:
            std::cout << "[-] " << dayNumber << " июня";
            break;
        case 12:
            std::cout << "[-] " << dayNumber << " июня";
            break;
        case 13:
            std::cout << "[-] " << dayNumber << " июня";
            break;
        case 14:
            std::cout << "[-] " << dayNumber << " июня";
            break;
        case 15:
            std::cout << "[-] " << dayNumber << " июня";
            break;
        case 16:
            std::cout << "[-] " << dayNumber << " июня";
            break;
        case 17:
            std::cout << "[-] " << dayNumber << " июня";
            break;
        case 18:
            std::cout << "[-] " << dayNumber << " июня";
            break;
        case 19:
            std::cout << "[-] " << dayNumber << " июня";
            break;
        case 20:
            std::cout << "[-] " << dayNumber << " июня";
            break;
        case 21:
            std::cout << "[-] " << dayNumber << " июня";
            break;
        case 22:
            std::cout << "[-] " << dayNumber << " июня";
            break;
        case 23:
            std::cout << "[-] " << dayNumber << " июня";
            break;
        case 24:
            std::cout << "[-] " << dayNumber << " июня";
            break;
        case 25:
            std::cout << "[-] " << dayNumber << " июня";
            break;
        case 26:
            std::cout << "[-] " << dayNumber << " июня";
            break;
        case 27:
            std::cout << "[-] " << dayNumber << " июня";
            break;
        case 28:
            std::cout << "[-] " << dayNumber << " июня";
            break;
        case 29:
            std::cout << "[-] " << dayNumber << " июня";
            break;
        case 30:
            std::cout << "[-] " << dayNumber << " июня";
            break;
        default:
            std::cout << "[-] В июне только 30 дней, или вы ввели неположительное число";
            break;
        }
        break;
    case 7:
        std::cout << "[-] Выбран июль\n";
        std::cout << "[-] Введите номер дня -> ";
        std::cin >> dayNumber;
        switch (dayNumber)
        {
        case 1:
            std::cout << "[-] " << dayNumber << " июля";
            break;
        case 2:
            std::cout << "[-] " << dayNumber << " июля";
            break;
        case 3:
            std::cout << "[-] " << dayNumber << " июля";
            break;
        case 4:
            std::cout << "[-] " << dayNumber << " июля";
            break;
        case 5:
            std::cout << "[-] " << dayNumber << " июля";
            break;
        case 6:
            std::cout << "[-] " << dayNumber << " июля";
            break;
        case 7:
            std::cout << "[-] " << dayNumber << " июля";
            break;
        case 8:
            std::cout << "[-] " << dayNumber << " июля";
            break;
        case 9:
            std::cout << "[-] " << dayNumber << " июля";
            break;
        case 10:
            std::cout << "[-] " << dayNumber << " июля";
            break;
        case 11:
            std::cout << "[-] " << dayNumber << " июля";
            break;
        case 12:
            std::cout << "[-] " << dayNumber << " июля";
            break;
        case 13:
            std::cout << "[-] " << dayNumber << " июля";
            break;
        case 14:
            std::cout << "[-] " << dayNumber << " июля";
            break;
        case 15:
            std::cout << "[-] " << dayNumber << " июля";
            break;
        case 16:
            std::cout << "[-] " << dayNumber << " июля";
            break;
        case 17:
            std::cout << "[-] " << dayNumber << " июля";
            break;
        case 18:
            std::cout << "[-] " << dayNumber << " июля";
            break;
        case 19:
            std::cout << "[-] " << dayNumber << " июля";
            break;
        case 20:
            std::cout << "[-] " << dayNumber << " июля";
            break;
        case 21:
            std::cout << "[-] " << dayNumber << " июля";
            break;
        case 22:
            std::cout << "[-] " << dayNumber << " июля";
            break;
        case 23:
            std::cout << "[-] " << dayNumber << " июля";
            break;
        case 24:
            std::cout << "[-] " << dayNumber << " июля";
            break;
        case 25:
            std::cout << "[-] " << dayNumber << " июля";
            break;
        case 26:
            std::cout << "[-] " << dayNumber << " июля";
            break;
        case 27:
            std::cout << "[-] " << dayNumber << " июля";
            break;
        case 28:
            std::cout << "[-] " << dayNumber << " июля";
            break;
        case 29:
            std::cout << "[-] " << dayNumber << " июля";
            break;
        case 30:
            std::cout << "[-] " << dayNumber << " июля";
            break;
        case 31:
            std::cout << "[-] " << dayNumber << " июля";
            break;
        default:
            std::cout << "[-] В июле только 31 день, или вы ввели неположительное число";
            break;
        }
        break;
    case 8:
        std::cout << "[-] Выбран август\n";
        std::cout << "[-] Введите номер дня -> ";
        std::cin >> dayNumber;
        switch (dayNumber)
        {
        case 1:
            std::cout << "[-] " << dayNumber << " августа";
            break;
        case 2:
            std::cout << "[-] " << dayNumber << " августа";
            break;
        case 3:
            std::cout << "[-] " << dayNumber << " августа";
            break;
        case 4:
            std::cout << "[-] " << dayNumber << " августа";
            break;
        case 5:
            std::cout << "[-] " << dayNumber << " августа";
            break;
        case 6:
            std::cout << "[-] " << dayNumber << " августа";
            break;
        case 7:
            std::cout << "[-] " << dayNumber << " августа";
            break;
        case 8:
            std::cout << "[-] " << dayNumber << " августа";
            break;
        case 9:
            std::cout << "[-] " << dayNumber << " августа";
            break;
        case 10:
            std::cout << "[-] " << dayNumber << " августа";
            break;
        case 11:
            std::cout << "[-] " << dayNumber << " августа";
            break;
        case 12:
            std::cout << "[-] " << dayNumber << " августа";
            break;
        case 13:
            std::cout << "[-] " << dayNumber << " августа";
            break;
        case 14:
            std::cout << "[-] " << dayNumber << " августа";
            break;
        case 15:
            std::cout << "[-] " << dayNumber << " августа";
            break;
        case 16:
            std::cout << "[-] " << dayNumber << " августа";
            break;
        case 17:
            std::cout << "[-] " << dayNumber << " августа";
            break;
        case 18:
            std::cout << "[-] " << dayNumber << " августа";
            break;
        case 19:
            std::cout << "[-] " << dayNumber << " августа";
            break;
        case 20:
            std::cout << "[-] " << dayNumber << " августа";
            break;
        case 21:
            std::cout << "[-] " << dayNumber << " августа";
            break;
        case 22:
            std::cout << "[-] " << dayNumber << " августа";
            break;
        case 23:
            std::cout << "[-] " << dayNumber << " августа";
            break;
        case 24:
            std::cout << "[-] " << dayNumber << " августа";
            break;
        case 25:
            std::cout << "[-] " << dayNumber << " августа";
            break;
        case 26:
            std::cout << "[-] " << dayNumber << " августа";
            break;
        case 27:
            std::cout << "[-] " << dayNumber << " августа";
            break;
        case 28:
            std::cout << "[-] " << dayNumber << " августа";
            break;
        case 29:
            std::cout << "[-] " << dayNumber << " августа";
            break;
        case 30:
            std::cout << "[-] " << dayNumber << " августа";
            break;
        case 31:
            std::cout << "[-] " << dayNumber << " августа";
            break;
        default:
            std::cout << "[-] В августе только 31 день, или вы ввели неположительное число";
            break;
        }
        break;
    case 9:
        std::cout << "[-] Выбран сентябрь\n";
        std::cout << "[-] Введите номер дня -> ";
        std::cin >> dayNumber;
        switch (dayNumber)
        {
        case 1:
            std::cout << "[-] " << dayNumber << " сентября";
            break;
        case 2:
            std::cout << "[-] " << dayNumber << " сентября";
            break;
        case 3:
            std::cout << "[-] " << dayNumber << " сентября";
            break;
        case 4:
            std::cout << "[-] " << dayNumber << " сентября";
            break;
        case 5:
            std::cout << "[-] " << dayNumber << " сентября";
            break;
        case 6:
            std::cout << "[-] " << dayNumber << " сентября";
            break;
        case 7:
            std::cout << "[-] " << dayNumber << " сентября";
            break;
        case 8:
            std::cout << "[-] " << dayNumber << " сентября";
            break;
        case 9:
            std::cout << "[-] " << dayNumber << " сентября";
            break;
        case 10:
            std::cout << "[-] " << dayNumber << " сентября";
            break;
        case 11:
            std::cout << "[-] " << dayNumber << " сентября";
            break;
        case 12:
            std::cout << "[-] " << dayNumber << " сентября";
            break;
        case 13:
            std::cout << "[-] " << dayNumber << " сентября";
            break;
        case 14:
            std::cout << "[-] " << dayNumber << " сентября";
            break;
        case 15:
            std::cout << "[-] " << dayNumber << " сентября";
            break;
        case 16:
            std::cout << "[-] " << dayNumber << " сентября";
            break;
        case 17:
            std::cout << "[-] " << dayNumber << " сентября";
            break;
        case 18:
            std::cout << "[-] " << dayNumber << " сентября";
            break;
        case 19:
            std::cout << "[-] " << dayNumber << " сентября";
            break;
        case 20:
            std::cout << "[-] " << dayNumber << " сентября";
            break;
        case 21:
            std::cout << "[-] " << dayNumber << " сентября";
            break;
        case 22:
            std::cout << "[-] " << dayNumber << " сентября";
            break;
        case 23:
            std::cout << "[-] " << dayNumber << " сентября";
            break;
        case 24:
            std::cout << "[-] " << dayNumber << " сентября";
            break;
        case 25:
            std::cout << "[-] " << dayNumber << " сентября";
            break;
        case 26:
            std::cout << "[-] " << dayNumber << " сентября";
            break;
        case 27:
            std::cout << "[-] " << dayNumber << " сентября";
            break;
        case 28:
            std::cout << "[-] " << dayNumber << " сентября";
            break;
        case 29:
            std::cout << "[-] " << dayNumber << " сентября";
            break;
        case 30:
            std::cout << "[-] " << dayNumber << " сентября";
            break;
        default:
            std::cout << "[-] В сентябре только 30 дней, или вы ввели неположительное число";
            break;
        }
        break;
    case 10:
        std::cout << "[-] Выбран октябрь\n";
        std::cout << "[-] Введите номер дня -> ";
        std::cin >> dayNumber;
        switch (dayNumber)
        {
        case 1:
            std::cout << "[-] " << dayNumber << " октября";
            break;
        case 2:
            std::cout << "[-] " << dayNumber << " октября";
            break;
        case 3:
            std::cout << "[-] " << dayNumber << " октября";
            break;
        case 4:
            std::cout << "[-] " << dayNumber << " октября";
            break;
        case 5:
            std::cout << "[-] " << dayNumber << " октября";
            break;
        case 6:
            std::cout << "[-] " << dayNumber << " октября";
            break;
        case 7:
            std::cout << "[-] " << dayNumber << " октября";
            break;
        case 8:
            std::cout << "[-] " << dayNumber << " октября";
            break;
        case 9:
            std::cout << "[-] " << dayNumber << " октября";
            break;
        case 10:
            std::cout << "[-] " << dayNumber << " октября";
            break;
        case 11:
            std::cout << "[-] " << dayNumber << " октября";
            break;
        case 12:
            std::cout << "[-] " << dayNumber << " октября";
            break;
        case 13:
            std::cout << "[-] " << dayNumber << " октября";
            break;
        case 14:
            std::cout << "[-] " << dayNumber << " октября";
            break;
        case 15:
            std::cout << "[-] " << dayNumber << " октября";
            break;
        case 16:
            std::cout << "[-] " << dayNumber << " октября";
            break;
        case 17:
            std::cout << "[-] " << dayNumber << " октября";
            break;
        case 18:
            std::cout << "[-] " << dayNumber << " октября";
            break;
        case 19:
            std::cout << "[-] " << dayNumber << " октября";
            break;
        case 20:
            std::cout << "[-] " << dayNumber << " октября";
            break;
        case 21:
            std::cout << "[-] " << dayNumber << " октября";
            break;
        case 22:
            std::cout << "[-] " << dayNumber << " октября";
            break;
        case 23:
            std::cout << "[-] " << dayNumber << " октября";
            break;
        case 24:
            std::cout << "[-] " << dayNumber << " октября";
            break;
        case 25:
            std::cout << "[-] " << dayNumber << " октября";
            break;
        case 26:
            std::cout << "[-] " << dayNumber << " октября";
            break;
        case 27:
            std::cout << "[-] " << dayNumber << " октября";
            break;
        case 28:
            std::cout << "[-] " << dayNumber << " октября";
            break;
        case 29:
            std::cout << "[-] " << dayNumber << " октября";
            break;
        case 30:
            std::cout << "[-] " << dayNumber << " октября";
            break;
        case 31:
            std::cout << "[-] " << dayNumber << " октября";
            break;
        default:
            std::cout << "[-] В октябре только 31 день, или вы ввели неположительное число";
            break;
        }
        break;
    case 11:
        std::cout << "[-] Выбран ноябрь\n";
        std::cout << "[-] Введите номер дня -> ";
        std::cin >> dayNumber;
        switch (dayNumber)
        {
        case 1:
            std::cout << "[-] " << dayNumber << " ноября";
            break;
        case 2:
            std::cout << "[-] " << dayNumber << " ноября";
            break;
        case 3:
            std::cout << "[-] " << dayNumber << " ноября";
            break;
        case 4:
            std::cout << "[-] " << dayNumber << " ноября";
            break;
        case 5:
            std::cout << "[-] " << dayNumber << " ноября";
            break;
        case 6:
            std::cout << "[-] " << dayNumber << " ноября";
            break;
        case 7:
            std::cout << "[-] " << dayNumber << " ноября";
            break;
        case 8:
            std::cout << "[-] " << dayNumber << " ноября";
            break;
        case 9:
            std::cout << "[-] " << dayNumber << " ноября";
            break;
        case 10:
            std::cout << "[-] " << dayNumber << " ноября";
            break;
        case 11:
            std::cout << "[-] " << dayNumber << " ноября";
            break;
        case 12:
            std::cout << "[-] " << dayNumber << " ноября";
            break;
        case 13:
            std::cout << "[-] " << dayNumber << " ноября";
            break;
        case 14:
            std::cout << "[-] " << dayNumber << " ноября";
            break;
        case 15:
            std::cout << "[-] " << dayNumber << " ноября";
            break;
        case 16:
            std::cout << "[-] " << dayNumber << " ноября";
            break;
        case 17:
            std::cout << "[-] " << dayNumber << " ноября";
            break;
        case 18:
            std::cout << "[-] " << dayNumber << " ноября";
            break;
        case 19:
            std::cout << "[-] " << dayNumber << " ноября";
            break;
        case 20:
            std::cout << "[-] " << dayNumber << " ноября";
            break;
        case 21:
            std::cout << "[-] " << dayNumber << " ноября";
            break;
        case 22:
            std::cout << "[-] " << dayNumber << " ноября";
            break;
        case 23:
            std::cout << "[-] " << dayNumber << " ноября";
            break;
        case 24:
            std::cout << "[-] " << dayNumber << " ноября";
            break;
        case 25:
            std::cout << "[-] " << dayNumber << " ноября";
            break;
        case 26:
            std::cout << "[-] " << dayNumber << " ноября";
            break;
        case 27:
            std::cout << "[-] " << dayNumber << " ноября";
            break;
        case 28:
            std::cout << "[-] " << dayNumber << " ноября";
            break;
        case 29:
            std::cout << "[-] " << dayNumber << " ноября";
            break;
        case 30:
            std::cout << "[-] " << dayNumber << " ноября";
            break;
        default:
            std::cout << "[-] В ноябре только 30 дней, или вы ввели неположительное число";
            break;
        }
        break;
    case 12:
        std::cout << "[-] Выбран декабрь\n";
        std::cout << "[-] Введите номер дня -> ";
        std::cin >> dayNumber;
        switch (dayNumber)
        {
        case 1:
            std::cout << "[-] " << dayNumber << " декабря";
            break;
        case 2:
            std::cout << "[-] " << dayNumber << " декабря";
            break;
        case 3:
            std::cout << "[-] " << dayNumber << " декабря";
            break;
        case 4:
            std::cout << "[-] " << dayNumber << " декабря";
            break;
        case 5:
            std::cout << "[-] " << dayNumber << " декабря";
            break;
        case 6:
            std::cout << "[-] " << dayNumber << " декабря";
            break;
        case 7:
            std::cout << "[-] " << dayNumber << " декабря";
            break;
        case 8:
            std::cout << "[-] " << dayNumber << " декабря";
            break;
        case 9:
            std::cout << "[-] " << dayNumber << " декабря";
            break;
        case 10:
            std::cout << "[-] " << dayNumber << " декабря";
            break;
        case 11:
            std::cout << "[-] " << dayNumber << " декабря";
            break;
        case 12:
            std::cout << "[-] " << dayNumber << " декабря";
            break;
        case 13:
            std::cout << "[-] " << dayNumber << " декабря";
            break;
        case 14:
            std::cout << "[-] " << dayNumber << " декабря";
            break;
        case 15:
            std::cout << "[-] " << dayNumber << " декабря";
            break;
        case 16:
            std::cout << "[-] " << dayNumber << " декабря";
            break;
        case 17:
            std::cout << "[-] " << dayNumber << " декабря";
            break;
        case 18:
            std::cout << "[-] " << dayNumber << " декабря";
            break;
        case 19:
            std::cout << "[-] " << dayNumber << " декабря";
            break;
        case 20:
            std::cout << "[-] " << dayNumber << " декабря";
            break;
        case 21:
            std::cout << "[-] " << dayNumber << " декабря";
            break;
        case 22:
            std::cout << "[-] " << dayNumber << " декабря";
            break;
        case 23:
            std::cout << "[-] " << dayNumber << " декабря";
            break;
        case 24:
            std::cout << "[-] " << dayNumber << " декабря";
            break;
        case 25:
            std::cout << "[-] " << dayNumber << " декабря";
            break;
        case 26:
            std::cout << "[-] " << dayNumber << " декабря";
            break;
        case 27:
            std::cout << "[-] " << dayNumber << " декабря";
            break;
        case 28:
            std::cout << "[-] " << dayNumber << " декабря";
            break;
        case 29:
            std::cout << "[-] " << dayNumber << " декабря";
            break;
        case 30:
            std::cout << "[-] " << dayNumber << " декабря";
            break;
        case 31:
            std::cout << "[-] " << dayNumber << " декабря";
            break;
        default:
            std::cout << "[-] В декабре только 31 день, или вы ввели неположительное число";
            break;
        }
        break;
    default:
        std::cout << "[-] Такого месяца не существует";
        break;
    }

    return 0;
}