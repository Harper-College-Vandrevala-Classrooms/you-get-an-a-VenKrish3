/*
 * Gradebook.cpp
 *
 *  Created on: Oct 15, 2024
 *      Author: Turbo
 */
#include <iostream>
#include <vector>
#include "Gradebook.hpp"
#include "Student.hpp"

using namespace std;


void Gradebook::add_student(string name, string id)
{
	Student newStudent(name,id);
	theClass.push_back(newStudent);
};

void Gradebook::add_assignment(string name, int maxGrade)
{
	vector<string>::iterator it;
	Assignment assignment(name, "", 0, maxGrade);
	for(int i = 0; i < (int)theClass.size(); i++)
	{
		assignment.getId() = theClass[i].getId();
		assignments.push_back(assignment);
	}
};

void Gradebook::enter_grade(string name, string assignmentName, int grade)
{
	for(int i = 0; i < assignments.size(); i++)
	{
		if((name == theClass[i].getName()) && (assignmentName == assignments[i].getAssign()))
		{
			assignments[i].setGrade(grade);
		}
	}
};

void Gradebook::report()
{
	for(int i = 0; i < theClass.size(); i++)
	{
		for(int j = 0; j < assignments.size(); j++)
		{
			if(assignments[j].getId() == theClass[i].getId())
			{
				cout << theClass[i].getName() << " ," << theClass[i].getId() << " ," << assignments[j].getGrade() << " ," << assignments[j].getMax()<< endl;
			}
		}
	}
};




