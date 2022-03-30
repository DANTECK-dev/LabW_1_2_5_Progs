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

		Patronymic[0] = '�';	Gender[0] = '�';	Surname[0] = '�';	Name[0] = '�';		Age[0] = '2';
		Patronymic[1] = '�';	Gender[1] = '�';	Surname[1] = '�';	Name[1] = '�';		Age[1] = '3';
		Patronymic[2] = '�';	Gender[2] = '�';	Surname[2] = '�';	Name[2] = '�';
		Patronymic[3] = '�';	Gender[3] = 'c';	Surname[3] = '�';	Name[3] = '�';
		Patronymic[4] = '�';	Gender[4] = '�';	Surname[4] = '�';
		Patronymic[5] = '�';	Gender[5] = '�';	Surname[5] = '�';
		Patronymic[6] = '�';	Gender[6] = '�';
		Patronymic[7] = '�';
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
		cout << "\n\t���: " << Name << "\n\t�������: " << Surname << "\n\t��������: "
			<< Patronymic << "\n\t��������: " << Age << "\n\t���: " << Gender;
	}
};

void secondGeneralTask()
{
	Person Human;






	return;
}