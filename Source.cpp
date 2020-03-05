#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int N;
	double* Mas;
	cout << "Введите кол-во элементов: ";
	cin >> N;
	Mas = new double[N];
	for (int i = 0; i < N; i++)
	{
		Mas[i] = rand();
	}
	comb(Mas);
	system("PAUSE");
}

int comb(vector<double> Mas)// sort-название массива, size-размер массива,если нужно ввести массив с клавиатуры, то нужно создать динамический массив
{
	int n = 0; // количество перестановок
	double fakt = 1.2473309; // фактор уменьшения
	double step = Mas.size() - 1;

	while (step >= 1)
	{
		for (int i = 0; i + step < Mas.size(); ++i)
		{
			if (Mas[i] > Mas[i + step])
			{
				swap(Mas[i], Mas[i + step]);
				n++;
			}
		}
		step /= fakt;
	}
	// сортировка пузырьком
	for (int i = 0; i < Mas.size() - 1; i++)
	{
		bool swapped = false;
		for (int j = 0; j < Mas.size() - i - 1; j++)
		{
			if (Mas[j] > Mas[j + 1]) {
				swap(Mas[j], Mas[j + 1]);
				swapped = true;
				++n;
			}
		}

		if (!swapped)
			break;
	}
	return n;
}