#include <iostream>
#include <string>
#include <math.h>
#include <cmath>
#include <sstream>

using namespace std;

class QuadForm	
{
public:
	QuadForm() : mas(new string[2]) {};
	~QuadForm() {
		delete[] mas;
	};
	string* Quadform(string a, string b, string c);
private:
	string* mas;
};
