#ifndef STUDENT_H
#define STUDENT_H
#include <string>
#include <array>
#include "softwareStudent.h"
#include "securityStudent.h"
#include "networkStudent.h"
#include "degree.h"



class Student {
public:
	string GetStudentID() const;
	string GetFirstName() const;
	string GetLastName() const;
	string GetEmail() const;
	int GetAge() const;
	int* GetDaysToComplete();
	Degree GetDegree();

	void SetStudentID(string idValue);
	void SetFirstName(string studentFirstName);
	void SetLastName(string studentLastName);
	void SetEmail(string studEmail);
	void SetAge(int age);
	void SetDaysToComplete(int dayToComplete[4]);
	void SetDegree(Degree studDegree);
	Student();
	Student(std::string studentID, std::string firstName, std::string lastName, std::string studentEmail, int Age, int daysToComplete[], Degree studentDegree);
	virtual Degree getDegreeProgram();
	virtual void print();


	~Student();

protected:
	string studentID;
	string firstName;
	string lastName;
	string studentEmail;
	int studentAge;
	int daysToComplete[4];
	Degree studentDegree;
};
#endif