#pragma once

#include "Libraries.h"

struct person {
	person* next = NULL;
	person* prev = NULL;
	struct {
		string	Surname		= { "None" };
		string	Name		= { "None" };
		string	Patronymic	= { "None" };
		string	Address		= { "None" };
		string	PhoneNum	= { "None" };
		string	PayDay		= { "None" };
		int 	Summ		= 0;
	}Data;
};