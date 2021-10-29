#include "ApeX.h"

namespace ApeX {

	void Print::stylizedMessage(std::string message, int windowWidth, char cornerStyle, char topAndBottomBorderStyle, char sideBorderStyle, bool isCentered, bool printTop, bool printBottom) {
        if (windowWidth < message.length()) {
            ApeX::Error::error(ApeX::Error::errorType(1), "Width of the frame must be more or equal to the message's length", "Width of the frame "  + std::to_string(windowWidth) + " is less than the message's length " + std::to_string(message.length()));
        }
        else {
            bool front = true;

            if (printTop) {
                std::cout << cornerStyle;
                for (int i = 0; i < windowWidth; i++) {
                    std::cout << topAndBottomBorderStyle;
                }
                std::cout << cornerStyle << "\n";
                std::cout << sideBorderStyle;
            }
            else {
                std::cout << sideBorderStyle;
            }

            if (isCentered) {
                for (int i = message.length(); i < windowWidth; i++) {
                    if (front) {
                        message = " " + message;
                    }
                    else {
                        message = message + " ";
                    }
                    front = !front;
                }
            }
            else {
                message = " " + message;
                for (int i = message.length(); i < windowWidth; i++) {
                    message += " ";
                }
            }
            std::cout << message.c_str();

            if (printBottom) {
                std::cout << sideBorderStyle << "\n";
                std::cout << cornerStyle;
                for (int i = 0; i < windowWidth; i++) {
                    std::cout << topAndBottomBorderStyle;
                }
                std::cout << cornerStyle << "\n";
            }
            else {
                std::cout << sideBorderStyle << "\n";
            }
        }
	}

    void Print::centeredMessage(std::string message, int relativeWidth, bool endLine)
    {
        bool front = true;

        for (int i = message.length(); i < relativeWidth; i++) {
            if (front) {
                message = " " + message;
            }
            else {
                message = message + " ";
            }
            front = !front;
        }

        if (endLine) {
            std::cout << message.c_str() << "\n";
        }
        else {
            std::cout << message.c_str();
        }     
    }

    void Print::line(int lineType, int length, char texture, bool hasCorners, char cornerTexture)
    {
        if (length <= 0) {
            ApeX::Error::error(ApeX::Error::errorType(1), "Length of the line must be more than 0");
        }
        else if (lineType != 1 && lineType != 2) {
            ApeX::Error::error(ApeX::Error::errorType(2), "Inserted line type does not exist");
        }
        else if (lineType == 1) {
            for (int i = 0; i < length; i++) {
                if (hasCorners) {
                    if (i == 0 || i == length - 1) {
                        std::cout << cornerTexture;
                    }
                    else {
                        std::cout << texture;
                    }
                }
                else {
                    std::cout << texture;
                }
            }
        }
        else {
            for (int i = 0; i < length; i++) {
                if (hasCorners) {
                    if (i == 0 || i == length - 1) {
                        std::cout << cornerTexture;
                    }
                    else {
                        std::cout << texture;
                    }
                }
                else {
                    std::cout << texture;
                }
                std::cout << "\n";
            }
        }
    }

