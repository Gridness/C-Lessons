#include "ApeX.h"

#define in std::cin
#define out std::cout
#define clear system("cls")
#define change_bg system("color 02")

#pragma comment(lib, "ApeX.lib")

int numberOfQuestions = 5;
int amountOfAttempts = 3;
bool helpOfAFriend = true;

// Пока еще не готово, не до конца реализовано 50:50 и проверка правильного ответа

struct Question {
    std::string question;
    std::string wrongAnswers[3];
    std::string rightAnswer;
};

Question questions[20] = {
    {"Укажите количество анемокулов на карте", {"63", "64", "Я в вашу аниме помойку не играю"}, "65"},
    {"Укажите количество геокулов на карте", {"129", "130", "Опять вопрос по инфаркту, дебил на авторе"}, "131"},
    {"Укажите количество электрокулов на карте", {"179", "180", "Да ты задолбал..."}, "181"},
    {"Укажите количество дендрокулов на карте", {"114", "115", "Оставим это без лишних комментариев"}, "Неизвестно"},
    {"Назовите стоимость ультимейта Райден", {"60", "70", "80"}, "90"},
    {"Укажите вариант, в котором есть хотя бы одна несуществующая стоимость ультимейта", {"70, 80, 90", "40, 60, 70", "Все стоимости существуют"}, "45, 60, 70"},
    {"Сколько всего острвов на Инадзуме?", {"4", "5", "7"}, "6"},
    {"Назовите имя Гео Архонта", {"Чжун Ли", "Гео мужык", "Рекс Лапис"}, "Моракс"},
    {"Назовите имя Электро Архонта", {"Баал", "Райден", "Яэ"}, "Эи"},
    {"Сколько всего персонажей из Инадзумы?", {"6", "7", "9"}, "8"},
    {"Укажите вариант, в котором нет собак", {"Рэйзор, Горо", "Тими, Борей", "Могила Щенка, Волчья Погибель"}, "Кэ Цин, Дилюк"},
    {"Укажите самую высокую точку на карте", {"Нефритовый дворец", "Тэнсюкаку", "Логово Ужаса Бури"}, "Драконий Хребет"},
    {"Укажите реакцию, не наносящую урон", {"Крио + Электро", "Анемо + Пиро", "Гидро + Пиро"}, "Гео + Крио"},
    {"Укажите персонажа, который на данный момент владеет гнозисами", {"Ля Синьора", "Тарталья", "Райден"}, "Скарамучча"},
    {"Укажите число круток, необходимое для так называемого \"софт-гаранта\" в баннере персонажей", {"60", "80", "90"}, "70"},
    {"Назовите назначение \"Улова\"", {"Кирка", "Удочка", "Наживка"}, "Оружие для клейморщика"},
    {"Укажите число круток, необходимое для так называемого \"хард-гаранта\" в баннере персонажей", {"60", "80", "70"}, "90"},
    {"Укажите число круток, необходимое для так называемого \"софт-гаранта\" в баннере оружия", {"60", "70", "75"}, "65"},
    {"Укажите максимальный уровень Чайника Безмятежности", {"5", "15", "25"}, "10"},
    {"Укажите время, проходящее между 2 смежными патчами", {"39 дней", "5 недель", "41 день"}, "40 дней"}
};

int previousQuestions[20];

void error() {
    clear;
    ApeX::Print::stylizedMessage("Викторина", 96, 43, 45, 124, true, true, false);
    ApeX::Print::stylizedMessage("Ошибка", 96, 43, 45, 124, true, false, true);
    ApeX::Print::stylizedMessage("", 96, 43, 45, 124, false, false, false);
    ApeX::Print::stylizedMessage("Такой опции в меню нет", 96, 43, 45, 124, false, false, false);
    ApeX::Print::stylizedMessage("", 96, 43, 45, 124, false, false);
    Sleep(2000);
}

