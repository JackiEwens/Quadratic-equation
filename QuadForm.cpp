#include "pch.h"
#include "QuadForm.h"

using namespace std;

string* QuadForm::Quadform(string a1, string b1, string c1) {
	ostringstream out;
	ostringstream out1;
	double a, b, c, D, x1, x2;
	if (!(a1 == "a"))
		if(!(b1 == "b"))
			if (!(c1 == "c"))
			{
				a = atof(a1.c_str());
				b = atof(b1.c_str());
				c = atof(c1.c_str());
				if (a == 0) {
					if (b == 0) {
						if (c == 0) {
							mas[0] = "Любые корни";
							return mas;
						}
						else {
							mas[0] = "Нет корней";
							return mas;
						}
					}
					else {
						x1 = (-c / b);
						out << x1;
						mas[0] = out.str();
						return mas;
					}
				}
				else {
					D = b * b - 4 * a * c;
					if (D < 0)
					{
						mas[0] = "Нет корней";
						return mas;
					}
					else {
						if (D > 0) {
							x1 = (-b + sqrt(D)) / 2 * a;
							x2 = (-b - sqrt(D)) / 2 * a;
							out << x1;
							out1 << x2;
							mas[0] = out.str();
							mas[1] = out1.str();
							return mas;
						}
						else {
							x1 = -b / 2 * a;
							out << x1;
							mas[0] = out.str();
							return mas;
						}
					}
				}
			}
			else
			{
				mas[0] = "Ошибка... введены неправильные переменные";
				return mas;
			}
		else
		{
			mas[0] = "Ошибка... введены неправильные переменные";
			return mas;
		}
	else
	{
		mas[0] = "Ошибка... введены неправильные переменные";
		return mas;
	}
}


