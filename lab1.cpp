#include<iostream>

using namespace std;

class Student
{
   private:
      int id;
	  char name[100];
	  float cgpa;
	  
	  
	public:
	  
	   void setStudentData()
	   {
	   	   cout<<"\n Enter Student Details :";
	   	   
		   cout<<"\n Enter Student Id :";
	   	   cin>>id;
	   	   
	   	   cout<<" Enter Student Name :";
	   	   cin>>name;
	   	   
	   	   cout<<" Enter Student CGPA :";
	   	   cin>>cgpa;
	   	   
	   	   
		} 
		
		
	   void displayStudentData()
	   {
	   	    cout<<"\n************* STUDENT DETAILS ***************\n";
	   	    
	   	    cout<<"\n Student Id :"<<id<<endl;
	   	    cout<<"\n Student Name :"<<name<<endl;
	   	    cout<<"\n Student CGPA :"<<cgpa<<endl;
	        
	    }	  	
};


int main()
{

    int n;

    cout << "Enter Number of Students: ";
    cin >> n;

    Student s[100];
    
    
    
    Student *ptr = s;

    for(int i = 0; i < n; i++)
    {
        cout << "\nEnter Details of Student " << i + 1 << endl;
        (ptr + i)->setStudentData();
    }

    cout << "\n\n***** ALL STUDENT DETAILS *****\n";

    for(int i = 0; i < n; i++)
    {
        (ptr + i)->displayStudentData();
    }
   
    return 0;
}
