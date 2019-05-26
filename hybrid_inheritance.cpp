#include<iostream>
#include<string.h>
using namespace std;
class student
{
	public:
		char name[20];
		int roll;
		void getrollno(int a,char b[20])
		{
			roll=a;
			strcpy(name,b);
		}
		void putrollno()
		{
			cout<<"Name: "<<name<<"\nRoll no: "<<roll<<endl;
		}
};
class test: public student
{
	public:
		float sci,maths;
		void getmarks(float a,float b)
		{
			sci=a;
			maths=b;
		}
		void putmarks()
		{
			cout<<"Marks in Science: "<<sci<<"\nMarks in Maths: "<<maths<<endl;
		}
};
class sports
{
	public:
		float score;
		void getscore(float z)
		{
			score=z;
		}
		void putscore()
		{
			cout<<"Sports score: "<<score<<endl;
		}
};
class result:public test,public sports
{
	public:
		float total;
		void display()
	{
		total= sci+maths+score;
		putrollno();
		putmarks();
		putscore();
		cout<<"Total score is: "<<total<<endl;
	}
};
int main()
{
	result st1;
	st1.getrollno(401,"Akshita");
	st1.getmarks(98,99);
	st1.getscore(95);
	st1.display();
	return 0;
}

