
// Overloading the function print()
// and the operator + . In this program,
// operator+() is a friend function. This
// time, member functions of the class are
// defined after the class (i.e.not inline)
#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;
const int max_len = 300;
// Definition of the mystring class
class mystring
{
public:
void assign(char* t);
int length();
void print();
void reverse();
void print(int k);
void print(ostream& os);
friend mystring operator+ (const mystring& a, const mystring& b);
friend int operator==(const mystring&str, const mystring &str2);
char& operator[](int index);
friend istream& operator>>(istream&is, mystring& s);
friend ostream& operator<<(ostream&os, mystring& s);
friend mystring& operator*(const mystring& a, int n);

private:
	char s[max_len];
	int len;
};
// Member functions of the mystring class
void mystring::assign(char* t)
{
	strcpy(s, t);
	len = strlen(s);
}
int mystring::length()
{
	return (len);
}
void mystring::print()
{
	cout << s << "\nLength: " << len << "\n";
}

void mystring::reverse()
{
    int a=0;
    char invert;
    int b = strlen(s);
    
    for(a;a<--b;a++) //increment a and decrement b until they meet eachother
    {
        invert=s[a];       //put what's in a into swap space
        s[a]=s[b];    //put what's in b into a
        s[b]=invert;       //put what's in the swap (a) into b
    } 
        //return the new (reversed) string (a pointer to it)
}
// Prototype of a general function (not a
// member of the mystring class)
void print(char* str);
// The program’s main function


void mystring::print(int k)
{
int i;
	for(i=0; i<k; i++)
	{
	cout<< s[i] ;
	}
}


int main()
{
	int k;
	char str[] = "My name is Charles Babbage.";
	mystring one;
	mystring two;
	mystring both;
	one.assign("My name is Alan Turing.");
	two.assign(str);
	// Next, we make a call to the
// non-member print() function.
	print(str);
	// Next, we call the member function
	// length() of the class mystring
	// to compare mystring lengths.
	// The variable having the shorter
	// length gets printed via a call to the
	// member function print() of the class
	if (one.length() <= two.length())
	one.print();
	else
	two.print();
	// Call the overloaded + operator.
	both = one + two;
	both.print();
	// test the overloaded [] operator
	char c = one[4];
	one[0] = 'H';
	// test the overloaded == operator
	if (one==two)
		cout << "They're equal\n";
	else
		cout << "They're not equal\n";
	cin >> one;
	cout << "You typed: ";
	one.reverse();
	one.print();
	cout << "how many letters" << endl;
	cin>>k;
	one.print(k);
	cout << endl;
	both = one * 1;
	both.print();
	mystring greetings;
	greetings.assign("Hello, world!");
	cout << greetings << endl;
}






// This is the function definition
// of the overloaded + operator.
mystring operator+(const mystring& a, const mystring& b)
{
	mystring tmp;
	
	if (a.len + b.len < max_len)
	{
		strcpy(tmp.s, a.s);
		strcat(tmp.s, b.s);
		tmp.len = a.len + b.len;
	}
else
{
	cerr << "\nERROR: Max length exceeded in concatenation in operator+() -bye!\n\n";
	exit(1);
}
return tmp;
}




// Definition of the general print function
void print(char* s)
{
	cout << s << "\nLength: " << strlen(s)
	<< "\n";
}
inline int operator==(const mystring &str, const mystring &str2)
{
// recall the strcmp function returns
// 0 if strings match, but this
// function is to return non-zero
// (i.e. true) for a match
	return(strcmp(str.s, str2.s) == 0);
}




char& mystring::operator[](int index)
{
	if (index > len-1)
	return s[len-1];
	else
	return s[index];
}




istream& operator>>(istream& is, mystring& str)
{
	const int bufsize = 256;
	char buf[bufsize];
	if (is.get(buf, bufsize))
	str.assign(buf);
	return is;
}




ostream& operator<<(ostream& os, mystring& s)
{
	s.print(os);
	return os;
}




// general print function for the string
// class (for any output stream, not just
// cout as before)
void mystring::print(ostream& os)
{
	os << s;
}




mystring& operator*(const mystring& a, int n)
{
	mystring mult;
	
	mult.len = a.len * n + (n-1);
	
	if (mult.len < max_len)
	{
		strcpy(mult.s, a.s);
		
		
		
		do{
		strcat(mult.s, " ");
		strcat(mult.s, a.s);
		n = n - 1;
		}
		while (n > 1);		
		
	}
else
{
	cerr << "\nERROR: Max length exceeded in concatenation in operator+() -bye!\n\n";
	exit(1);
}
return mult;
}










