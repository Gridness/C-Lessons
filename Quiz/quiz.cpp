#include "ApeX.h"

#define in std::cin
#define out std::cout
#define clear system("cls")
#define change_bg system("color 02")

#pragma comment(lib, "ApeX.lib")

int numberOfQuestions = 5;
int amountOfAttempts = 3;
bool helpOfAFriend = false;

// Пока еще не готово, не дописаны методы для окончания игры и не до конца реализовано 50:50

struct question {
    std::string question;
    std::string wrongAnswers[3];
    std::string rightAnswer;
};

question questions[15] = {
    {"Сколько всего на карте анемокулов?", {"63", "64", "Я в вашу аниме помойку не играю"}, "65"},
    {"Сколько всего на карте геокулов?", {"129", "130", "Опять вопрос по инфаркту, дебил на авторе"}, "131"},
    {"Сколько всего на карте электрокулов?", {"179", "180", "Да ты задолбал..."}, "181"},
    {"Сколько всего на карте дендрокулов?", {"114", "115", "Оставим это без лишних комментариев"}, "Неизвестно"},
    {"", {"", "", ""}, ""},
    {"", {"", "", ""}, ""},
    {"", {"", "", ""}, ""},
    {"", {"", "", ""}, ""},
    {"", {"", "", ""}, ""},
    {"", {"", "", ""}, ""},
    {"", {"", "", ""}, ""},
    {"", {"", "", ""}, ""},
    {"", {"", "", ""}, ""},
    {"", {"", "", ""}, ""},
    {"", {"", "", ""}, ""}
};

int previousQuestions[15];

void error(){
    clear;
    ApeX::Print::stylizedMessage("Викторина", 68, 43, 45, 124, true, true, false);
    ApeX::Print::stylizedMessage("Ошибка", 68, 43, 45, 124, true, false, true);
    ApeX::Print::stylizedMessage("", 68, 43, 45, 124, false, false, false);
    ApeX::Print::stylizedMessage("Такой опции в меню нет", 68, 43, 45, 124, false, false, false);
    ApeX::Print::stylizedMessage("", 68, 43, 45, 124, false, false);
    Sleep(2000);
}

void wrongAnswer(){
    clear;
    ApeX::Print::stylizedMessage("Викторина", 68, 43, 45, 124, true, true, false);
    ApeX::Print::stylizedMessage("Неверный ответ", 68, 43, 45, 124, true, false, true);
    ApeX::Print::stylizedMessage("", 68, 43, 45, 124, false, false, false);
    ApeX::Print::stylizedMessage("Попробуйте ответить снова", 68, 43, 45, 124, false, false, false);
    ApeX::Print::stylizedMessage("", 68, 43, 45, 124, false, false);
    Sleep(2000);
}

void endGame(std::string mode){
    clear;

    if(mode == "win"){

    } else if(mode == "lose"){

    }
}

void success(std::string option, std::string status){
    clear;
    ApeX::Print::stylizedMessage("Викторина", 68, 43, 45, 124, true, true, false);
    ApeX::Print::stylizedMessage("Настройка успешно применена", 68, 43, 45, 124, true, false, true);
    ApeX::Print::stylizedMessage("", 68, 43, 45, 124, false, false, false);
    ApeX::Print::stylizedMessage(option + " теперь " + status, 68, 43, 45, 124, false, false, false);
    ApeX::Print::stylizedMessage("", 68, 43, 45, 124, false, false);
    Sleep(2000);
}

void fifityFifty(int currentQuestion){
    std::string totalAnswers[4] = {questions[currentQuestion].wrongAnswers[0],
                            questions[currentQuestion].wrongAnswers[1],
                            questions[currentQuestion].wrongAnswers[2],
                            questions[currentQuestion].rightAnswer};

    for(int i = 0; i < 1; i++){
        int randDestroy = rand() % 4;
        while(totalAnswers[randDestroy] == questions[currentQuestion].rightAnswer){
            randDestroy = rand() % 4;
        }
        totalAnswers[randDestroy] = "";
    }
}

void addAUsedQuestion(int questionIndex){
    for(int i = 0; i < 15; i++){
        if(previousQuestions[i] == NULL){
            previousQuestions[i] = questionIndex;
            return;
        }
    }
}

