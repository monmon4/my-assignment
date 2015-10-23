#include "iostream"
#include "string"
using namespace std;

class Person 
{
private:
static const int LIMIT = 25;
string lname; // Person’s last name
char fname[LIMIT]; // Person’s first name
public:
Person() {lname = ""; fname[0] = '\0'; } // #1

Person(const string & ln, const char * fn = "Heyyou"); // #2
// the following methods display lname and fname
void Show() const; // firstname lastname format
void FormalShow() const; // lastname, firstname format

};

Person::Person(const string & ln, const char * fn)
{
	lname=ln;
	for(int i=0;i<25;i++)
	{
		fname[i] = fn[i];
	}
}

void Person::Show() const
{
	cout<<fname<<" " <<lname; 
}

void Person::FormalShow() const
{
	cout<<lname<<", "<<fname;
}

void main()
{
	Person l ("ahmed" ,"magdy");
	l.Show();
	cout<<endl;
	l.FormalShow();
	cout<<endl;
	Person d;
	d.Show();

}