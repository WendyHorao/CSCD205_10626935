
#include "Courses.h"
#include <string>
#include <list>
using namespace std;

Courses::Courses(int a, string b,int c)
{
	setCourseId(a);
	setCourseName(b);
	setCreditHours(c);
}


Courses::~Courses()
{
}
void Courses::setCourseId(int a) {
	CourseId = a;
}
int Courses::getCourseId() {
	return CourseId;
}
void Courses::setCourseName(string a) {
	CourseName = a;
}
void Courses::setCreditHours(int a) {
	CreditHours = a;
}
string Courses::getCourseName() {
	return CourseName;
}
int Courses::getCreditHours() {
	return CreditHours;
}


