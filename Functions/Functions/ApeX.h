#include <iostream>
#include <vector>
#include <Windows.h>
#include <string>
#include <conio.h>

#pragma once
#pragma omp parallel for
#pragma omp parallel while

namespace ApeX {

	class Print {
	public:
		static void stylizedMessage(std::string message, int windowWidth, char cornerStyle = '+', char topAndBottomBorderStyle = '-', char sideBorderStyle = '|', bool isCentered = true, bool printTop = true, bool printBottom = true);
		static void centeredMessage(std::string message, int relativeWidth, bool endLine = false);
		static void line(int lineType, int length, char texture = '-', bool hasCorners = true, char cornerTexture = '+');
	};

	//class Format {
	//public:
	//	static std::ostream& boldOn(std::ostream& os);
	//	static std::ostream& boldOff(std::ostream& os);

	//	static std::ostream& underlineOn(std::ostream& os);
	//	static std::ostream& underlineOff(std::ostream& os);

	//	static std::ostream& italicOn(std::ostream& os);
	//	static std::ostream& italicOff(std::ostream& os);
	//};

	class Output {
	public:
		static void showArray(int* arr);
		static void showArray(short* arr);
		static void showArray(long* arr);
		static void showArray(float* arr);
		static void showArray(double* arr);
		static void showArray(bool* arr);
		static void showArray(char* arr);
		static void showArray(std::string* arr);

		static void showVector(std::vector<int> vector, int rows = 1, bool tabulated = false);
		static void showVector(std::vector<short> vector, int rows = 1, bool tabulated = false);
		static void showVector(std::vector<long> vector, int rows = 1, bool tabulated = false);
		static void showVector(std::vector<float> vector, int rows = 1, bool tabulated = false);
		static void showVector(std::vector<double> vector, int rows = 1, bool tabulated = false);
		static void showVector(std::vector<bool> vector, int rows = 1, bool tabulated = false);
		static void showVector(std::vector<char> vector, int rows = 1, bool tabulated = false);
		static void showVector(std::vector<std::string> vector, int rows = 1, bool tabulated = false);
	};

	class Utils {
	public:
		static void clear();
		static void backgroundColor(std::string colorParams);
		static void loading(int mode = 0, int amountOfIterations = 1, float animationSpeed = 0.2, std::string msg = NULL);
	};

	//class TerminalUI {
	//public:
	//	static void initUI(std::vector<std::string> menus, char selectionKey);
	//private:
	//	static void color(int color);
	//	static void goToXY(int x, int y);
	//};

	class Copyright {
	public:
		static void copyright();
	private:
		// static bool firstLaunch;
		static void displayCopyrightInfo();
	};

	class Error {
	public:
		enum errorType {
			SOMETHING_WENT_WRONG = -1,
			UNKNOWN,
			INCORRECT_LENGTH,
			INVALID_TYPE,
			INVALID_VALUE,
			EMPTY_RANGE
		};
		static void error(errorType errorType, std::string errorMessage, std::string additionalInfo = NULL);
	};

}