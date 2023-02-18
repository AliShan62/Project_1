#include"UE_LMS.h"
#include"Student.h"	
#include"Staff.h"
#include<windows.h>		
   UE_LMS::UE_LMS(){
			
			cout<<"Are you student or faculty member?"<<endl;
			cout<<"For STUDENT press 'A'"<<endl;
			cout<<"For STAFF press 'B'"<<endl;
			cout<<"Enter '1' to go back"<<endl;
			cout<<"Your Choice: ";
			cin>>choice;
			if(choice=='A' || choice=='a' ){
				
				system("cls");
			     Student std;
			
			   
			}
			else if(choice=='B' || choice=='b'){
				
				system("cls");
				Staff std;	
				
			}
		
	 else{
	 	system("cls");
	 	
	 }

}

