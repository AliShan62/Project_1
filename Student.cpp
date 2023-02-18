#include"Student.h"
#include"E_SHIFT.h"
#include"M_SHIFT.h"
#include"UE_LMS.h"


	Student::Student(){
			cout<<"\n\t\t*********** welcome in student portal****************: "<<endl;
			cout<<"\n In which shift you are studting?"<<endl;
			cout<<"\n For Morning press 'M'"<<endl;
			cout<<"\n For Evening press 'E'"<<endl;
			cout<<"\n To go Back Enter '1'"<<endl;
			cout<<"\n Your Choice: ";
			cin>>choice1;
			if(choice1=='M' || choice1=='m'){
				
				
		     	Morning_Shift mor;
				cin.ignore();
				
			}
			else if(choice1=='E' || choice1=='e'){
				
				Evening_Shift eve;
				cin.ignore();
		
			}
			
			else{
				system("cls");
				
			}
		}
		
			 
		
		
		


