#include<iostream>
using namespace std;
class computer {
	string comp_name;
	double price;
public:
	computer(string name, double a=0)
	{
		comp_name = name;
		price = a;
	}
	virtual void show() = 0;
	virtual ~computer()
	{
		cout << "~computer called\n";
	}
};
void computer::show()
{
	cout << "company name: " << comp_name << endl;
	cout << "price of computer:" << price << endl;
}
class desktop :public computer
{
	string colour;
	double monitor_size;
	string processor_type;
public:
	desktop(string name, double p, string c, double s, string type) :computer(name, p)
	{
		colour = c;
		 monitor_size = s;
		 processor_type = type;
	}
	void show()
	{
		computer::show();
		cout << "colour:" << colour << endl << "monitor size:" << monitor_size<<"inches" << endl;
		cout << "processor Type :" << processor_type << endl;
	}
	~desktop()
	{
		cout << "~desktop called\n";
	}
};
class laptop :public computer {
	string colour;
	double weight;
	double size;
	string processor_type;
public:
	laptop(string name, double p, string c, double w, double s, string type) :computer(name, p)
	{
		colour = c;
		weight = w;
		size = s;
		processor_type = type;
	}
	void show()
	{
		computer::show();
		cout << "colour of laptop:" << colour << endl;
		cout << "weight is:" << weight <<"grams"<< endl;
		cout << "size is:" << size <<"inches"<< endl;
		cout << "processor type:" << processor_type << endl;
	}
	~laptop()
	{
		cout << "~laptop called\n";
	}
};
int main()
{
	  computer* c = new desktop("Dell", 20000, "black", 15.5, "octa_core");
	  c->show();
	  cout << "_______________________________________________\n";
	  c = new laptop("HP", 50000, "black", 2000,13.6,"octa_core++");
	  c->show();
	  cout << "_______________________________________________\n";
	  system("PAUSE");
	  return 0;
}