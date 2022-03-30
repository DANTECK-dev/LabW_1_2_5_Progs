#include "SecondGeneralTask.h"
#include "ThisIs.h"
#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

enum class secondGeneralTaskMenu
{
	Exit,
	Addition,
	Subtraction,
	Multiplication,
	Division
};

class Person
{
private:
	char* Name,
		* Surname,
		* Patronymic,
		* Age,
		* Gender;

public:

	Person()
	{
		Name = new char[4];
		Surname = new char[6];
		Patronymic = new char[8];
		Age = new char[2];
		Gender = new char[7];

		Patronymic[0] = 'И';	Gender[0] = 'м';	Surname[0] = 'И';	Name[0] = 'И';		Age[0] = '2';
		Patronymic[1] = 'в';	Gender[1] = 'у';	Surname[1] = 'в';	Name[1] = 'в';		Age[1] = '3';
		Patronymic[2] = 'а';	Gender[2] = 'ж';	Surname[2] = 'а';	Name[2] = 'а';
		Patronymic[3] = 'н';	Gender[3] = 'c';	Surname[3] = 'н';	Name[3] = 'н';
		Patronymic[4] = 'о';	Gender[4] = 'к';	Surname[4] = 'о';
		Patronymic[5] = 'в';	Gender[5] = 'о';	Surname[5] = 'в';
		Patronymic[6] = 'и';	Gender[6] = 'й';
		Patronymic[7] = 'ч';
	}

	Person(char Name[], char Surname[], char Patronymic[], char Age[], char Gender[])
	{
		this->Name = Name;
		this->Surname = Surname;
		this->Patronymic = Patronymic;
		this->Age = Age;
		this->Gender = Gender;
	}

	Person(string Name, string Surname, string Patronymic, string Age, string Gender)
	{
		int lenName = Name.length();
		int lenSurname = Surname.length();
		int lenPatronymic = Patronymic.length();
		int lenAge = Age.length();
		int lenGender = Gender.length();

		this->Name = new char[lenName];
		this->Surname = new char[lenSurname];
		this->Patronymic = new char[lenPatronymic];
		this->Age = new char[lenAge];
		this->Gender = new char[lenGender];

		for (int i = 0; i < lenName; i++)
			this->Name[i] = Name[i];

		for (int i = 0; i < lenSurname; i++)
			this->Surname[i] = Surname[i];

		for (int i = 0; i < lenPatronymic; i++)
			this->Patronymic[i] = Patronymic[i];

		for (int i = 0; i < lenAge; i++)
			this->Age[i] = Age[i];

		for (int i = 0; i < lenGender; i++)
			this->Gender[i] = Gender[i];

		/*
		this->Name*			= Name.c_str();
		this->Surname*		= Surname.c_str();
		this->Patronymic	= Patronymic.c_str();
		this->Age			= Age.c_str();
		this->Gender		= Gender.c_str();
		*/
	}

	~Person()
	{
		delete Name;
		delete Surname;
		delete Patronymic;
		delete Age;
		delete Gender;
	}

	void Show()
	{
		cout << "\n\tИмя: " << Name << "\n\tФамилия: " << Surname << "\n\tОтчество: "
			<< Patronymic << "\n\tВозвраст: " << Age << "\n\tПол: " << Gender;
	}
};

void secondGeneralTask()
{
	Person Human;






	return;
}