    void Copyright::copyright()
    {
        std::vector<std::vector<char>> logo = {
            {'#', '#', '#', '#', '#', '#', '\040', '\040', '\040', '\040', '\040', '\040', '\040', '\040', '\040', '\040', '\040', '\040', '\040', '\040', '\040', '#', '#', '#', '#', '#'},
            {'\040', '#', '#', '#', '#', '#', '#', '#', '\040', '\040', '\040', '\040', '\040', '\040', '\040', '\040', '\040', '\040', '\040', '#', '#', '#', '#', '#', '#', '\040'},
            {'\040', '\040', '#', '#', '#', '#', '#', '#', '#', '#', '\040', '\040', '\040', '\040', '\040', '\040', '\040', '#', '#', '#', '#', '#', '#', '#', '\040', '\040'},
            {'\040', '\040', '\040', '#', '#', '#', '#', '#', '#', '#', '#', '\040', '\040', '\040', '\040', '\040', '#', '#', '#', '#', '#', '#', '#', '\040', '\040', '\040'},
            {'\040', '\040', '\040', '\040', '#', '#', '#', '#', '#', '#', '#', '#', '\040', '\040', '\040', '#', '#', '#', '#', '#', '#', '#', '\040', '\040', '\040', '\040'},
            {'\040', '\040', '\040', '\040', '\040', '#', '#', '#', '#', '#', '#', '#', '#', '\040', '#', '#', '#', '#', '#', '#', '#', '\040', '\040', '\040', '\040', '\040'},
            {'\040', '\040', '\040', '\040', '\040', '#', '#', '#', '#', '#', '#', '#', '#', '\040', '#', '#', '#', '#', '#', '#', '#', '\040', '\040', '\040', '\040', '\040'},
            {'\040', '\040', '\040', '\040', '#', '#', '#', '#', '#', '#', '#', '#', '\040', '\040', '\040', '#', '#', '#', '#', '#', '#', '#', '\040', '\040', '\040', '\040'},
            {'\040', '\040', '\040', '#', '#', '#', '#', '#', '#', '#', '#', '\040', '\040', '\040', '\040', '\040', '#', '#', '#', '#', '#', '#', '#', '\040', '\040', '\040'},
            {'\040', '\040', '#', '#', '#', '#', '#', '#', '#', '#', '\040', '\040', '\040', '\040', '\040', '\040', '\040', '#', '#', '#', '#', '#', '#', '#', '\040', '\040'},
            {'\040', '#', '#', '#', '#', '#', '#', '#', '\040', '\040', '\040', '\040', '\040', '\040', '\040', '\040', '\040', '\040', '\040', '#', '#', '#', '#', '#', '#', '\040'},
            {'#', '#', '#', '#', '#', '#', '\040', '\040', '\040', '\040', '\040', '\040', '\040', '\040', '\040', '\040', '\040', '\040', '\040', '\040', '\040', '#', '#', '#', '#', '#'},
        };

        for (int i = 0; i < 12; i++) {
            for (int j = 0; j < 26; j++) {
                std::cout << logo[i][j];
            }
            std::cout << "\n";
        }

        std::cout << "\n";

        //ApeX::Print::stylizedMessage("APE-X", 25, 43, 45, 124, true, false, false);
        //ApeX::Print::stylizedMessage("Version 0.2 alpha", 25, 43, 45, 124, true, false, false);
        //ApeX::Print::stylizedMessage("ALPHA. WORK IN PROGRESS", 25, 43, 45, 124, true, false, false);

        ApeX::Print::centeredMessage("APE-X", 27, true);
        ApeX::Print::centeredMessage("Version 0.2 alpha", 27, true);
        ApeX::Print::centeredMessage("ALPHA. WORK IN PROGRESS", 27, true);

        std::cout << "\n";

        ApeX::Copyright::displayCopyrightInfo();

        Sleep(3000);
        ApeX::Utils::clear();
    }

    void Copyright::displayCopyrightInfo()
    {
        std::cout << "ApeX (c) Gridness 2021\n";
        std::cout << "This software is disributed via MIT license. All rights reserved";
    }

    void Error::error(errorType errorType, std::string errorMessage, std::string additionalInfo)
    {
        std::cout << "[Error: " << errorType << "] " << errorMessage << "\n";
        std::cout <<  additionalInfo << "\n";
    }

    //std::ostream& Format::boldOn(std::ostream& os)
    //{
    //    return os << "\e[1m";
    //}

    //std::ostream& Format::boldOff(std::ostream& os)
    //{
    //    return os << "\e[0m";
    //}

    //std::ostream& Format::underlineOn(std::ostream& os)
    //{
    //    return os << "\033[4m";
    //}

    //std::ostream& Format::underlineOff(std::ostream& os)
    //{
    //    return os << "\033[0m";
    //}