int randomizeQuestion(){
    int questionIndex = rand() % 15;

    for(int i = 0; i < 15; i++){
        if(previousQuestions[i] == questionIndex){
            questionIndex = rand() % 15;
            i = 0;
        }
    }

    addAUsedQuestion(questionIndex);

    return questionIndex;
}

char displayQuestionAndGetTheRightAnswer(int currentQuestionNumber){
    clear;

    int currentQuestion = randomizeQuestion();
    int randomizedAnswer;
    std::string totalAnswers[4] = {questions[currentQuestion].wrongAnswers[0],
                            questions[currentQuestion].wrongAnswers[1],
                            questions[currentQuestion].wrongAnswers[2],
                            questions[currentQuestion].rightAnswer};
    char rightAnswer;

    ApeX::Print::stylizedMessage("Викторина", 68, 43, 45, 124, true, true, false);
    ApeX::Print::stylizedMessage("Вопрос " + std::to_string(currentQuestionNumber) + " / " + std::to_string(numberOfQuestions), 68, 43, 45, 124, true, false, true);
    ApeX::Print::stylizedMessage("", 68, 43, 45, 124, false, false, false);
    ApeX::Print::stylizedMessage(questions[currentQuestion].question, 68, 43, 45, 124, false, false, false);
    ApeX::Print::stylizedMessage("", 68, 43, 45, 124, false, false, false);
    for(int i = 0; i < 4; i++){
        switch (i)
        {
        case 0:
            randomizedAnswer = rand() % 4;
            ApeX::Print::stylizedMessage("a. " + totalAnswers[randomizedAnswer], 68, 43, 45, 124, false, false, false);
            if(totalAnswers[randomizedAnswer] == questions[currentQuestion].rightAnswer){
                rightAnswer = 'a';
            }
            break;
        case 1:
            randomizedAnswer = rand() % 4;
            ApeX::Print::stylizedMessage("b. " + totalAnswers[randomizedAnswer], 68, 43, 45, 124, false, false, false);
            if(totalAnswers[randomizedAnswer] == questions[currentQuestion].rightAnswer){
                rightAnswer = 'b';
            }
            break;
        case 2:
            randomizedAnswer = rand() % 4;
            ApeX::Print::stylizedMessage("c. " + totalAnswers[randomizedAnswer], 68, 43, 45, 124, false, false, false);
            if(totalAnswers[randomizedAnswer] == questions[currentQuestion].rightAnswer){
                rightAnswer = 'c';
            }
            break;
        case 3:
            randomizedAnswer = rand() % 4;
            ApeX::Print::stylizedMessage("d. " + totalAnswers[randomizedAnswer], 68, 43, 45, 124, false, false, false);
            if(totalAnswers[randomizedAnswer] == questions[currentQuestion].rightAnswer){
                rightAnswer = 'd';
            }
            break;
        }
    }
    ApeX::Print::stylizedMessage("", 68, 43, 45, 124, false, false);

    return rightAnswer;
}

void play(){
    clear;

    int currentQuestionNumber = 1;
    char answer, rightAnswer;

    while(amountOfAttempts > 0 || currentQuestionNumber < numberOfQuestions){
        rightAnswer = displayQuestionAndGetTheRightAnswer(currentQuestionNumber);
        wrongCase:
        in >> answer;
        if(answer == rightAnswer){
            currentQuestionNumber++;
            continue;
        } else if(answer == 'h'){
            fifityFifty(currentQuestionNumber);
        } 
        else {
            amountOfAttempts--;
            wrongAnswer();
            goto wrongCase;
        }
    }

    if(amountOfAttempts < 0){
        endGame("lose");
    } else {
        endGame("win");
    }

    exit(2);
}

