#include<iostream>
using namespace std;
#include<string>
#include<cstring>


class DateofBirth{
	int date;
	int month;
	int year;
public:
	class Invalid
	{
	public:
		Invalid() {}
		~Invalid() {}
	};
	/*DOB() {}
	~DOB() {}*/
	void setDate(int Date) {
		if (Date < 0 || Date >= 31) {
			date = 0;
			throw Invalid();
		}
		else
		{
			date = Date;
		}
	}
	void setMonth(int Month) {
		if (Month <= 0 || Month > 12) {
			month = 0;
			throw Invalid();
		}
		else
		{
			month = Month;
		}
	}
	void setYear(int Year) {
		if (Year <= 0 || Year > 2022) {
			year = 0;
			throw Invalid();
		}
		else
		{
			year = Year;
		}
	}
	int getDate() {
		return date;
	}
	string getMonth() {
		if (month == 1)
		{
			return "January";
		}
		else if (month ==2 ) {
			return "February";
		}
		else if (month ==3 ) {
			return "March";
		}
		else if (month ==4 ) {
			return "April";
		}
		else if (month ==5 ) {
			return "May";
		}
		else if (month ==6 ) {
			return "June";
		}
		else if (month ==7 ) {
			return "July";
		}
		else if (month ==8 ) {
			return "August";
		}
		else if (month ==9 ) {
			return "September";
		}
		else if (month ==10 ) {
			return "October";
		}
		else if (month ==11 ) {
			return "November";
		}
		else if (month ==12 ) {
			return "December";
		}
	
	}
	int getYear() {
		return year;
	}
};
[ int main() {
	DOB obj;
	int day, month, year;
	cout << "Enter year : ";
	cin >> year;
	cout << "Enter month : ";
	cin >> month;
	cout << "Enter day : ";
	cin >> day;
	try {
		obj.setYear(year);
	}
	catch (DOB::Invalid) {
		cout << "Invalid year entered" << endl;
	}

	try {
		obj.setMonth(month);
	}
	catch (DOB::Invalid) {
		cout << "Invalid month entered" << endl;
	}
	
	}
	try {
		obj.setDate(day);
	}
	catch (DOB::Invalid) {
		cout << "Invalid day entered" << endl;
	}
	cout << "Your Date of birth is :" << obj.getMonth() << " " << obj.getDate() << " " << obj.getYear();
	
	system("pause");

	
	
