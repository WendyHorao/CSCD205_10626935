#include <iostream>
#include "Students.h"
#include "Staff.h"
#include "Courses.h"
#include <list>
#include "winrt::Interrop::Implementation"
#include "winrt::Interrop::Calls"
#include "winrt::Interrop::list"
#include "winrt::System::Linq"
#include "winrt::System:Controls"
#include "winrt::System::Interpolation"
#include "winrt::Console"
#include "winrt::DataTypes::Conversion"

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void initialMessage(){
     
	cout << "\n\n\t\t\t WELCOME TO YOUR SCHOOL MANAGEMENT SYSTEM\n\n"  <<endl;
	cout << "\n\n\t\t\t ENTER YOUR CHOICE:\n\n"<<endl;
	cout << "\n\n\t\t\t 1. Students Data\n\n"<<endl;
	cout << "\n\n\t\t\t 2. Staff Data\n\n"<<endl;
	cout << "\n\n\t\t\t 3. Courses\n\n"<<endl;
}

void StudentsFirstMessage(){
	cout <<"Students Data Page"<<endl;
			cout<<"Enter 0 to go back"<<endl;
			cout<<endl;
			cout << "1 to List Students"<<endl;
			cout << "2 to add a Student"<<endl;
			cout << "3 to Delete a Student"<<endl;
}
void StaffFirstMessage(){
	cout <<"Staff Data Page"<<endl;
			cout<<"Enter 0 to go back"<<endl;
			cout<<endl;
			cout << "1 to List Students"<<endl;
			cout << "2 to add a Student"<<endl;
			cout << "3 to Delete a Student"<<endl;
}
void CoursesFirstMessage(){
		cout <<"Courses Page"<<endl;
			cout<<"Enter 0 to go back"<<endl;
			cout<<endl;
			cout << "1 to List Students"<<endl;
			cout << "2 to add a Student"<<endl;
			cout << "3 to Delete a Student"<<endl;
}
   void InitialMessage()
        {
            StarLimit();
            
            cout << "\n\n\t\t\t ENTER YOUR CHOICE:\n\n"<<endl;
            cout<<"Enter 1 for Students Page"<<endl;
            cout<<"Enter 2 for Staff Page"<<endl;
            cout"Enter 3 for Courses Page"<<endl;
             cout <<"Ctrl + C to Exit the program"<<endl;
        }
          void StudentFirstMessage()
        {
             cout <<"Students Data Page"<<endl;
             cout <<"Press 0 to go back"<<endl;
             cout <<"Press 1 to list students"<<endl;
             cout <<"Press 2 to add a Student"<<endl;
             cout <<"Press 3 to delete a student"<<endl;
        }
          void StaffFirstMessage()
        {
             cout <<"Staff  Page"<<endl;
             cout <<"Press 0 to go back"<<endl;
             cout <<"Press 1 to list Staff"<<endl;
             cout <<"Press 2 to add a Staff"<<endl;
             cout <<"Press 3 to delete a Staff"<<endl;
        }
          void CoursesFirstMessage()
        {
             cout <<"Courses Page"<<endl;
             cout <<"Press 0 to go back"<<endl;
             cout <<"Press 1 to list courses"<<endl;
             cout <<"Press 2 to add a courses"<<endl;
             cout <<"Press 3 to delete a courses"<<endl;
        }
          void StudentSecondMessage()
        {
            
        }
          void StaffSecondMessage()
        {

        }
          void CoursesecondMessage()
        {

        }
          list<Students> ListStudents()
        {
            list<Students> students ;
            students.push_front( Students { StudentId = 10, GPA = 3.3, Name = "Loretta Davies" });
            students.push_front( Students { StudentId = 11, GPA = 2.1, Name = "Douglas Oshea" });
            students.push_front( Students { StudentId = 12, GPA = 3.8, Name = "Smith Sese" });
            students.push_front( Students { StudentId = 13, GPA = 2.3, Name = "Sandra Boameh" });
            return students;
        }
          list<Staff> ListStaff()
        {
            list<Staff> staffs 
            staffs.push_front( Staff { Department = "Science", Names = "Mr Peasah", StaffId = 1 });
            staffs.push_front( Staff { Department = "Maths", Names = "Mrs Odonkor", StaffId = 2 });
            staffs.push_front( Staff { Department = "Sociology", Names = "Mr Castro", StaffId = 3 });
            staffs.push_front( Staff { Department = "Business", Names = "Mrs Zenia", StaffId = 4 });
            return staffs;
        }
          list<Courses> ListCourses()
        {
            list<Courses> courses =  listCourses>();
            courses.pushFront( Courses { CourseId = 1, CourseName = "Assembly Language", CreditHours = 3 });
            courses.pushfront( Courses { CourseId = 2, CourseName = "Algebra and Trig", CreditHours = 2});
            courses.pushfront( Courses { CourseId = 3, CourseName = "Circuit Theory", CreditHours = 1 });
            courses.pushfront( Courses { CourseId = 4, CourseName = "Android Development", CreditHours = 2 });
            return courses;
        }
          void StarLimit()
        {
            for (int i = 0; i <= 50; i++)
            {
                cout<<"*";
            }
            cout <<endl;
        }
          void MinusLimit()
        {
            for (int i = 0; i <= 50; i++)
            {
                cout<<"-";
            }
             cout <<endl;
        }


