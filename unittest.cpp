#include "pch.h"
#include "CppUnitTest.h"
#include "QuadForm.h"
#include <iostream> 
#include <math.h>
#include <assert.h>
#include <string>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Quad
{
	TEST_CLASS(Quad)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			QuadForm obj;
			string* mas = new string[2];
			cout << "x ^ 2 - 8x + 12 = 0; Корни: x1 = 6, x2 = 2\n";
			mas = obj.Quadform("1", "-8", "12");
			if (mas[0] == "6" && mas[1] == "2")
				cout << "Правильно\n";
			else
				cout << "Неправильно\n";

			cout << "x ^ 2 - 16x = 0; Корни: x1 = 16, x2 = 0\n";
			mas = obj.Quadform("1", "-16", "0");
			if (mas[0] == "16" && mas[1] == "0")
				cout << "Правильно\n";
			else
				cout << "Неправильно\n";

			cout << "x ^ 2 - 16 = 0; Корни: x1 = 4, x2 = -4\n";
			mas = obj.Quadform("1", "0", "-16");
			if (mas[0] == "4" && mas[1] == "-4")
				cout << "Правильно\n";
			else
				cout << "Неправильно\n";

			cout << "4x + 16 = 0; Корни: x1 = -4\n";
			mas = obj.Quadform("0", "4", "16");
			if (mas[0] == "-4")
				cout << "Правильно\n";
			else
				cout << "Неправильно\n";

			cout << "0*x^2 - 0*x + 0 = 0; Корни: любые\n";
			mas = obj.Quadform("0", "0", "0");
			if (mas[0] == "Любые корни")
				cout << "Правильно\n";
			else
				cout << "Неправильно\n";

			cout << "0*x^2 - 0*x + 15 = 0; Корни: нет\n";
			mas = obj.Quadform("0", "0", "15");
			if (mas[0] == "Нет корней")
				cout << "Правильно\n";
			else
				cout << "Неправильно\n";

			cout << "x^2 + 12x + 36 = 0; Корни: x1 = -6\n";
			mas = obj.Quadform("1", "12", "36");
			if (mas[0] == "-6")
				cout << "Правильно\n";
			else
				cout << "Неправильно\n";

			cout << "a*x^2 + 12x + 36 = 0; Корни: ошибка\n";
			mas = obj.Quadform("a", "12", "36");
			if (mas[0] == "Ошибка... неправильные введены переменный")
				cout << "Правильно\n";
			else
				cout << "Неправильно\n";

			cout << "x^2 + b*x + 36 = 0; Корни: ошибка\n";
			mas = obj.Quadform("1", "b", "36");
			if (mas[0] == "Ошибка... неправильные введены переменный")
				cout << "Правильно\n";
			else
				cout << "Неправильно\n";

			cout << "x^2 + 12x + c = 0; Корни: ошибка\n";
			mas = obj.Quadform("1", "12", "c");
			if (mas[0] == "Ошибка... неправильные введены переменный")
				cout << "Правильно\n";
			else
				cout << "Неправильно\n";

			cout << "a*x^2 + b*x + c = 0; Корни: ошибка\n";
			mas = obj.Quadform("a", "b", "c");
			if (mas[0] == "Ошибка... неправильные введены переменный")
				cout << "Правильно\n";
			else
				cout << "Неправильно\n";
		}
	};
}
