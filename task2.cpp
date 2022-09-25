#include<iostream>
using namespace std;
class person {
	string name;
	int age;
public:
	person(string n, int a=0)
	{
		name = n;
		age = a;
	}
	virtual void print_info() = 0;
	~person()
	{
		cout << "~person  called\n'";
	}
};
void person::print_info()
{
	cout << "name of person is:" << name << endl;
	cout << "Age is:" << age << endl;
}
class patient :public person {
	string disease_type, medicine;
public:
	patient(string n, int a, string d, string m):person(n,a)
	{
		disease_type = d;
		medicine = m;
	}
	virtual void print_info()
	{
		cout << "this is the patient data:\n";
		person::print_info();
		cout << "Disease Type is:" << disease_type << endl;
		cout << "recommended medicine is:" << medicine << endl;
	}
	~patient()
	{
		cout << "~patient called\n'";
	}
};
class medicare_patient :public patient
{
	string hosp_name;
	string ward_name;
	int room_no;
public:
	medicare_patient(string n, int a, string d, string m,string hosp,string ward,int no) :patient(n, a, d, m)
	{
		hosp_name = hosp;
		ward_name = ward;
		room_no = no;
	}
	void print_info()
	{
		patient::print_info();
		cout << "hosp name is:" << hosp_name << endl;
		cout << "Ward name is:" << ward_name << endl;
		cout << "room number is:" << room_no << endl;
	}
	~medicare_patient()
	{
		cout << "~medicare_patient called\n'";
	}
};
int main()
{
	person* p = new patient("Ali", 18, "Headache", "Panadol");
	p->print_info();
	p = new medicare_patient("Hamza", 30, "Aids", "Qatal", "Jinnah Hospital", "HIV Ward", 33);
	p->print_info();
	system("PAUSE");
	return 0;
}