int main(int argc, char** argv) {
	initialMessage();
	int firstOption;
	cin>>firstOption;
	cout<<endl;
	cout<<endl;
	switch(firstOption){
	 static void Main(string[] args)
        {
            Console.Title = "School Management System";
            var s = ListStudents();
            var staff = ListStaff();
            var cou = ListCourses();
            cout<<("Welcome to School Management System");
            int firstOption;
            int zerzero = 9;
            while (zerzero != 0)
            {
                cout<<();
                cout<<();
                InitialMessage();
                MinusLimit();
                cin>>out firstOption;
                
                switch (firstOption)
                {
                    case 1:
                        StudentFirstMessage();
                        Int32.TryParse(cin>>(), out firstOption);
                        switch (firstOption)
                        {

                            case 1:

                                cout<<("\t\tStudentId\t\tName\t\tGPA");
                                foreach (var student in s)
                                {
                                    cout<<($"\t\t{student.StudentId}\t\t{student.Name}\t\t{student.GPA}");
                                }
                                break;
                            case 2:
                                cout<<("Enter StudentId");
                                int id;
                                cin>>id;
                                cout<<("Enter Student Name");
                                string name;
								  cin>>name;
                                cout<<("Enter GPA");
                                double GPA;
                                cin>>GPA;
                                s.add(Students() { GPA = GPA, Name = name, StudentId = id });
                                ///////////////////////////////////////
                                cout<<("\t\tStudentId\t\tName\t\tGPA");
                                foreach (var student in s)
                                {
                                    cout<<($"\t\t{student.StudentId}\t\t{student.Name}\t\t{student.GPA}");
                                }
                                //////////////////////////////////////////////////////////
                                break;
                            case 3:
                                cout<<("Enter the StudentId to Delete the Student's Data ");
                                int sid;
                                cin>>sid;
                                Students f = s.Find(x => x.StudentId == sid);
                                s.remove(f);
                                cout<<($"{f.Name} has been deleted");
                                break;
                        }
                        break;
                    case 2:
                        StaffFirstMessage();
                        #region "staff"
                        cin>>firstOption;
                        
                        switch (firstOption)
                        {

                            case 1:

                                cout<<("\t\tStaffId\t\tName\t\tDepartment");
                                foreach (var stunt in staff)
                                {
                                    cout<<($"\t\t{stunt.StaffId}\t\t{stunt.Names}\t\t{stunt.Department}");
                                }
                                 
                                break;
                            case 2:
                                cout<<("Enter StaffId");
                                int id;
                                cin>>id;
                                cout<<"Enter Staff Name";
                                string name = cin>>();
                                cout<<"Enter Department";
                                string depa = cin>>();
                                
                                staff.add( Staff { Department=depa,Names=name,StaffId=id});
                                ///////////////////////////////////////
                                cout<<("\t\tStaffId\t\tName\t\tDepartment");
                                foreach (Staff stunt in staff)
                                {
                                    cout<<($"\t\t{stunt.StaffId}\t\t{stunt.Names}\t\t{stunt.Department}");
                                }
                                //////////////////////////////////////////////////////////
                                 
                                break;
                            case 3:
                                cout<<("Enter the StaffId to Delete the Staff's Data ");
                                int sid;
                                cin>>sid;
                                Staff f = staff.Find(x => x.StaffId == sid);
                                staff.Remove(f);
                                cout<<($"{f.Names} has been deleted");
                                 
                                break;
                        }
                        #endregion
                        break;
                    case 3:
                        CoursesFirstMessage();
                        #region "courses"
                        cin>>out firstOption;
                        
                        switch (firstOption)
                        {

                            case 1:

                                cout<<("\t\tCourseId\t\tCourse Name\t\tCredit Hours");
                                foreach (var stunt in cou)
                                {
                                    cout<<($"\t\t{stunt.CourseId}\t\t{stunt.CourseName}\t\t{stunt.CreditHours}");
                                }
                                break;
                            case 2:
                                cout<<"Enter CourseId";
                                int id;
                                cin>>id;
                                cout<<"Enter Course Name";
                                string name = cin>>();
                                cout<<"Enter CreditHours";
                                int ch;
                                cin>> ch;

                                cou.add(Courses { CourseId = id, CourseName = name, CreditHours = id });
                                ///////////////////////////////////////
                                cout<<("\t\tCourseId\t\tCourse Name\t\tCreditHours");
                                foreach (var stunt in cou)
                                {
                                    cout<<($"\t\t{stunt.CourseId}\t\t{stunt.CourseName}\t\t{stunt.CreditHours}");
                                }
                                //////////////////////////////////////////////////////////
                                break;
                            case 3:
                                cout<("Enter the CourseId to Delete the Staff's Data ";
                                int sid;
                                cin>>sid;
                                Courses f = cou.Find(x => x.CourseId == sid);
                                cou.Remove(f);
                                cout<<($"{f.CourseName} has been deleted");
                                break;
                        }
                        #endregion
                        break;
                    default:
                        cout<<("Number must be  1 to 3");
                        InitialMessage();
                        break;

                }

            }
        }
			
	}

}
 
