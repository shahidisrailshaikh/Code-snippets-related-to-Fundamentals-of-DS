#include <iostream>
#include <iomanip>
using namespace std;
class Attendance
{
public:
	int rollno,j,i;
	string name,class1;
	float rating,hrating,frating;

	void studentdetails()
	{
		cout<<"Enter\n1.Your Name\n2.Your Roll Number\n3.Your Class\n";
		cin>>name;
		cin>>rollno;
		cin>>class1;
	}

	void display()
	{

		
		
		cout << left << setw(15) << setfill(' ') << name;
        cout << left << setw(15) << setfill(' ') << rollno;
        cout << left << setw(15) << setfill(' ') << class1;
        cout << left << setw(15) << setfill(' ') << rating;
        cout << left << setw(15) << setfill(' ') << hrating;
        cout << left << setw(15) << setfill(' ') << frating<<endl;
        cout << left<< setfill('_')<< setw(100);
        
	}
	
	void feedback()
	{
	    cout<<"How would you rate the programme on the scale of 1-10"<<endl;
		cin>>rating;
		cout<<"How would you rate the Hygiene on the scale of 1-10"<<endl;
		cin>>hrating;
		cout<<"How would you rate the Food provided on the scale of 1-10"<<endl;
		cin>>frating;
	}
};
int main()
{
	int size,i=0,ch,ch1,ch2,j,Srn,flag=0,low,high,mid;
	float rating,overall_rating,sumrating,hrating,hoverall_rating,hsumrating,frating,foverall_rating,fsumrating,toverall_rating;
	cout<<"\nEnter the total strenght of the Class";
	cin>>size;
	class Attendance AT[size];

	do {
		cout<<"\nEnter your choice\n1.Mark the Attendance\n2.Check the attendance(Linear Search)\n3.Display\n4.Exit\n5.Check the attendance(Binary Search)\n6.Overall Rating of the programme";
		cin>>ch1;
		switch(ch1)
		{
		case 1:
			do {

				AT[i].studentdetails();
				AT[i].feedback();
				

				
				sumrating=sumrating+AT[i].rating;
				
				hsumrating=hsumrating+AT[i].hrating;
				
				fsumrating=fsumrating+AT[i].frating;
				i++;

				cout<<"Enter 1 if you want to continue registering";
				cin>>ch;
			} while(ch==1);
			break;

		case 2:
			cout<<"The number of students who attended the programme : "<<i<<endl;
			cout<<"The number of students who were Absent: "<<size-i<<endl;
			cout<<"Enter the Roll number of student\n";
			cin>>Srn;
			for(j=0; j<=i; j++)
			{
				if(Srn==AT[j].rollno)
				{
					cout<<"The Student is present"<<endl;
					cout<<"Details of the student : "<<endl;
					cout<<"Student name : "<<endl;
					cout<<AT[j].name<<endl;
					cout<<"Student Roll No : "<<endl;
					cout<<AT[j].rollno<<endl;
					cout<<"Student Class : "<<endl;
					cout<<AT[j].class1<<endl;

					flag=1;
				}

			}

			if(flag!=1)
			{
				cout<<"The Student was Absent"<<endl;
			}
			flag=0;
			break;

		case 3 :
		    cout << left<< setfill('_')<< setw(100);
		    cout << left << setw(15) << setfill(' ') << "Name";
            cout << left << setw(15) << setfill(' ') << "RollNo";
            cout << left << setw(15) << setfill(' ') << "Class";
            cout << left << setw(15) << setfill(' ') << "P-Rating";
            cout << left << setw(15) << setfill(' ') << "H-Rating";
            cout << left << setw(15) << setfill(' ') << "F-Rating"<<endl;
        
			for(j=0; j<i; j++)
			{
				AT[j].display();
			}
			
			


			break;
		case 4 :
			cout<<"Exiting..."<<endl;
			break;

		case 5 :
			cout<<"The number of students who attended the programme : "<<i<<endl;
			cout<<"The number of students who were Absent: "<<size-i<<endl;
			cout<<"Enter the Roll number of student\n";
			cin>>Srn;

			low=0;
			high=i;
			mid=(low+high)/2;

			while(low<=high)
			{
				if(Srn==AT[mid].rollno)
				{
					cout<<"The student is Present"<<endl;
					break;
				}

				else if(Srn<AT[mid].rollno)
				{
					high=mid-1;
				}

				else
				{
					low=mid+1;
				}


				mid=(low+high)/2;
			}

			if(Srn!=AT[mid].rollno)
			{
				cout<<"The student did not attend the programme"<<endl;
			}
			break;

		case 6:
			overall_rating=(sumrating/i)*10;
			hoverall_rating=(hsumrating/i)*10;
			foverall_rating=(fsumrating/i)*10;
			toverall_rating=(overall_rating+hoverall_rating+foverall_rating)/3;

			cout<<"Overall Rating Of The programme Is : "<<overall_rating<<endl;
			cout<<"Overall Rating Of The Hygiene Is : "<<hoverall_rating<<endl;
			cout<<"Overall Rating Of The Food Is : "<<foverall_rating<<endl;
			cout<<"Overall Rating Of The Management Is : "<<toverall_rating<<endl;
			if(toverall_rating>=75)
			{
				cout<<"Similar programmes should be planned"<<endl;
			}
			else
				cout<<"improvement in management is needed"<<endl;
			break;

		}
		cout<<"Enter 1 to continue";
		cin>>ch2;

	} while(ch2==1);

	return 0;
}





































