#include"Pets.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::cout.setf(std::ios_base::boolalpha);

	locale loc(cout.getloc(), new ::numpunct);
	cout.imbue(loc);

	//Pets p("name", 0, 0, "classification", "voice");

	Dog dog1("Ирландский волкодав", "большая");
	dog1.myPets = "Собака";
	dog1.name = "С++";	
	dog1.age = 8;
	dog1.foodSource = 0;//источник еды для человека
	dog1.classification = "хищник";
	dog1.voice = "АУФ!!! АУФ!!! АУФ!!!";
	dog1.print();
	cout << endl;
	cout << "Композиция: ";
	dog1.at.training();
	cout << endl;
	dog1.setColorPl("синего");
	cout << "Агрегация: ";
	dog1.printPlate();

	cout << endl;
	cout << "-------------------------------";
	cout << endl;
	
	Cat cat1("Као-Манир", 1);
	cat1.myPets = "Кошка";
	cat1.name = "Питон";
	cat1.age = 6.5;
	cat1.foodSource = 0;//источник еды для человека
	cat1.classification = "хищник";
	cat1.voice = "Мяодзу!!!";
	cat1.print();

	cout << endl;
	cout << endl;
	cat1.setColorPl("красного");
	cout << "Агрегация: ";
	cat1.printPlate();
	cout << endl;
	cout << "-------------------------------";
	cout << endl;
	
	Parrot parrot1("Розелла", "средний", "пестрый", "55 см.", 10000);
	parrot1.myPets = "Попугай";
	parrot1.name = "Бейсик";
	parrot1.age = 12;
	parrot1.foodSource = 0;
	parrot1.classification = "попугаеобразный";
	parrot1.voice = "Мелодичный голос";
	parrot1.print();
	cout << endl;
	cout << "-------------------------------";
	

	cout << endl;
	system("pause");
}