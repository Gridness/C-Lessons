#include <iostream>

int main()
{
    setlocale(0, "");

    int a = 0,
        b = 1,
        c = 2,
        d = 3,
        e = 4,
        f = 5,
        g = 6,
        h = 7,
        i = 8,
        j = 9;

    short a1 = -9,
        b1 = -8,
        c1 = -7,
        d1 = -6,
        e1 = -5,
        f1 = -4,
        g1 = -3,
        h1 = -2,
        i1 = -1,
        j1 = 100;

    long a2 = -999,
        b2 = -888,
        c2 = 347,
        d2 = -615,
        e2 = -5125,
        f2 = 214,
        g2 = -2133,
        h2 = -2412,
        i2 = 1231,
        j2 = 10120;

    float a3 = -9.123,
        b3 = -8.214,
        c3 = -7.1251,
        d3 = -6.215,
        e3 = -5.2151,
        f3 = 1234.123,
        g3 = -3.1251,
        h3 = 2.124,
        i3 = 1.111,
        j3 = 100.1;

    double a4 = -9.123,
        b4 = -8.214,
        c4 = -7.1251,
        d4 = -6.215,
        e4 = -5.2151,
        f4 = 1234.123,
        g4 = -3.1251,
        h4 = 2.124,
        i4 = 1.111,
        j4 = 100.1;

    bool a5 = 0,
        b5 = 1,
        c5 = 0,
        d5 = true,
        e5 = false,
        f5 = 1,
        g5 = true,
        h5 = 0,
        i5 = 0,
        j5 = true;

    char a6 = 'a',
        b6 = 'b',
        c6 = 'c',
        d6 = 'd',
        e6 = 'e',
        f6 = 'f',
        g6 = 'g',
        h6 = 'y',
        i6 = 'n',
        j6 = 'o';

    std::cout << "a = " << a << " | Тип данных: int | Размер: 4б\n";
    std::cout << "b = " << b << " | Тип данных: int | Размер: 4б\n";
    std::cout << "c = " << c << " | Тип данных: int | Размер: 4б\n";
    std::cout << "d = " << d << " | Тип данных: int | Размер: 4б\n";
    std::cout << "e = " << e << " | Тип данных: int | Размер: 4б\n";
    std::cout << "f = " << f << " | Тип данных: int | Размер: 4б\n";
    std::cout << "g = " << g << " | Тип данных: int | Размер: 4б\n";
    std::cout << "h = " << h << " | Тип данных: int | Размер: 4б\n";
    std::cout << "i = " << i << " | Тип данных: int | Размер: 4б\n";
    std::cout << "j = " << j << " | Тип данных: int | Размер: 4б\n\n";

    std::cout << "a1 = " << a1 << " | Тип данных: short | Размер: 2б\n";
    std::cout << "b1 = " << b1 << " | Тип данных: short | Размер: 2б\n";
    std::cout << "c1 = " << c1 << " | Тип данных: short | Размер: 2б\n";
    std::cout << "d1 = " << d1 << " | Тип данных: short | Размер: 2б\n";
    std::cout << "e1 = " << e1 << " | Тип данных: short | Размер: 2б\n";
    std::cout << "f1 = " << f1 << " | Тип данных: short | Размер: 2б\n";
    std::cout << "g1 = " << g1 << " | Тип данных: short | Размер: 2б\n";
    std::cout << "h1 = " << h1 << " | Тип данных: short | Размер: 2б\n";
    std::cout << "i1 = " << i1 << " | Тип данных: short | Размер: 2б\n";
    std::cout << "j1 = " << j1 << " | Тип данных: short | Размер: 2б\n\n";

    std::cout << "a2 = " << a2 << " | Тип данных: long | Размер: 4б\n";
    std::cout << "b2 = " << b2 << " | Тип данных: long | Размер: 4б\n";
    std::cout << "c2 = " << c2 << " | Тип данных: long | Размер: 4б\n";
    std::cout << "d2 = " << d2 << " | Тип данных: long | Размер: 4б\n";
    std::cout << "e2 = " << e2 << " | Тип данных: long | Размер: 4б\n";
    std::cout << "f2 = " << f2 << " | Тип данных: long | Размер: 4б\n";
    std::cout << "g2 = " << g2 << " | Тип данных: long | Размер: 4б\n";
    std::cout << "h2 = " << h2 << " | Тип данных: long | Размер: 4б\n";
    std::cout << "i2 = " << i2 << " | Тип данных: long | Размер: 4б\n";
    std::cout << "j2 = " << j2 << " | Тип данных: long | Размер: 4б\n\n";

    std::cout << "a3 = " << a3 << " | Тип данных: float | Размер: 4б\n";
    std::cout << "b3 = " << b3 << " | Тип данных: float | Размер: 4б\n";
    std::cout << "c3 = " << c3 << " | Тип данных: float | Размер: 4б\n";
    std::cout << "d3 = " << d3 << " | Тип данных: float | Размер: 4б\n";
    std::cout << "e3 = " << e3 << " | Тип данных: float | Размер: 4б\n";
    std::cout << "f3 = " << f3 << " | Тип данных: float | Размер: 4б\n";
    std::cout << "g3 = " << g3 << " | Тип данных: float | Размер: 4б\n";
    std::cout << "h3 = " << h3 << " | Тип данных: float | Размер: 4б\n";
    std::cout << "i3 = " << i3 << " | Тип данных: float | Размер: 4б\n";
    std::cout << "j3 = " << j3 << " | Тип данных: float | Размер: 4б\n\n";

    std::cout << "a4 = " << a4 << " | Тип данных: double | Размер: 8б\n";
    std::cout << "b4 = " << b4 << " | Тип данных: double | Размер: 8б\n";
    std::cout << "c4 = " << c4 << " | Тип данных: double | Размер: 8б\n";
    std::cout << "d4 = " << d4 << " | Тип данных: double | Размер: 8б\n";
    std::cout << "e4 = " << e4 << " | Тип данных: double | Размер: 8б\n";
    std::cout << "f4 = " << f4 << " | Тип данных: double | Размер: 8б\n";
    std::cout << "g4 = " << g4 << " | Тип данных: double | Размер: 8б\n";
    std::cout << "h4 = " << h4 << " | Тип данных: double | Размер: 8б\n";
    std::cout << "i4 = " << i4 << " | Тип данных: double | Размер: 8б\n";
    std::cout << "j4 = " << j4 << " | Тип данных: double | Размер: 8б\n\n";

    std::cout << "a5 = " << a5 << " | Тип данных: bool | Размер: 1б\n";
    std::cout << "b5 = " << b5 << " | Тип данных: bool | Размер: 1б\n";
    std::cout << "c5 = " << c5 << " | Тип данных: bool | Размер: 1б\n";
    std::cout << "d5 = " << d5 << " | Тип данных: bool | Размер: 1б\n";
    std::cout << "e5 = " << e5 << " | Тип данных: bool | Размер: 1б\n";
    std::cout << "f5 = " << f5 << " | Тип данных: bool | Размер: 1б\n";
    std::cout << "g5 = " << g5 << " | Тип данных: bool | Размер: 1б\n";
    std::cout << "h5 = " << h5 << " | Тип данных: bool | Размер: 1б\n";
    std::cout << "i5 = " << i5 << " | Тип данных: bool | Размер: 1б\n";
    std::cout << "j5 = " << j5 << " | Тип данных: bool | Размер: 1б\n\n";

    std::cout << "a6 = " << a6 << " | Тип данных: char | Размер: 1б\n";
    std::cout << "b6 = " << b6 << " | Тип данных: char | Размер: 1б\n";
    std::cout << "c6 = " << c6 << " | Тип данных: char | Размер: 1б\n";
    std::cout << "d6 = " << d6 << " | Тип данных: char | Размер: 1б\n";
    std::cout << "e6 = " << e6 << " | Тип данных: char | Размер: 1б\n";
    std::cout << "f6 = " << f6 << " | Тип данных: char | Размер: 1б\n";
    std::cout << "g6 = " << g6 << " | Тип данных: char | Размер: 1б\n";
    std::cout << "h6 = " << h6 << " | Тип данных: char | Размер: 1б\n";
    std::cout << "i6 = " << i6 << " | Тип данных: char | Размер: 1б\n";
    std::cout << "j6 = " << j6 << " | Тип данных: char | Размер: 1б";

    return 0;
}