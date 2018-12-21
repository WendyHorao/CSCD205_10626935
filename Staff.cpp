#include "Staff.h"

#include "Staff.h"

#include <string>
using namespace std;


void Staff::setStaffId(int a) {
	StaffId = a;
}
int Staff::getStaffId() {
	return StaffId;
}




string Staff::getOtherNames() {
	return OtherNames;
}

string Staff::getSurname() {
	return Surname;
}
string Staff::getTitle() {
	return Title;
}

void Staff::setTitle(string a) {
	Title = a;
}
void Staff::setOthernames(string a) {
	OtherNames = a;
}
void Staff::setMobileNumber(string a) {
	MobileNumber = a;
}

void Staff::setSurname(string a) {
	Surname = a;
}
void Staff::setEmail(string a) {
	Email = a;
}
string Staff::getDepartment() {
	return Department;
}
void Staff::setDepartment(string a) {
	Department = a;
}

