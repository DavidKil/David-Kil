
#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <ctime>

using namespace std;

// Definition of the date class
class date
{
public:
void assign(int day, int month, int year);
void assign();
void print();
void print(ostream& os);
void input();
double difference(date dd, date d);

date::date();					// declare the date() function
date::date(int day, int month, int year);  //declare the date(dd,mm,yyyy) function

// declaring the overloaded operators
friend date& operator+(date& d, int add_days);
friend date& operator-(date& d, int sub_days);
friend ostream& operator<<(ostream& os, date& d);
friend istream& operator>>(istream& is, date& d);

private:
int day;
int month;
int year;
int weekday;

	
	
};


date::date() //assign default values for the date() function
{
	day = 1;
	month = 1;
	year = 2009;

	
}
date::date(int d, int m, int y) //assign the date using the function date(dd,mm,yyyy)
{
	day = d;
	month = m;
	year = y;
}

// Member functions of the date class
void date::assign(int d, int m, int y) //manually assign values to the date class
{
	day = d;
	month = m;
	year = y;

}


void date::assign() // assign default values to the date class

{
	day = 1;
	month = 1;
	year = 2009;
}


double date::difference(date dd, date d)
{
	
   struct tm a = {0,0,0,d.day,(d.month -1),(d.year - 1900)}; /* dd date */
   struct tm b = {0,0,0,dd.day,(dd.month - 1),(dd.year -1900)}; /* d date */
   std::time_t x = mktime(&a);
   std::time_t y = mktime(&b);
   if ( x != (time_t)(-1) && y != (time_t)(-1) )
   {
	 double difference = difftime(y, x) / (60 * 60 * 24);
	 if (difference < 0)
	 {
		 difference = difference * -1;
	 }
	 //cout << ctime(&x);
	 //cout << ctime(&y);
	 //cout << "difference = " << difference << " days" << endl;
	return difference; // return the difference between the 2 dates
   }

}

void date::print()

{

time_t rawtime;
  struct tm * timeinfo;
 
  char * weekday[] = { "Sunday", "Monday",
                       "Tuesday", "Wednesday",
                       "Thursday", "Friday", "Saturday"};



  /* get current timeinfo and modify it to the user's choice */
  time ( &rawtime );
  timeinfo = localtime ( &rawtime );
  timeinfo->tm_year = year - 1900;
  timeinfo->tm_mon = month - 1;
  timeinfo->tm_mday = day;

  /* call mktime: timeinfo->tm_wday will be set */
  mktime ( timeinfo );

 // printf ("That day is a %s.\n", weekday[timeinfo->tm_wday]);


// print the day followed by the date in the form dd/mm/yyyy
	cout << weekday[timeinfo->tm_wday] << " " << day << "/" << month << "/" << year << endl;
}


void date::input()
{

	int d,m,y,valid=0,dmax=0;

	do // validating the year
	{
		cout << "Enter a year between 1900 and 2100\n";
		cin >> y;
	}
	while (y < 1900 || y > 2100);

	year = y;



	do  // validating the month
	{
		cout << "Enter the month\n";
		cin >> m;
	}
	while (m < 1 || m > 12);

	month = m;

	//assigning a maximum to days depending on the month

	if (m == 2) 
	{
				
		if (y%4 == 0 && (y%100 != 0 || y%400 == 0))
		{
		dmax = 29;		
		}
		
		else 
		{
		dmax = 28;						
		}		
		
	}
		

	else if (m == 4 || m == 6 || m == 9 || m == 11) 
	{
		dmax = 30;
	}

	else
	{
		dmax = 31;
	}


	do
	{
		cout << "Enter the day\n";
		cin >> d;
	}
	while (d > dmax); // while the day entered isnt greater than the max number of days

	day = d;

}




// This is the function definition
// of the overloaded + operator.


date& operator+(date& d, int add_days)
{
	
	
	int dmax=0;
	

	while (add_days > 0)
	{

		if (d.month == 2) // assigning a maximum to the number of days in a month
		{
					
			if (d.year%4 == 0 && (d.year%100 != 0 || d.year%400 == 0))
			{
			dmax = 29;		
			}
			
			else 
			{
			dmax = 28;						
			}		
			
		}
			

		else if (d.month == 4 || d.month == 6 || d.month == 9 || d.month == 11) 
		{
			dmax = 30;
		}

		else
		{
			dmax = 31;
		}

		if (d.month == 12 && (add_days > dmax)) // end of year
		{
			d.year = d.year + 1;
			d.month = 1;
			add_days = add_days - (dmax - d.day);
			d.day = 1;
		}


		if (add_days > dmax) // add_days greater than total days in month
		{
			add_days = add_days - (dmax - d.day); 
			d.day = 0;
			d.month = d.month + 1;
			
		}

		else if ((d.day + add_days) > dmax ) // add_days + current day greater than total days in month
		{
			d.month = d.month + 1;
			d.day = (d.day + add_days) - dmax;
			add_days = 0;
		}

		else if ((d.day + add_days) <= dmax ) // current day and add_days less than max number of days in month
		{
			d.day = d.day + add_days;
			add_days = 0;

		}
		


		
	}
	
	

	  // return the final date achieved
	
 return d;
}






date& operator-(date& d, int sub_days) // subtract operator
{

	int dmax=0;
	int tmp=0;

	while (sub_days > 0)  // loop until number of days subtracted is 0
	{

		

		if ((d.day - sub_days) < 1) // find the start of the month
		{
			
			
			d.month = d.month - 1; // go to previous month

			if (d.month < 1) // go to previous year

			{
				d.month = 12;
				d.year = d.year - 1;
			}


			sub_days = sub_days - d.day; // reduce sub_days by number of days in current month

			if (d.month == 2) // assigning a maximum to the number of days in a month
			{
					
				if (d.year%4 == 0 && (d.year%100 != 0 || d.year%400 == 0))
				{
				dmax = 29;		
				}
				
				else 
				{
				dmax = 28;						
				}		
			
			}
			

			else if (d.month == 4 || d.month == 6 || d.month == 9 || d.month == 11) 
			{
				dmax = 30;
			}

			else
			{
				dmax = 31;
			}

			d.day = dmax;


			if (sub_days >= dmax)
			{
				
			}

			else 
			{
				d.day = d.day - sub_days;
				sub_days = 0;

			}

			
					
		
		}


		else if ((d.day - sub_days) >= 1)
		{
			d.day = d.day - sub_days;
			sub_days = 0;			
		
		}





	}
	return d;
}



istream& operator>>(istream& is, date& d)
{
	d.input();
	return is;

}



ostream& operator<<(ostream& os, date& d)
{
	
	d.print();
	return os;

}



int main()

{ 

double difference;
// this main function is just to test the date class
// test constructor version 1
date d;


// test overloaded output operator
 cout << d << endl;
 cout << "Enter another date" << endl;


// test overloaded input operator
 cin >> d;
 cout << d << endl;


// test overloaded - and + operators
  cout << "2 weeks before that was " << d-14 << endl;
  cout << "3 weeks after it will be " << d+21<< endl;


 d.print();



// test assign member function
 d.assign(1,1,2008);



// test constructor version 2
date dd(1,2,2008);

d.print();
dd.print();



// test difference member function
cout << "There are " << dd.difference(dd,d)  << " days between " << d << " and " << dd << endl;


}