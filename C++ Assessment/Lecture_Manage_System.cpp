/*Define a class to represent lecture details. Include the following members and the program should handle at least details of 5 lecturers. 
	Data members:
	a) Name of the lecturer
	b) Name of the subject
	c) Name of course
	d) Number of lecturers
	Data functions: 
	a) To assign initial values 
	b) To add a lecture details 
	c) To display name and lecture details 
	Make sure you have to use constructor concept in it 
	Make sure all naming conversion properly mention in this project work 
	Make sure all method name 
	Use class and object concepts 
*/
#include<iostream>	// header file

using namespace std;	// standard library for using standard names

class lecture
{
	public:		// Access modifiers
		string lecturer_name;
		string subject;
		string course;
		int lecturer;
		
		lecture(string lname, string sub, string cors, int lect)	// Define Parameterized Constructor
		{
			lecturer_name = lname;
			subject = sub;
			course = cors;
			lecturer = lect;
		}
	
		void display()		// Define Display Method to display Data
		{
			cout<<"\nLecturer Name = "<<lecturer_name;
			cout<<"\nSubject = "<<subject;
			cout<<"\nCourse = "<<course;
			cout<<"\nLecturer = "<<lecturer;
		}
};

int main()
{
	// to use the function of class we have to use/make object
	
	lecture l1[5]={		// ArrayOfObject
        lecture("Manav","C++","SE",2),
        lecture("Janvi","JavaScript","WD",1),
        lecture("Chetan","React","FrontEnd",3),
        lecture("Anjali","NodeJs","BackEnd",2),
        lecture("Rahul","Python","Full Stack",2)
    };
	
	cout<<"****** Lecture Management System ******"<<endl;
	for(int i=0; i<=4; i++)
	{
		l1[i].display();
		cout<<endl;
	}
	return 0;
}
//........Coded by JALPA VADGAMA