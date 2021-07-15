#pragma once

#include<iostream>
#include<string>
#include<Windows.h>

using namespace std;

struct numpunct
	: std::numpunct<char>
{
	std::string do_truename() const { return "Да"; }
	std::string do_falsename() const { return "Нет"; }
};

//агрегация
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
			cout << "Меня можно дрессировать!";
		}
	};

public:
	
	AnimalTraining at;
	Plate pl;
	string myPets; //тип животного (собака, кошка, попугай....)
	string name;
	float age;
	bool foodSource;//источник пищи для человека
	string classification;//классификация
	string voice;

	Pets() {}
	Pets(string myPets, string name, float age, bool foodSource, string classification, string voice);

	void print()
	{
		cout << getMyPets() << endl;
		cout << "Имя: "<< getName() << endl << "Возраст: " << getAge() << " лет"<< endl << "Источник пищи для человека: " << getFoodSource()
			<< endl << "Классификация: " << getClassification() << endl << "Голос: " << getVoice() << endl;
	}

	//паттерн проектирования (диллегирование)
	void training()
	{
		at.training();
	}

	void printPlate()
	{
		cout << "У животного " << getMyPets() << " миска " << pl.getColor() << " цвета";
	}

	void setColorPl(string color) { pl.setColor(color); }

	string getMyPets() const { return myPets; }
	string getName() const { return name; }
	float getAge() const { return age; }
	bool getFoodSource() const { return foodSource; }
	string getClassification() const { return classification; }
	string getVoice() const { return voice; }	
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
	string breed; //порода собаки
	string size;//размер собаки

	Dog(){}
	Dog(string breed, string size) : breed(breed), size(size) {}

	void print()
	{
		Pets::print();
		cout << "Порода: " << breed << endl;
		cout << "Размер: " <<  size << endl;
	}
};


class Cat : public Pets
{
public:
	string breed;//порода кошки
	bool rathunt; //охота на крыс
	
	Cat(){}
	Cat(string breed, bool rathunt) : breed(breed), rathunt(rathunt) {};

	void print()
	{
		Pets::print();
		cout << "Порода: " << breed << endl;
		cout << "Охота на крыс: " << rathunt << endl;
	}
};

class Parrot : public Pets
{
public:
	string species; //вид попугаев
	string size; //размер попугая
	string featherColor; //цвет перьев
	string wingspan;//размех крыльев
	int rangeOfFlight;//дальность полета

	Parrot(){}
	Parrot(string species, string size, string featherColor, string wingspan, int rangeOfFlight) : species(species), size(size), featherColor(featherColor), wingspan(wingspan), rangeOfFlight(rangeOfFlight) {}
	
	void print()
	{
		Pets::print();
		cout << "Вид попугая: " << species << endl;
		cout << "Размер: " << size << endl;
		cout << "Цвет: " << featherColor << endl;
		cout << "Размах крыльев: " << wingspan << endl;
		cout << "Дальность полета: " << rangeOfFlight << " км." << endl;
	}
};