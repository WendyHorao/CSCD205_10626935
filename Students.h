#include <string>
using namespace std;

class Students
{
private:
		int StudentId;
		string Names;
		double CWA;

	public:
		double getCwa();
		void setCwa(double a);
		int getStudentId();
		void setStudentId(int a);
		void setTitle(string a);
		void setOthernames(string a);
		void setSurname(string a);
		void setEmail(string a);
};

