#pragma once
#include <string>

using namespace std;

	class Staff
	{
	private:
		int StaffId; //Database generated
		string Title;
		string Surname;
		string OtherNames;
		string Email;
		string Department;
	public:
		
		int getStaffId();
		void setStaffId(int  a);
		string getTitle();
		string getSurname();
		string getOtherNames();
		string getMobileNumber();
		void setTitle(string a);
		void setOthernames(string a);
		void setSurname(string a);
		void setEmail(string a);
		void setDepartment(string a);
		string getDepartment();
		string getCoursesThought();
	};


