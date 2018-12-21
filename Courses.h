#pragma once

#include <string>
using namespace std;


 class Courses
	{
	private:
		int CourseId;//database generated
		string CourseName;
		int CreditHours;
	public:
		Courses(int a, string b, int);
		~Courses();
		void setCourseName(string a);
		void setCourseId(int a);
		int getCourseId();
		void setCreditHours(int a);
		string getCourseName();
		int getCreditHours();
		Courses getCourses();
};



