/*
 * Gradebook.hpp
 *
 *  Created on: Oct 14, 2024
 *      Author: Turbo
 */

#ifndef GRADEBOOK_HPP_
#define GRADEBOOK_HPP_
#include <string>
#include <vector>
#include "Student.hpp"
#include "Assignment.hpp"

using namespace std;

class Gradebook
{
private:
	friend class Student;
	friend class Assignment;
	vector<Assignment> assignments;
	vector<Student> theClass;

public:
	void add_student(string, string);
	void add_assignment(string, int);
	void enter_grade(string, string, int);
	void report();
};


#endif /* GRADEBOOK_HPP_ */