void wrongAnswer() {
    clear;
    if (amountOfAttempts == 0) {
        return;
    }
    ApeX::Print::stylizedMessage("Викторина", 96, 43, 45, 124, true, true, false);
    ApeX::Print::stylizedMessage("Неверный ответ", 96, 43, 45, 124, true, false, true);
    ApeX::Print::stylizedMessage("", 96, 43, 45, 124, false, false, false);
    ApeX::Print::stylizedMessage("Попробуйте ответить снова. Осталось попыток: " + std::to_string(amountOfAttempts), 96, 43, 45, 124, false, false, false);
    ApeX::Print::stylizedMessage("", 96, 43, 45, 124, false, false);
    Sleep(2000);
}

void endGame(std::string mode) {
    clear;

    if (mode == "win") {
        ApeX::Print::stylizedMessage("Викторина", 96, 43, 45, 124, true, true, false);
        ApeX::Print::stylizedMessage("Победа", 96, 43, 45, 124, true, false, true);
        ApeX::Print::stylizedMessage("", 96, 43, 45, 124, false, false, false);
        ApeX::Print::stylizedMessage("Вы правильно ответили на все вопросы викторины. Хорошая работа, Олег", 96, 43, 45, 124, true, false, false);
        ApeX::Print::stylizedMessage("", 96, 43, 45, 124, false, false);
    }
    else if (mode == "lose") {
        ApeX::Print::stylizedMessage("Викторина", 96, 43, 45, 124, true, true, false);
        ApeX::Print::stylizedMessage("Поражение", 96, 43, 45, 124, true, false, true);
        ApeX::Print::stylizedMessage("", 96, 43, 45, 124, false, false, false);
        ApeX::Print::stylizedMessage("К сожалению, у вас закончились попытки. Возвращайтесь вдвое сильнее", 96, 43, 45, 124, true, false, false);
        ApeX::Print::stylizedMessage("", 96, 43, 45, 124, false, false);
    }
}

void success(std::string option, std::string status) {
    clear;
    ApeX::Print::stylizedMessage("Викторина", 96, 43, 45, 124, true, true, false);
    ApeX::Print::stylizedMessage("Настройка успешно применена", 96, 43, 45, 124, true, false, true);
    ApeX::Print::stylizedMessage("", 96, 43, 45, 124, false, false, false);
    ApeX::Print::stylizedMessage(option + " теперь " + status, 96, 43, 45, 124, false, false, false);
    ApeX::Print::stylizedMessage("", 96, 43, 45, 124, false, false);
    Sleep(2000);
}

void fifityFifty(int currentQuestion) {
    std::string totalAnswers[4] = { questions[currentQuestion].wrongAnswers[0],
                            questions[currentQuestion].wrongAnswers[1],
                            questions[currentQuestion].wrongAnswers[2],
                            questions[currentQuestion].rightAnswer };

    for (int i = 0; i < 1; i++) {
        int randDestroy = rand() % 4;
        while (totalAnswers[randDestroy] == questions[currentQuestion].rightAnswer) {
            randDestroy = rand() % 4;
        }
        totalAnswers[randDestroy] = "";
    }
}

void addAUsedQuestion(int questionIndex) {
    for (int i = 0; i < 20; i++) {
        if (previousQuestions[i] == NULL) {
            previousQuestions[i] = questionIndex;
            return;
        }
    }
}

int randomizeQuestion() {
    int questionIndex = rand() % 20;

    for (int i = 0; i < 20; i++) {
        while (previousQuestions[i] == questionIndex) {
            questionIndex = rand() % 20;
        }
    }

    addAUsedQuestion(questionIndex);

    return questionIndex;
}

bool checkAnswer(int answer, int answers[4]) {
    for (int i = 0; i < 4; i++) {
        if (answer == answers[i]) {
            return false;
        }
    }

    return true;
}

