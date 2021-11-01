#include <iostream>

int main()
{
    setlocale(0, "");

    short monthNumeber;

    std::cout << "[-] Месяца года\n\n";

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

    std::cout << "[-] Введите номер месяца: ";
    std::cin >> monthNumeber;
    switch (monthNumeber)
    {
    case 1:
        std::cout << "Сейчас январь, вот это да";
        break;
    case 2:
        std::cout << "Сейчас февраль, прикинь";
        break;
    case 3:
        std::cout << "Сейчас март, сам не верю";
        break;
    case 4:
        std::cout << "Сейчас апрель, лучше мне не верь";
        break;
    case 5:
        std::cout << "Сейчас май, вот это поворот";
        break;
    case 6:
        std::cout << "Сейчас июнь, вот это ничего себе";
        break;
    case 7:
        std::cout << "Сейчас июль, как так";
        break;
    case 8:
        std::cout << "Сейчас август, невероятно, но факт";
        break;
    case 9:
        std::cout << "Сейчас сентябрь, вот вот!!1";
        break;
    case 10:
        std::cout << "Сейчас октябрь, ОГО";
        break;
    case 11:
        std::cout << "Сейчас ноябрь, а, да?";
        break;
    case 12:
        std::cout << "Сейчас декабрь, ну да";
        break;
    default:
        std::cout << "Ну ты и клоун, конечно";
        break;
    }

    return 0;
}