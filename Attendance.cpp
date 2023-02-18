#include"Attendance.h"
#include <fstream>
#include<iomanip>
#include<windows.h>

		void Attendance::getdata(){
			
			T_present=0;
			T_absent=0;
			string month,date,day;
		cout<<"-------------------MOST WELCOME TO THE ATTENDANCE PORTAL--------------- "<<endl;
	    cout<<"\n\t\tPlease Enter the  Month:";
	    cin>>month;
	    cout<<"\n\t\tPlease Enter the  Date:";cin.ignore();
	    getline(cin,date);
	    cout<<"\n\t\tPlease Enter the  Day:";
	    cin>>day;
		
		cout<<"\n\t\tPlease Enter the Total Number Of Student In Your Class :";
	    cin>>no1;	
cout<<"\n\n*******************************************************************************************"<<endl;	    	
	    for(int i=0;i<no1;i++){
		cout<<"\nEnter the name of Student "<<i+1<<":";cin.ignore();
		getline(cin,name); 
		cout<<"\nEnter the Roll No Or Id of Student "<<i+1<<":";
		cin>>Id;
		cout<<"\t\tFor Present Enter 'P' :"<<endl;
		cout<<"\t\tFor Absent Enter 'A'  :"<<endl;
		cout<<"Your Choice 'P'or 'A' :";
		cin>>choice;
		
       if(choice=='P'||choice=='p'){
			T_present=T_present+1;
			
		}
		else if(choice=='A'||choice=='a'){
			
			T_absent=T_absent+1;
		
		}
		else{
			cout<<"Invalid";
		}

	}
         	
   	ofstream input("newfile.txt");
    input<<left
    <<setw(25)
    <<left
	<<month
	<<setw(25)
	<<date
	<<left
	<<setw(25)
	<<day
	<<"\n-------------------------------------------------------------- "<<endl;
	
	input<<left
    <<setw(25)
    <<left
	<<name
	<<setw(25)
	<<Id
	<<left
	<<setw(25)
	<<choice
	<<endl;
	
	cout<<"\n\n**********************************************************************************************"<<endl;
	cout<<"\nTotal  Number Of  Student :"<<no1<<endl;
	cout<<"\nTotal  Number Of Present Student :"<<T_present<<endl;
	cout<<"Total  Number Of Absent Student :"<<T_absent<<endl;
	cout<<"\n\n\t\tConguratulation Student Attenance Saved Sucessfully"<<endl;
	Sleep(5500);
	system("cls");
}
				
		