char displayQuestionAndGetTheRightAnswer(int currentQuestionNumber) {
    clear;

    int currentQuestion = randomizeQuestion();
    int randomizedAnswer, randomizedAnswers[4];
    std::string totalAnswers[4] = { questions[currentQuestion].wrongAnswers[0],
                            questions[currentQuestion].wrongAnswers[1],
                            questions[currentQuestion].wrongAnswers[2],
                            questions[currentQuestion].rightAnswer };
    char rightAnswer;

    ApeX::Print::stylizedMessage("Викторина", 96, 43, 45, 124, true, true, false);
    ApeX::Print::stylizedMessage("Вопрос " + std::to_string(currentQuestionNumber) + " / " + std::to_string(numberOfQuestions), 96, 43, 45, 124, true, false, false);
    ApeX::Print::stylizedMessage("Попыток осталось: " + std::to_string(amountOfAttempts), 96, 43, 45, 124, true, false, true);
    if (helpOfAFriend) {
        ApeX::Print::stylizedMessage("Помощь друга (50:50) доступна", 96, 43, 45, 124, true, false, true);
    }
    ApeX::Print::stylizedMessage("", 96, 43, 45, 124, false, false, false);
    ApeX::Print::stylizedMessage(questions[currentQuestion].question, 96, 43, 45, 124, false, false, false);
    ApeX::Print::stylizedMessage("", 96, 43, 45, 124, false, false, false);
    for (int i = 0; i < 4; i++) {
        switch (i)
        {
        case 0:
            randomizedAnswer = rand() % 4;
            ApeX::Print::stylizedMessage("a. " + totalAnswers[randomizedAnswer], 96, 43, 45, 124, false, false, false);
            if (totalAnswers[randomizedAnswer] == questions[currentQuestion].rightAnswer) {
                rightAnswer = 'a';
            }
            randomizedAnswers[0] = randomizedAnswer;
            break;
        case 1:
            randomizedAnswer = rand() % 4;
            while (!checkAnswer(randomizedAnswer, randomizedAnswers)) {
                randomizedAnswer = rand() % 4;
            }
            ApeX::Print::stylizedMessage("b. " + totalAnswers[randomizedAnswer], 96, 43, 45, 124, false, false, false);
            if (totalAnswers[randomizedAnswer] == questions[currentQuestion].rightAnswer) {
                rightAnswer = 'b';
            }
            randomizedAnswers[1] = randomizedAnswer;
            break;
        case 2:
            randomizedAnswer = rand() % 4;
            while (!checkAnswer(randomizedAnswer, randomizedAnswers)) {
                randomizedAnswer = rand() % 4;
            }
            ApeX::Print::stylizedMessage("c. " + totalAnswers[randomizedAnswer], 96, 43, 45, 124, false, false, false);
            if (totalAnswers[randomizedAnswer] == questions[currentQuestion].rightAnswer) {
                rightAnswer = 'c';
            }
            randomizedAnswers[2] = randomizedAnswer;
            break;
        case 3:
            randomizedAnswer = rand() % 4;
            while (!checkAnswer(randomizedAnswer, randomizedAnswers)) {
                randomizedAnswer = rand() % 4;
            }
            ApeX::Print::stylizedMessage("d. " + totalAnswers[randomizedAnswer], 96, 43, 45, 124, false, false, false);
            if (totalAnswers[randomizedAnswer] == questions[currentQuestion].rightAnswer) {
                rightAnswer = 'd';
            }
            randomizedAnswers[3] = randomizedAnswer;
            break;
        }
    }
    ApeX::Print::stylizedMessage("", 96, 43, 45, 124, false, false);

    return rightAnswer;
}

void play() {
    clear;

    int currentQuestionNumber = 1;
    char answer, rightAnswer;

    while (amountOfAttempts > 0 && currentQuestionNumber < numberOfQuestions) {
        rightAnswer = displayQuestionAndGetTheRightAnswer(currentQuestionNumber);
        in >> answer;
        if (answer == rightAnswer) {
            currentQuestionNumber++;
        }
        else if (answer == 'h' && helpOfAFriend) {
            fifityFifty(currentQuestionNumber);
        }
        else {
            amountOfAttempts--;
            wrongAnswer();
        }
    }

    if (amountOfAttempts <= 0) {
        endGame("lose");
    }
    else {
        endGame("win");
    }

    exit(2);
}

