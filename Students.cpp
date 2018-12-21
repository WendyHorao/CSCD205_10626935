#include "Students.h"

#include <string>

using namespace std;

//Students::Students()
//{
//}


//Students::~Students()
//{
//}


string Students::getAddress()
{
	return Address;
}

string Students::getMobileNumber() {
	return MobileNumber;
}
string Students::getOtherNames() {
	return OtherNames;
}

string Students::getSurname() {
	return Surname;
}
string Students::getTitle() {
	return Title;
}
int Students::getStudentId() {
	return StudentId;
}
void Students::setStudentId(int a) {
	StudentId = a;
}
void Students::setTitle(string a) {
	Title = a;
}
void Students::setOthernames(string a) {
	OtherNames = a;
}
void Students::setMobileNumber(string a) {
	MobileNumber = a;
}

void Students::setSurname(string a) {
	Surname = a;
}
void Students::setEmail(string a) {
	Email = a;
}

double Students::getCwa() {
	return CWA;
}
void Students::setCwa(double a) {
	CWA = a;
}
