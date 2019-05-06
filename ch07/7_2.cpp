//Add the combine and isbn members to the Sales_data class you wrote for the exercises in ¡ì 2.6.2 (p. 76).
class Sales_data
{
private:
	string bookNo;
	unsigned units_sold = 0;
	double sellingprice = 0.0;
	double saleprice = 0.0;
	double discount = 0.0;
public:
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