void settings(){
    clear;

    int option, sideOption;

    ApeX::Print::stylizedMessage("Викторина", 68, 43, 45, 124, true, true, false);
    ApeX::Print::stylizedMessage("Настройки", 68, 43, 45, 124, true, false, true);
    ApeX::Print::stylizedMessage("", 68, 43, 45, 124, false, false, false);
    ApeX::Print::stylizedMessage("1. Количество вопросов", 68, 43, 45, 124, false, false, false);
    ApeX::Print::stylizedMessage("2. Количество попыток", 68, 43, 45, 124, false, false, false);
    ApeX::Print::stylizedMessage("3. Помощь друга", 68, 43, 45, 124, false, false, false);
    ApeX::Print::stylizedMessage("4. По-умолчанию", 68, 43, 45, 124, false, false, false);
    ApeX::Print::stylizedMessage("", 68, 43, 45, 124, false, false, false);
    ApeX::Print::stylizedMessage("0. Назад", 68, 43, 45, 124, false, false, false);
    ApeX::Print::stylizedMessage("", 68, 43, 45, 124, false, false);
    in >> option;
    switch (option)
    {
    case 1:
        ApeX::Print::stylizedMessage("Викторина", 68, 43, 45, 124, true, true, false);
        ApeX::Print::stylizedMessage("Количество вопросов", 68, 43, 45, 124, true, false, true);
        ApeX::Print::stylizedMessage("", 68, 43, 45, 124, false, false, false);
        ApeX::Print::stylizedMessage("5 вопросов", 68, 43, 45, 124, false, false, false);
        ApeX::Print::stylizedMessage("10 вопросов", 68, 43, 45, 124, false, false, false);
        ApeX::Print::stylizedMessage("15 вопросов", 68, 43, 45, 124, false, false, false);
        ApeX::Print::stylizedMessage("", 68, 43, 45, 124, false, false, false);
        ApeX::Print::stylizedMessage("0. Назад", 68, 43, 45, 124, false, false, false);
        ApeX::Print::stylizedMessage("", 68, 43, 45, 124, false, false);
        in >> sideOption;
        switch (sideOption)
        {
        case 5:
        case 10:
        case 15:
            numberOfQuestions = sideOption;
            success("Количество вопросов", std::to_string(numberOfQuestions));
            break;
        default:
            error();
            settings();
            break;
        }
        break;
    case 2:
        ApeX::Print::stylizedMessage("Викторина", 68, 43, 45, 124, true, true, false);
        ApeX::Print::stylizedMessage("Количество попыток", 68, 43, 45, 124, true, false, true);
        ApeX::Print::stylizedMessage("", 68, 43, 45, 124, false, false, false);
        ApeX::Print::stylizedMessage("Выберите количество попыток", 68, 43, 45, 124, false, false, false);
        ApeX::Print::stylizedMessage("от 1 до 5", 68, 43, 45, 124, false, false, false);
        ApeX::Print::stylizedMessage("", 68, 43, 45, 124, false, false, false);
        ApeX::Print::stylizedMessage("0. Назад", 68, 43, 45, 124, false, false, false);
        ApeX::Print::stylizedMessage("", 68, 43, 45, 124, false, false);
        in >> amountOfAttempts;
        while(amountOfAttempts <= 0 || amountOfAttempts > 5){
            clear;
            ApeX::Print::stylizedMessage("Викторина", 68, 43, 45, 124, true, true, false);
            ApeX::Print::stylizedMessage("Ошибка", 68, 43, 45, 124, true, false, true);
            ApeX::Print::stylizedMessage("", 68, 43, 45, 124, false, false, false);
            ApeX::Print::stylizedMessage("Попыток может быть от 1 до 5", 68, 43, 45, 124, false, false, false);
            ApeX::Print::stylizedMessage("", 68, 43, 45, 124, false, false);
            in >> amountOfAttempts;
        }
        success("Количество попыток", std::to_string(amountOfAttempts));
        break;
    case 3:
        ApeX::Print::stylizedMessage("Викторина", 68, 43, 45, 124, true, true, false);
        ApeX::Print::stylizedMessage("Помощь друга (50:50)", 68, 43, 45, 124, true, false, true);
        ApeX::Print::stylizedMessage("", 68, 43, 45, 124, false, false, false);
        ApeX::Print::stylizedMessage("1. Включить", 68, 43, 45, 124, false, false, false);
        ApeX::Print::stylizedMessage("2. Выключить", 68, 43, 45, 124, false, false, false);
        ApeX::Print::stylizedMessage("", 68, 43, 45, 124, false, false, false);
        ApeX::Print::stylizedMessage("0. Назад", 68, 43, 45, 124, false, false, false);
        ApeX::Print::stylizedMessage("", 68, 43, 45, 124, false, false);
        in >> sideOption;
        switch (sideOption)
        {
        case 1:
            helpOfAFriend = true;
            success("Помощь друга (50:50)", "включена");
            break;
        case 2:
            helpOfAFriend = false;
            success("Помощь друга (50:50)", "выключена");
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
        helpOfAFriend = false;
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

void rules(){
    clear;

    int exitNum;
    ApeX::Print::stylizedMessage("Викторина", 68, 43, 45, 124, true, true, false);
    ApeX::Print::stylizedMessage("Правила", 68, 43, 45, 124, true, false, true);
    ApeX::Print::stylizedMessage("", 68, 43, 45, 124, false, false, false);
    ApeX::Print::stylizedMessage("Вам предлагается случайный вопрос,", 68, 43, 45, 124, false, false, false);
    ApeX::Print::stylizedMessage("на каждый из которых есть 4 варианта", 68, 43, 45, 124, false, false, false);
    ApeX::Print::stylizedMessage("ответа. При правильном ответе", 68, 43, 45, 124, false, false, false);
    ApeX::Print::stylizedMessage("вы продвигаетесь дальше по викторине.", 68, 43, 45, 124, false, false, false);
    ApeX::Print::stylizedMessage("В случае же ошибки вы теряете одну", 68, 43, 45, 124, false, false, false);
    ApeX::Print::stylizedMessage("попытку. Если вы лишитесь их всех,", 68, 43, 45, 124, false, false, false);
    ApeX::Print::stylizedMessage("игра будет окончена.", 68, 43, 45, 124, false, false, false);
    ApeX::Print::stylizedMessage("", 68, 43, 45, 124, false, false, false);
    ApeX::Print::stylizedMessage("У игрока также есть возможность использовать", 68, 43, 45, 124, false, false, false);
    ApeX::Print::stylizedMessage("знаменитую помощь друга, aka 50:50, при использовании", 68, 43, 45, 124, false, false, false);
    ApeX::Print::stylizedMessage("которой из общего числа ответов случайным образом", 68, 43, 45, 124, false, false, false);
    ApeX::Print::stylizedMessage("убираются 2 неправильных. На всю игровую сессию", 68, 43, 45, 124, false, false, false);
    ApeX::Print::stylizedMessage("дается ровно 1 возможность использовать помощь друга.", 68, 43, 45, 124, false, false, false);
    ApeX::Print::stylizedMessage("", 68, 43, 45, 124, false, false, false);
    ApeX::Print::stylizedMessage("Игрок одерживает победу, если он", 68, 43, 45, 124, false, false, false);
    ApeX::Print::stylizedMessage("правильно ответит на все вопросы", 68, 43, 45, 124, false, false, false);
    ApeX::Print::stylizedMessage("викторины до момента, когда у игрока", 68, 43, 45, 124, false, false, false);
    ApeX::Print::stylizedMessage("не останется попыток", 68, 43, 45, 124, false, false, false);
    ApeX::Print::stylizedMessage("", 68, 43, 45, 124, false, false, false);
    ApeX::Print::stylizedMessage("0. Назад", 68, 43, 45, 124, false, false, false);
    ApeX::Print::stylizedMessage("", 68, 43, 45, 124, false, false);
    in >> exitNum;
    if(exitNum == 0){
        return;
    } else {
        clear;
        error();
        rules();
    }
}

void stop(){
    exit(1);
}

void mainMenu(){
    clear;
    int menuOption;

    ApeX::Print::stylizedMessage("Викторина", 68, 43, 45, 124, true, true, false);
    ApeX::Print::stylizedMessage("Главное меню", 68, 43, 45, 124, true, false, true);
    ApeX::Print::stylizedMessage("", 68, 43, 45, 124, false, false, false);
    ApeX::Print::stylizedMessage("1. Начать игру", 68, 43, 45, 124, false, false, false);
    ApeX::Print::stylizedMessage("2. Настройки", 68, 43, 45, 124, false, false, false);
    ApeX::Print::stylizedMessage("3. Правила", 68, 43, 45, 124, false, false, false);
    ApeX::Print::stylizedMessage("4. Выйти", 68, 43, 45, 124, false, false, false);
    ApeX::Print::stylizedMessage("", 68, 43, 45, 124, false, false);
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

int main(){
    setlocale(0, "");

    change_bg;

    ApeX::Copyright::copyright();

    while(true){
        mainMenu();
    }

    return 0;
}