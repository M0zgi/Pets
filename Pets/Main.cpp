#include"Pets.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::cout.setf(std::ios_base::boolalpha);

	locale loc(cout.getloc(), new ::numpunct);
	cout.imbue(loc);

	//Pets p("name", 0, 0, "classification", "voice");

	Dog dog1("���������� ��������", "�������");
	dog1.myPets = "������";
	dog1.name = "�++";	
	dog1.age = 8;
	dog1.foodSource = 0;//�������� ��� ��� ��������
	dog1.classification = "������";
	dog1.voice = "���!!! ���!!! ���!!!";
	dog1.print();
	cout << endl;
	cout << "����������: ";
	dog1.at.training();
	cout << endl;
	dog1.setColorPl("������");
	cout << "���������: ";
	dog1.printPlate();

	cout << endl;
	cout << "-------------------------------";
	cout << endl;
	
	Cat cat1("���-�����", 1);
	cat1.myPets = "�����";
	cat1.name = "�����";
	cat1.age = 6.5;
	cat1.foodSource = 0;//�������� ��� ��� ��������
	cat1.classification = "������";
	cat1.voice = "������!!!";
	cat1.print();

	cout << endl;
	cout << endl;
	cat1.setColorPl("��������");
	cout << "���������: ";
	cat1.printPlate();
	cout << endl;
	cout << "-------------------------------";
	cout << endl;
	
	Parrot parrot1("�������", "�������", "�������", "55 ��.", 10000);
	parrot1.myPets = "�������";
	parrot1.name = "������";
	parrot1.age = 12;
	parrot1.foodSource = 0;
	parrot1.classification = "���������������";
	parrot1.voice = "���������� �����";
	parrot1.print();
	cout << endl;
	cout << "-------------------------------";
	

	cout << endl;
	system("pause");
}