    void Output::showVector(std::vector<int> vector, int rows, bool tabulated)
    {
        if (vector.size() <= 0) {
            ApeX::Error::error(ApeX::Error::errorType(4), "An empty or a non-existent vector was given");
        }
        else {
            const int valuesInRow = vector.size() / rows;
            int counter = 0;
            if (tabulated) {
                for (int i = 0; i < vector.size(); i++) {
                    if (counter == valuesInRow) {
                        std::cout << "\n";
                        counter = 0;
                    }
                    std::cout << vector[i] << "\t";
                    counter++;
                }
            }
            else {
                for (int i = 0; i < vector.size(); i++) {
                    if (counter == valuesInRow) {
                        std::cout << "\n";
                        counter = 0;
                    }
                    std::cout << vector[i] << " ";
                    counter++;
                }
            }
        }  
    }

    void Output::showVector(std::vector<short> vector, int rows, bool tabulated)
    {
        if (vector.size() <= 0) {
            ApeX::Error::error(ApeX::Error::errorType(4), "An empty or a non-existent vector was given");
        }
        else {
            const int valuesInRow = vector.size() / rows;
            int counter = 0;
            if (tabulated) {
                for (int i = 0; i < vector.size(); i++) {
                    if (counter == valuesInRow) {
                        std::cout << "\n";
                        counter = 0;
                    }
                    std::cout << vector[i] << "\t";
                    counter++;
                }
            }
            else {
                for (int i = 0; i < vector.size(); i++) {
                    if (counter == valuesInRow) {
                        std::cout << "\n";
                        counter = 0;
                    }
                    std::cout << vector[i] << " ";
                    counter++;
                }
            }
        }
    }

    void Output::showVector(std::vector<long> vector, int rows, bool tabulated)
    {
        if (vector.size() <= 0) {
            ApeX::Error::error(ApeX::Error::errorType(4), "An empty or a non-existent vector was given");
        }
        else {
            const int valuesInRow = vector.size() / rows;
            int counter = 0;
            if (tabulated) {
                for (int i = 0; i < vector.size(); i++) {
                    if (counter == valuesInRow) {
                        std::cout << "\n";
                        counter = 0;
                    }
                    std::cout << vector[i] << "\t";
                    counter++;
                }
            }
            else {
                for (int i = 0; i < vector.size(); i++) {
                    if (counter == valuesInRow) {
                        std::cout << "\n";
                        counter = 0;
                    }
                    std::cout << vector[i] << " ";
                    counter++;
                }
            }
        }
    }

    void Output::showVector(std::vector<float> vector, int rows, bool tabulated)
    {
        if (vector.size() <= 0) {
            ApeX::Error::error(ApeX::Error::errorType(4), "An empty or a non-existent vector was given");
        }
        else {
            const int valuesInRow = vector.size() / rows;
            int counter = 0;
            if (tabulated) {
                for (int i = 0; i < vector.size(); i++) {
                    if (counter == valuesInRow) {
                        std::cout << "\n";
                        counter = 0;
                    }
                    std::cout << vector[i] << "\t";
                    counter++;
                }
            }
            else {
                for (int i = 0; i < vector.size(); i++) {
                    if (counter == valuesInRow) {
                        std::cout << "\n";
                        counter = 0;
                    }
                    std::cout << vector[i] << " ";
                    counter++;
                }
            }
        }
    }

    void Output::showVector(std::vector<double> vector, int rows, bool tabulated)
    {
        if (vector.size() <= 0) {
            ApeX::Error::error(ApeX::Error::errorType(4), "An empty or a non-existent vector was given");
        }
        else {
            const int valuesInRow = vector.size() / rows;
            int counter = 0;
            if (tabulated) {
                for (int i = 0; i < vector.size(); i++) {
                    if (counter == valuesInRow) {
                        std::cout << "\n";
                        counter = 0;
                    }
                    std::cout << vector[i] << "\t";
                    counter++;
                }
            }
            else {
                for (int i = 0; i < vector.size(); i++) {
                    if (counter == valuesInRow) {
                        std::cout << "\n";
                        counter = 0;
                    }
                    std::cout << vector[i] << " ";
                    counter++;
                }
            }
        }
    }