void settings() {
    clear;

    int option, sideOption;

    ApeX::Print::stylizedMessage("Викторина", 96, 43, 45, 124, true, true, false);
    ApeX::Print::stylizedMessage("Настройки", 96, 43, 45, 124, true, false, true);
    ApeX::Print::stylizedMessage("", 96, 43, 45, 124, false, false, false);
    ApeX::Print::stylizedMessage("1. Количество вопросов", 96, 43, 45, 124, false, false, false);
    ApeX::Print::stylizedMessage("2. Количество попыток", 96, 43, 45, 124, false, false, false);
    ApeX::Print::stylizedMessage("3. Помощь друга", 96, 43, 45, 124, false, false, false);
    ApeX::Print::stylizedMessage("4. По-умолчанию", 96, 43, 45, 124, false, false, false);
    ApeX::Print::stylizedMessage("", 96, 43, 45, 124, false, false, false);
    ApeX::Print::stylizedMessage("0. Назад", 96, 43, 45, 124, false, false, false);
    ApeX::Print::stylizedMessage("", 96, 43, 45, 124, false, false);
    in >> option;
    switch (option)
    {
    case 1:
        clear;
        ApeX::Print::stylizedMessage("Викторина", 96, 43, 45, 124, true, true, false);
        ApeX::Print::stylizedMessage("Количество вопросов", 96, 43, 45, 124, true, false, true);
        ApeX::Print::stylizedMessage("", 96, 43, 45, 124, false, false, false);
        ApeX::Print::stylizedMessage("5 вопросов", 96, 43, 45, 124, false, false, false);
        ApeX::Print::stylizedMessage("10 вопросов", 96, 43, 45, 124, false, false, false);
        ApeX::Print::stylizedMessage("15 вопросов", 96, 43, 45, 124, false, false, false);
        ApeX::Print::stylizedMessage("", 96, 43, 45, 124, false, false, false);
        ApeX::Print::stylizedMessage("0. Назад", 96, 43, 45, 124, false, false, false);
        ApeX::Print::stylizedMessage("", 96, 43, 45, 124, false, false);
        in >> sideOption;
        switch (sideOption)
        {
        case 5:
        case 10:
        case 15:
            numberOfQuestions = sideOption;
            success("Количество вопросов", std::to_string(numberOfQuestions));
            settings();
            break;
        default:
            error();
            settings();
            break;
        }
        break;
    case 2:
        clear;
        ApeX::Print::stylizedMessage("Викторина", 96, 43, 45, 124, true, true, false);
        ApeX::Print::stylizedMessage("Количество попыток", 96, 43, 45, 124, true, false, true);
        ApeX::Print::stylizedMessage("", 96, 43, 45, 124, false, false, false);
        ApeX::Print::stylizedMessage("Выберите количество попыток", 96, 43, 45, 124, false, false, false);
        ApeX::Print::stylizedMessage("от 1 до 5", 96, 43, 45, 124, false, false, false);
        ApeX::Print::stylizedMessage("", 96, 43, 45, 124, false, false, false);
        ApeX::Print::stylizedMessage("0. Назад", 96, 43, 45, 124, false, false, false);
        ApeX::Print::stylizedMessage("", 96, 43, 45, 124, false, false);
        in >> amountOfAttempts;
        while (amountOfAttempts <= 0 || amountOfAttempts > 5) {
            clear;
            ApeX::Print::stylizedMessage("Викторина", 96, 43, 45, 124, true, true, false);
            ApeX::Print::stylizedMessage("Ошибка", 96, 43, 45, 124, true, false, true);
            ApeX::Print::stylizedMessage("", 96, 43, 45, 124, false, false, false);
            ApeX::Print::stylizedMessage("Попыток может быть от 1 до 5", 96, 43, 45, 124, false, false, false);
            ApeX::Print::stylizedMessage("", 96, 43, 45, 124, false, false);
            in >> amountOfAttempts;
        }
        success("Количество попыток", std::to_string(amountOfAttempts));
        settings();
        break;
    case 3:
        clear;
        ApeX::Print::stylizedMessage("Викторина", 96, 43, 45, 124, true, true, false);
        ApeX::Print::stylizedMessage("Помощь друга (50:50)", 96, 43, 45, 124, true, false, true);
        ApeX::Print::stylizedMessage("", 96, 43, 45, 124, false, false, false);
        ApeX::Print::stylizedMessage("1. Включить", 96, 43, 45, 124, false, false, false);
        ApeX::Print::stylizedMessage("2. Выключить", 96, 43, 45, 124, false, false, false);
        ApeX::Print::stylizedMessage("", 96, 43, 45, 124, false, false, false);
        ApeX::Print::stylizedMessage("0. Назад", 96, 43, 45, 124, false, false, false);
        ApeX::Print::stylizedMessage("", 96, 43, 45, 124, false, false);
        in >> sideOption;
        switch (sideOption)
        {
        case 1:
            helpOfAFriend = true;
            success("Помощь друга (50:50)", "включена");
            settings();
            break;
        case 2:
            helpOfAFriend = false;
            success("Помощь друга (50:50)", "выключена");
            settings();
            break;
        case 0:
            break;
        default:
            error();
            settings();
            break;
        }
        break;
    case 4:
        numberOfQuestions = 5;
        amountOfAttempts = 3;
        helpOfAFriend = true;
        success("Настройки по-умолчанию", "включены");
        break;
    case 0:
        break;
    default:
        error();
        settings();
        break;
    }
}

