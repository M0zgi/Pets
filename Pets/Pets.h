#pragma once

#include<iostream>
#include<string>
#include<Windows.h>

using namespace std;

struct numpunct
	: std::numpunct<char>
{
	std::string do_truename() const { return "��"; }
	std::string do_falsename() const { return "���"; }
};

//���������
class Plate
{
private:	
	string color;

public:	
	void setColor(string color) { this->color = color; }
	string getColor() const { return color; }

};

class Pets
{
private:
	
	class AnimalTraining
	{
	public:
		void training()
		{
			cout << "���� ����� ������������!";
		}
	};

public:
	
	AnimalTraining at;
	Plate pl;
	string myPets; //��� ��������� (������, �����, �������....)
	string name;
	float age;
	bool foodSource;//�������� ���� ��� ��������
	string classification;//�������������
	string voice;

	Pets() {}
	Pets(string myPets, string name, float age, bool foodSource, string classification, string voice);

	void print()
	{
		cout << getMyPets() << endl;
		cout << "���: "<< getName() << endl << "�������: " << getAge() << " ���"<< endl << "�������� ���� ��� ��������: " << getFoodSource()
			<< endl << "�������������: " << getClassification() << endl << "�����: " << getVoice() << endl;
	}

	//������� �������������� (��������������)
	void training()
	{
		at.training();
	}

	void printPlate()
	{
		cout << "� ��������� " << getMyPets() << " ����� " << pl.getColor() << " �����";
	}

	void setColorPl(string color) { pl.setColor(color); }

	string getMyPets() const { return myPets; }
	string getName() const { return name; }
	float getAge() const { return age; }
	bool getFoodSource() const { return foodSource; }
	string getClassification() const { return classification; }
	string getVoice() const { return voice; }

	friend class Plate;
};


inline Pets::Pets(string myPets, string name, float age, bool foodSource, string classification, string voice)
{
	this->myPets = myPets;
	this->name = name;
	this->age = age;
	this->foodSource = foodSource;
	this->classification = classification;
	this->voice = voice;
}


class Dog : public Pets
{
public:
	string breed; //������ ������
	string size;//������ ������

	Dog(){}
	Dog(string breed, string size) : breed(breed), size(size) {}

	void print()
	{
		Pets::print();
		cout << "������: " << breed << endl;
		cout << "������: " <<  size << endl;
	}
};


class Cat : public Pets
{
public:
	string breed;//������ �����
	bool rathunt; //����� �� ����
	
	Cat(){}
	Cat(string breed, bool rathunt) : breed(breed), rathunt(rathunt) {};

	void print()
	{
		Pets::print();
		cout << "������: " << breed << endl;
		cout << "����� �� ����: " << rathunt << endl;
	}
};

class Parrot : public Pets
{
public:
	string species; //��� ��������
	string size; //������ �������
	string featherColor; //���� ������
	string wingspan;//������ �������
	int rangeOfFlight;//��������� ������

	Parrot(){}
	Parrot(string species, string size, string featherColor, string wingspan, int rangeOfFlight) : species(species), size(size), featherColor(featherColor), wingspan(wingspan), rangeOfFlight(rangeOfFlight) {}
	
	void print()
	{
		Pets::print();
		cout << "��� �������: " << species << endl;
		cout << "������: " << size << endl;
		cout << "����: " << featherColor << endl;
		cout << "������ �������: " << wingspan << endl;
		cout << "��������� ������: " << rangeOfFlight << " ��." << endl;
	}
};