    void Output::showVector(std::vector<bool> vector, int rows, bool tabulated)
    {
        if (vector.size() <= 0) {
            ApeX::Error::error(ApeX::Error::errorType(4), "An empty or a non-existent vector was given");
        }
        else {
            const int valuesInRow = vector.size() / rows;
            int counter = 0;
            if (tabulated) {
                for (int i = 0; i < vector.size(); i++) {
                    if (counter == valuesInRow) {
                        std::cout << "\n";
                        counter = 0;
                    }
                    std::cout << vector[i] << "\t";
                    counter++;
                }
            }
            else {
                for (int i = 0; i < vector.size(); i++) {
                    if (counter == valuesInRow) {
                        std::cout << "\n";
                        counter = 0;
                    }
                    std::cout << vector[i] << " ";
                    counter++;
                }
            }
        }
    }

    void Output::showVector(std::vector<char> vector, int rows, bool tabulated)
    {
        if (vector.size() <= 0) {
            ApeX::Error::error(ApeX::Error::errorType(4), "An empty or a non-existent vector was given");
        }
        else {
            const int valuesInRow = vector.size() / rows;
            int counter = 0;
            if (tabulated) {
                for (int i = 0; i < vector.size(); i++) {
                    if (counter == valuesInRow) {
                        std::cout << "\n";
                        counter = 0;
                    }
                    std::cout << vector[i] << "\t";
                    counter++;
                }
            }
            else {
                for (int i = 0; i < vector.size(); i++) {
                    if (counter == valuesInRow) {
                        std::cout << "\n";
                        counter = 0;
                    }
                    std::cout << vector[i] << " ";
                    counter++;
                }
            }
        }
    }

    void Output::showVector(std::vector<std::string> vector, int rows, bool tabulated)
    {
        if (vector.size() <= 0) {
            ApeX::Error::error(ApeX::Error::errorType(4), "An empty or a non-existent vector was given");
        }
        else {
            const int valuesInRow = vector.size() / rows;
            int counter = 0;
            if (tabulated) {
                for (int i = 0; i < vector.size(); i++) {
                    if (counter == valuesInRow) {
                        std::cout << "\n";
                        counter = 0;
                    }
                    std::cout << vector[i] << "\t";
                    counter++;
                }
            }
            else {
                for (int i = 0; i < vector.size(); i++) {
                    if (counter == valuesInRow) {
                        std::cout << "\n";
                        counter = 0;
                    }
                    std::cout << vector[i] << " ";
                    counter++;
                }
            }
        }
    }

    void Utils::clear()
    {
        system("cls");
    }

    void Utils::loading(int mode, int amountOfIterations, float animationSpeed, std::string msg)
    {
        switch (mode)
        {
        case 0:
            for (int i = 0; i < amountOfIterations * 4; i++) {
                std::cout << "|";
                Sleep(animationSpeed * 1000);
                ApeX::Utils::clear();
                std::cout << "/";
                Sleep(animationSpeed * 1000);
                ApeX::Utils::clear();
                std::cout << "-";
                Sleep(animationSpeed * 1000);
                ApeX::Utils::clear();
                std::cout << "\\";
                Sleep(animationSpeed * 1000);
                ApeX::Utils::clear();
            }
            break;
        case 1:
            for (int i = 0; i < amountOfIterations * 4; i++) {
                std::cout << msg << " |";
                Sleep(animationSpeed * 1000);
                ApeX::Utils::clear();
                std::cout << msg << " /";
                Sleep(animationSpeed * 1000);
                ApeX::Utils::clear();
                std::cout << msg << " -";
                Sleep(animationSpeed * 1000);
                ApeX::Utils::clear();
                std::cout << msg << " \\";
                Sleep(animationSpeed * 1000);
                ApeX::Utils::clear();
            }
            break;
        case 2:
            break;
        default:
            ApeX::Error::error(ApeX::Error::errorType(3), "There is no such mode called " + std::to_string(mode));
            break;
        }
    }

}