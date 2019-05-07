//Add constructors to your Sales_data class and write a program to use each of the constructors.

class Sales_data
{
private:
	string bookNo;
	unsigned units_sold = 0;
	double sellingprice = 0.0;
	double saleprice = 0.0;
	double discount = 0.0;
public:
	Sales_data() = default;
	Sales_data(const std::string &s) : bookNo(s) {};
	Sales_data(const unsigned &s, unsigned &us, double &slp, double &sp, double & dis);
	Sales_data(std::istream &is);

	string isbn() const { return bookNo; }
	Sales_data& combine(const Sales_data &rhs)
	{
		units_sold += rhs.units_sold;
		saleprice = (rhs.saleprice * rhs.units_sold + saleprice * units_sold)
			/ (rhs.units_sold + units_sold);
		if (sellingprice != 0)
		{
			discount = saleprice / sellingprice;
		}
		return *this;
	}
};

Sales_data::Sales_data(const unsigned &s, unsigned &us, double &slp, double &sp, double & dis)
{
	bookNo = s;
	units_sold = us;
	sellingprice = slp;
	saleprice = sp;
	if (sellingprice != 0)
	{
		discount = saleprice / sellingprice;
	}
}

Sales_data::Sales_data(std::istream &is)
{
	read(is, *this);
}

int main()
{
	Sales_data data1;
	Sales_data data2("TP316.81.96");
	Sales_data data3("TP311.12.812", 50, 100, 90);
	Sales_data data4(cin);
}
