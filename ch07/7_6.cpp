//Define your own versions of the add, read, and print functions.

istream &read(istream &is, Sales_data &item)
{
	is >> item.bookNo >> item.units_sold >> item.sellingprice >> item.saleprice;
	return is;
}

ostream &print(ostream &os, const Sales_data &item)
{
	os << item.isbn() << " " << item.units_sold << " " << item.sellingprice << " " << item.saleprice << " " << item.discount;
	return os;
}

Sales_data add(const Sales_data &rhs, const Sales_data &lhs)
{
	Sales_data sum = rhs;
	sum.combine(lhs);
	return sum;
}