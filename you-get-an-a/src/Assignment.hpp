/*
 * Assignment.hpp
 *
 *  Created on: Oct 17, 2024
 *      Author: Turbo
 */

#ifndef ASSIGNMENT_HPP_
#define ASSIGNMENT_HPP_

#include <string>
#include "Student.hpp"
using namespace std;

class Assignment
{
private:
	friend class Student;
	string nameOfAssignment;
	string id = "";
	int grade = 0;
	int max_grade = 0;
public:
	Assignment(string id, string assign, int grade, int max_grade)
	{
		this->id = id;
		this->nameOfAssignment = assign;
		this->max_grade = max_grade;
		this->grade = grade;
	};
	string getId()
	{
		return id;
	}
	string getAssign()
	{
		return nameOfAssignment;
	}
	int getGrade()
	{
		return grade;
	}
	int getMax()
	{
		return max_grade;
	}
	void setGrade(int temp)
	{
		this->grade = temp;
	}
};

#endif /* ASSIGNMENT_HPP_ */