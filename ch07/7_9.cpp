//Add operations to read and print Person objects to the code you wrote for the exercises in ¡ì 7.1.2 (p. 260).

istream &read(istream &is, Person &per)
{
	is >> per.strName >> per.strAddress;
	return is;
}
ostream &print(ostream &os, const Person &per)
{
	os << per.getName() << per.getAddress();
	return os;
}
