//Provide operations in your Person class to return the name and address.Should these functions be const ? Explain your choice.

class Person
{
private:
	string strName;
	string strAddress;

public:
	string getName() const { return strName; }
	string getAddress() const { return strAddress; }
};

These functions should be const£¡