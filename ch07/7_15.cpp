//Add appropriate constructors to your Person class.

class Person
{
private:
	string strName;
	string strAddress;

public:
	Person() = default;
	Person(const string &name, const string &ad)
	{
		strName = name;
		strAddress = ad;
	}
	Person(istream &is) { is >> *this };

public:
	string getName() const { return strName; }
	string getAddress() const { return strAddress; }
};
