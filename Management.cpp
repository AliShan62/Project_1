#include"Management.h"
#include<iomanip>
#include<windows.h>

#include"UE_LMS.h"


void Management::getdata(){
	
		cout<<" **********<('Most Welcome' To The 'Management' Portal)>*************";
				
				
				 cout<<"\n\n'Now',Please Enter Your Name :";cin.ignore();
			     getline(cin,M_name);
				 cout<<" \n Enter Department Name In Which You Are Working :";
				 getline(cin,department);
				 cout<<"\n Please Enter Nature Of work :";
				  getline(cin,nature);
				 cout<<"\n Enter Your Email OR Contact no. :";
				 cin>>email;
			
			 cout<<"\n**************************************************************************"<<endl;
	         Sleep(1300);
			 system("cls");
				cout<<"\n\n\t\t\t**********Mr/Ms "<<M_name<<" Here You Can Calculate Your Total Salary**********"<<endl;
				cout<<"\n\nPlease Enter Your Per_Day Salary :";
				cin>>salary;
				cout<<"\n\nPlease Enter Your No_Of_Working Days :";
				cin>>no_of_days;
				mul=salary*no_of_days;
    				
		cout<<"\n\n\n\n\t\t\t****** Mr/Ms "<<M_name<<" Your Total_Salary Record ******"<<endl;
				
cout<<"\n\n************************************************************************************************************************"<<endl;		
                cout<<"\n\n "<<left
				<<setw(20)
				<<"Employee_Name"
				<<left
				<<setw(25)
				<<"Department"
				<<left
				<<setw(24)
				<<"Nature_of_Work"
				<<left
				<<setw(21)
				<<"Email"
				<<left
				<<setw(23)
				<<"No_of_Working_days"
				<<"Total_Salary"<<endl;
				
				
				
				
				cout<<"\n\n "<<left
				<<setw(22)
				<<M_name
				<<left
				<<setw(25)
				<<department
				<<left
				<<setw(19)
				<<nature
				<<left
				<<setw(31)
				<<email
				<<left
				<<setw(20)
				<<no_of_days
				<<mul<<endl;
				
cout<<"\n\n************************************************************************************************************************"<<endl;				
				
		string no;		
		cout<<"Please Enter '1' to go Back:";
		cin>>no;
		if(no=="1") {
			system("cls");
			UE_LMS obj;
		}		
		else{
			system("cls");
			UE_LMS obj;
		}		
				
				
				
				
				
				
				
				
				
				
				
				
				
			
}
