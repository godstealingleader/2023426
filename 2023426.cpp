#include <iostream>

int main()
{
	using namespace std;
	double Daphne_money = 100, Cleo_money = 100; int time = 1;
	for (; Daphne_money >= Cleo_money; time++)
	{
		cout << "in " << time << " year " << "Daphe have " << Daphne_money << " and Cleo have " << Cleo_money << endl;
		cout << "Daphe have " << Daphne_money - Cleo_money << " more than Cleo" << endl;
		Daphne_money = 100 + time * 10; Cleo_money = Cleo_money * 1.05;
	}
	cout << "but in " << time << " year, Cleo have " << Cleo_money - Daphne_money << " more than Daphne" << endl;
	cout << " and Daphe have " << Daphne_money <<", Cleo have " << Cleo_money << endl;
	return 0;
}