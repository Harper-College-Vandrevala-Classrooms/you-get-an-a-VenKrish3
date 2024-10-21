/*
 * Student.hpp
 *
 *  Created on: Oct 17, 2024
 *      Author: Turbo
 */
#pragma once
#ifndef STUDENT_HPP_
#define STUDENT_HPP_

#include <string>

using namespace std;

class Student
{
private:
	string name;
	string id;
public:
	Student(string name, string id)
	{
		this->name = name;
		this->id = id;
	};
	string getName()
	{
		return name;
	}
	string getId()
	{
		return id;
	}
};
#endif /* STUDENT_HPP_ */