void rules() {
    clear;

    int exitNum;
    ApeX::Print::stylizedMessage("Викторина", 96, 43, 45, 124, true, true, false);
    ApeX::Print::stylizedMessage("Правила", 96, 43, 45, 124, true, false, true);
    ApeX::Print::stylizedMessage("", 96, 43, 45, 124, false, false, false);
    ApeX::Print::stylizedMessage("Вам предлагается случайный вопрос, на каждый из которых есть 4 варианта ответа. При правильном", 96, 43, 45, 124, false, false, false);
    ApeX::Print::stylizedMessage("ответе вы продвигаетесь дальше по викторине, в случае же ошибки вы теряете одну попытку. Если", 96, 43, 45, 124, false, false, false);
    ApeX::Print::stylizedMessage("вы лишитесь их всех, игра будет окончена.", 96, 43, 45, 124, false, false, false);
    ApeX::Print::stylizedMessage("", 96, 43, 45, 124, false, false, false);
    ApeX::Print::stylizedMessage("У игрока также есть возможность использовать знаменитую помощь друга, aka 50:50,", 96, 43, 45, 124, false, false, false);
    ApeX::Print::stylizedMessage("при использовании которой из общего числа ответов случайным образом убираются 2 неправильных.", 96, 43, 45, 124, false, false, false);
    ApeX::Print::stylizedMessage("На всю игровую сессию дается ровно 1 возможность использовать помощь друга.", 96, 43, 45, 124, false, false, false);
    ApeX::Print::stylizedMessage("", 96, 43, 45, 124, false, false, false);
    ApeX::Print::stylizedMessage("Игрок одерживает победу, если он правильно ответит на все вопросы викторины до момента,", 96, 43, 45, 124, false, false, false);
    ApeX::Print::stylizedMessage("когда у игрока не останется попыток", 96, 43, 45, 124, false, false, false);
    ApeX::Print::stylizedMessage("", 96, 43, 45, 124, false, false, false);
    ApeX::Print::stylizedMessage("0. Назад", 96, 43, 45, 124, false, false, false);
    ApeX::Print::stylizedMessage("", 96, 43, 45, 124, false, false);
    in >> exitNum;
    if (exitNum == 0) {
        return;
    }
    else {
        clear;
        error();
        rules();
    }
}

void stop() {
    exit(1);
}

void mainMenu() {
    clear;
    int menuOption;

    ApeX::Print::stylizedMessage("Викторина", 96, 43, 45, 124, true, true, false);
    ApeX::Print::stylizedMessage("Главное меню", 96, 43, 45, 124, true, false, true);
    ApeX::Print::stylizedMessage("", 96, 43, 45, 124, false, false, false);
    ApeX::Print::stylizedMessage("1. Начать игру", 96, 43, 45, 124, false, false, false);
    ApeX::Print::stylizedMessage("2. Настройки", 96, 43, 45, 124, false, false, false);
    ApeX::Print::stylizedMessage("3. Правила", 96, 43, 45, 124, false, false, false);
    ApeX::Print::stylizedMessage("4. Выйти", 96, 43, 45, 124, false, false, false);
    ApeX::Print::stylizedMessage("", 96, 43, 45, 124, false, false);
    in >> menuOption;
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
        error();
        break;
    }
}

int main() {
    setlocale(0, "");

    change_bg;

    ApeX::Copyright::copyright();

    while (true) {
        mainMenu();
    }

    return 0;
}