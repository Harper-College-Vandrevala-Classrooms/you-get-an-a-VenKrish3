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
	Assignment assignment(name, maxGrade);
	for(int i = 0; i < (int)theClass.size(); i++)
	{
		assignment.setId(theClass[i].getId());
		assignments.push_back(assignment);
	}
};

void Gradebook::enter_grade(string name, string assignmentName, int grade)
{
	for(unsigned int i = 0; i < assignments.size(); i++)
	{
		for(unsigned int j = 0; j < theClass.size(); j++)
		{
			if((name == theClass[j].getName()) && (assignmentName == assignments[i].getAssign() && theClass[j].getId() == assignments[i].getId()))
			{
				assignments[i].setGrade(grade);
			}
		}
	}
};

void Gradebook::report()
{
	for(int i = 0; i < theClass.size(); i++)
	{
		for(int j = 0; j < assignments.size(); j++)
		{
			if(assignments[j].getGrade() != 0)
			{
				if(assignments[j].getId() == theClass[i].getId())
				{
					cout << theClass[i].getName() << ", " << theClass[i].getId() << ", " << assignments[j].getAssign() << ", " << assignments[j].getGrade() << ", " << assignments[j].getMax() << endl;
				}
			}
		}
	}
};




