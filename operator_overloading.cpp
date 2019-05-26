#include<iostream>
#include<string.h>
using namespace std;

class strings
{
	char s[20];
	public:
		void inpstring()
		{
			gets(s);
		}
		void operator+(strings a)
		{
			strcat(s,a.s);
			puts(s);
		}
		void operator=(strings a)
		{
			strcpy(s,a.s);
			puts(s);
		}
		void operator<=(strings a)
		{
			int len1=strlen(s);
			int len2=strlen(a.s);
			if(len1<=len2)
			{
				cout<<"TRUE"<<endl;
			}
			else
			cout<<"False";
		}
		void lower()
		{
			for(int i=0;s[i]!='\0'; i++)
			{
				s[i]=tolower(s[i]);
			}	puts(s);
			
		}
		void length()
		{
			cout<<strlen(s);
		}
};
int main()
{
	strings a,b;
	cout<<"Enter first string:"<<endl;
	a.inpstring();
	cout<<"Enter second string:"<<endl;
	b.inpstring();
	a+b;
	a=b;
	a<=b;
	a.lower();
	a.length();
	return 0;
}

