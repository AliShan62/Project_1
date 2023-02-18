#include"cba.h"

 //-------------------------------------------------------------------------------------   
 
  void modify:: Insert(){
   
  	cout<<"\nEnter The Name Of Student :";cin.ignore();
    getline(cin,name);
  	cout<<"\nEnter The ID Of Student :";
  	cin>>id;
  	cout<<"\nEnter The Name Of Subject :";cin.ignore();
  	getline(cin,sname);
  	cout<<"\nEnter The Total_Marks Of Subject :";
  	cin>>tmarks;
  	cout<<"\nEnter The Obtained_Marks Of Student :";
  	cin>>marks;
  	
cout<<"\n\n\t\t***********<(Insert Record Successfully)>***********"<<endl;

Sleep(1200);
    system("cls");
  	
  	percentage=(marks/tmarks)*100;
  	  if(percentage>=90&&percentage<=100){
								  
	      grade="A+";
		 }	        
  else if(percentage>=80&&percentage<=89){
	 grade="A";
	  }
	  else if(percentage>=70&&percentage<=79){
		grade="B";    		
	  }
	else if(percentage>=60&&percentage<=69){
	  grade="C";	
	  }
	 else if(percentage>=50&&percentage<=59){
    	grade="D";
		   }
							  
	else if(percentage<50){
		 	grade="F";
			 }
    else{
    	cout<<"You are not Eligible to study";
	}
	 
	  
   
	}  
	
	//-------------------------------------------------------------------------------//	
  
  
  //hrere Display Working --------------------------------------------------------------
  
  void modify:: Show(){

  	
  	cout<<"\n**************************************************************************************************************************"<<endl;  	
  	  cout<<left
  	  <<setw(17)
	  <<"\n\nStudent_Name"
	  <<left
  	  <<setw(17)
	  <<"Student_ ID"
	  <<left
  	  <<setw(19)
  	  <<" Subject_Name"
  	  <<left
  	  <<setw(19)
  	  <<" Total_Marks"
  	  <<left
  	  <<setw(19)
  	  <<"Obtained_Marks"
  	  <<left
  	  <<setw(19)
  	  <<" Percentage "
  	  <<" Grade_Obtained"<<endl;
  	  
  	  
  	  cout<<"\n\n"<<left
  	  <<setw(19)
	  <<name
	  <<left
  	  <<setw(19)
	  <<id
	  <<left
  	  <<setw(17)
  	  <<sname
  	  <<left
  	  <<setw(19)
  	  <<tmarks
  	  <<left
  	  <<setw(19)
  	  <<marks
  	  <<left
  	  <<setw(20)
  	  <<percentage
  	  <<grade<<endl;
  	
  cout<<"\n**************************************************************************************************************************"<<endl;  	
  cout<<"\n\n~~~~~~~~~~~~~~~~Display Record Successfully~~~~~~~~~~~~~~~~"<<endl;
  	
  	
  
  };
	 
	 


