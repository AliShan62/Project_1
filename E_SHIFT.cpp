#include"E_SHIFT.h"
#include<windows.h>
#include"UE_LMS.h"


        Evening_Shift::Evening_Shift(){
        	Sleep(1200);
        	system("cls");
    cout<<"\n\n \t\t*********** 'MOST WELCOME' EVENING SHIFT STUDENT ***********"<<endl;
			cin.ignore();
			cout<<" Please Enter Your Deparment: ";
			getline(cin,department);
		
			cout<<"\n WELCOME STUDENT OF "<<department<<" DEPARTMENT"<<endl;
			Sleep(2200);
			system("cls");
			cout<<"\n WELCOME STUDENT OF "<<department<<" DEPARTMENT"<<endl;
		
			
			cout<<"\n We are offering the following degrees:";
			cout<<"\n1)BS"<<endl;
			cout<<"2)MS"<<endl;
			cout<<"3)M.Phil"<<endl;
			cout<<"\n For opening BS portal press 'BS'"<<endl;
			cout<<"\n For opening MS portal press 'MS'"<<endl;
			cout<<"\n For opening M.Phil portal press 'MP'"<<endl;
			cout<<"\n To go Back Press '1'"<<endl;
			cout<<"\n Your Choice: ";
			cin>>choice2;
		 	if(choice2=="BS"||choice2=="bs" ){
			  system("cls");
				//HERE I AM MANAGING BS CLASS 
				cout<<"\nWelcome in BS portal: "<<endl;
				cout<<"Here you can calculate: ";
				cout<<"\n1) Mid GPA"<<endl;
				cout<<"\n2) Final GPA"<<endl;
				cout<<"\n3) Final CGPA"<<endl;
				cout<<"\n1) For calculating Mid GPA enter 'M':"<<endl;
				cout<<"\n2) For calculating Final GPA enter 'F':"<<endl;
				cout<<"\n3) For calculating CGPA enter 'C':"<<endl;
				cout<<"\n4) To go Back Press '1'"<<endl;
				cout<<"Your Choice: ";
				cin>>choice3;
				
					if(choice3=='M'||choice3=='m'||choice3=='F'||choice3=='f'){
						system("cls");
	    
						cout<<"WELCOME TO GPA CALCULATOR"<<endl;
						   cout<<" Please Enter the Number of Subjects of last Semester:";
						   cin>>Var1;
						   cin.ignore();
						    for(int i=0;i<Var1;i++){
						
						      cout<<"Enter the Name of Subject  "<<i+1<< ": ";
						      getline(cin,name);
						
						      cout<<"Enter the Total Marks of ~ "<<name<<": ";
						      cin>>tmarks;
						      cout<<"Enter the Obtaine Marks of ~ "<<name<<": ";
						      cin>>omarks;
						      cout<<"Enter the Credit hours of ~ "<<name<<": ";
						      cin>>credit_hours;
	                          cout<<"You Record  of Subject ~ "<<name<<": ";
						    
						      percentage= (omarks/tmarks)*100;
						      cin.ignore();
						      
						        if(percentage>=90&&percentage<=100){
								  
						      		grade="A+";
						      		grade_point=4;
						      		
												  }	        
								    else if(percentage>=80&&percentage<=89){
						      		         grade="A";
						      		         float sub=percentage-80;
						      		         float multiple=sub*0.05;
											 grade_point=3.50+multiple;	
						      		
							                   }
							   else if(percentage>=70&&percentage<=79){
						      		grade="B";
						      		float sub=percentage-70;
						      	    float multiple=sub*0.05;
								    grade_point=3.00+multiple;	
						      		
							  }
							 else if(percentage>=60&&percentage<=69){
						      	grade="C";
						      	float sub=percentage-60;
						      	float multiple=sub*0.05;
								grade_point=2.50+multiple;	
						      									  }
							 else if(percentage>=50&&percentage<=59){
						      		 	grade="D";
										float sub=percentage-50;
						      		        float multiple=sub*0.05;
											grade_point=2.00+multiple;
											
										
						      		     }
							  
							  else if(percentage<50){
							  	 	grade="F";
							  	 	grade_point=0.00;
							  	 	
							  }
							  
							 else
							  cout<<"You are not Eligible to study";
							 //here else if end;
							 
								



                                  //here declare two variables grade_point_sum,C_sum
                                        
								     	    float grade_point_1=grade_point * credit_hours;  //here multiply
								     	    float sum1 = sum1+grade_point_1;     //sum of all grade_point and credit_hours
								     	    float sum2=sum2+ credit_hours;   // sum of all credit_hours require for division in gpa
									         
									         
									     	    gpa=sum1/sum2;
									    
										    

							       
							
						
							  
						      cout<<"\n\n\n";
		cout<< left<<"  "
        << setw(20)
        <<"Subject_Name"
        << left
        << setw(18)
        << "Total_Marks"
        << left
        << setw(18)
        << "Obtained_Marks"
        << left
        << setw(18)
        << "Credit_Hours"
        <<left
        <<setw(18)
        <<"Percentage"
        <<left
        <<setw(15)
        <<"Grade"
        <<left
        <<setw(0)
        <<"Grade_point"
        << endl;
        
    cout<<"\n";
    
    cout<< left<<"  "
            << setw(23)
            << name
            << left
            << setw(20)
            << tmarks
            << left
            << setw(20)
            << omarks
            << left
            << setw(15)
            << credit_hours
            <<left
            <<setw(0)
            <<percentage
            <<left
            <<setw(14)
            <<"%";
            
            cout<<left
            <<setw(17)
            <<grade
            <<left
            <<setw(0)
            <<grade_point<<endl<<"\n\n"<<endl;
            
            if(percentage<50){
							
		 	cout<<"\t YOU WILL REPEATE THIS SUBJECT:"<<name<<endl;
		 	 
							  }
            
cout<<" \7~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
				    
	}	
	   cout<<"\n\nYOUR 'GPA' IN THIS SEMENTER IS :"<<fixed<<setprecision(2)<< gpa<<endl;
	   if (gpa<1.7)
	   {
	   	   cout<<"\n 'BE ALERT!' YOU ARE DROPPED IN THIS  SEMESTER ";
       }
		                
	  else if(gpa>=1.7&&gpa<2.0)
	  {
	  	 cout<<"\n\t\t CONGRATULATIO! YOU ARE PROMOTED TO NEXT SEMESTER"<<endl;
	   	 cout<<" \n 'BE ALERT!'YOU ARE PROMOTED TO NEXT SEMESTER WITH 'PROBATION'"; 
	   }
		   
	    else 
	   {
	   	cout<<"\n\t\t CONGRATULATIO! YOU ARE PROMOTED TO NEXT SEMESTER";
	    }
      
	   cout<<"\n\nEnter '1'To go Back:";
	   cin>>no;
	   if(no==1)
	 system("cls");
	 UE_LMS obj;
	 
	 
		}
		
		
	else if(choice3=='C'||choice3=='c')
	{
		 system("cls");
		float sum_t_gpa=0;
		  cout<<"WELCOME TO CGPA CALCULATOR"<<endl;
	     cout<<"Please Enter The  'NO' Of Semester For Calculate 'CGPA : ";
	     cin>>no_of_semester;
		 	for(int i=0;i<no_of_semester;i++)
			 {
		 	cout<<"Please Enter your  'GPA' in  "<<i+1<<"  Semester : ";
		    cin>>t_gpa[i];
		    
		    sum_t_gpa=sum_t_gpa+t_gpa[i];
		    cgpa=  sum_t_gpa/no_of_semester;
		
            
	       }
	
	
	
	  
		
      	cout<<"\n Your  CGPA Of "<<no_of_semester<<"  Semester : "<<fixed<<setprecision(2)<<cgpa;
	   if(cgpa>=2.0){
	   	
	     cout<<"\n\t\t CONGRATULATIO! YOU ARE PROMOTED TO NEXT SEMESTER"<<endl<<endl;
	      Sleep(6000);
	      system("cls");
		  UE_LMS obj;
	   }
	   else{
	   	    cout<<"\n\t\t BE ALERT! YOU ARE NOT PROMOTED TO NEXT SEMESTER";
	   	    Sleep(6000);
	      system("cls");
		  UE_LMS obj;
	      }
	   
	 }

//INNER ELSE
	else
	    {
	    	system("cls");
		   UE_LMS obj;
	    
		}
           
 		
	   
}
	 
	 
	 
	
	//here BS  if conditon finish
	
	
	//HERE ENDS BS LOGIC
//________________________________________________________________________
				//here all logic of MS/MP

			  if(choice2=="MS"||choice2=="ms"||choice2=="MP"||choice2=="mp"){
			  	system("cls");
				cout<<"\nWelcome in MS/M.Phil portal: "<<endl;
				cout<<"Here you can calculate: ";
				cout<<"\n1) Mid GPA"<<endl;
				cout<<"2) Final GPA"<<endl;
				cout<<"3) Final CGPA"<<endl;
				cout<<"\n1)For calculating Mid GPA enter 'M':"<<endl;
				cout<<"2)For calculating Final GPA enter 'F':"<<endl;
				cout<<"3)For calculating CGPA enter 'C':"<<endl;
				cout<<"Your Choice: ";
				cin>>choice3;
				
				// Mid logic for MS Degree
				  if(choice3=='M'||choice3=='m'||choice3=='F'||choice3=='f'){
				  	system("cls");
					cout<<"WELCOME TO GPA CALCULATOR"<<endl;
					cout<<"\n\nPlease Enter What is Your Current Semester :";
					cin>>semester;
					if(semester<=2){
					cout<<"\n\n Please Enter the Number of Subjects of last Semester :";
				    cin>>Var1;
					cin.ignore();
					 for(int i=0;i<Var1;i++){
						
						      cout<<"Enter the Name of Subject  "<<i+1<< ": ";
						      getline(cin,name);
						
						      cout<<"Enter the Total Marks of ~ "<<name<<": ";
						      cin>>tmarks;
						      cout<<"Enter the Obtaine Marks of ~ "<<name<<": ";
						      cin>>omarks;
						      cout<<"Enter the Credit hours of ~ "<<name<<": ";
						      cin>>credit_hours;
	                          cout<<"You Record  of Subject ~ "<<name<<": ";
						    
						      percentage= (omarks/tmarks)*100;
						      cin.ignore();
						      
						        if(percentage>=90&&percentage<=100){
								  
						      		grade="A+";
						      		grade_point=4;
						      		
												  }	        
								else if(percentage>=80&&percentage<=89){
						      		         grade="A";
						      		         float sub=percentage-80;
						      		         float multiple=sub*0.05;
											 grade_point=3.50+multiple;	
						      		
							                   }
							   else if(percentage>=70&&percentage<=79){
						      		grade="B";
						      		float sub=percentage-70;
						      	    float multiple=sub*0.05;
								    grade_point=3.00+multiple;	
						      		
							  }
							 else if(percentage>=60&&percentage<=69){
						      	grade="C";
						      	float sub=percentage-60;
						      	float multiple=sub*0.05;
								grade_point=2.50+multiple;	
						      									  }
							 else if(percentage>=50&&percentage<=59){
						      		 	grade="D";
										float sub=percentage-50;
						      		        float multiple=sub*0.05;
											grade_point=2.00+multiple;
											
										
						      		     }
							  
							  else if(percentage<50){
							  	 	grade="F";
							  	 	grade_point=0.00;
							  	 	
							  }
								  
							else
							cout<<"You are not Eligible to study";
							 //here  if end;
							 
								



                                  //here declare two variables grade_point_sum,C_sum
                                        
								     	    float grade_point_1=grade_point * credit_hours;  //here multiply
								     	    float sum1 = sum1+grade_point_1;     //sum of all grade_point and credit_hours
								     	    float sum2=sum2+ credit_hours;   // sum of all credit_hours require for division in gpa
									         
									         
									     	    gpa=sum1/sum2;
									    
										  						  
						      cout<<"\n\n\n";
		cout<< left<<"  "
        << setw(20)
        <<"Subject_Name"
        << left
        << setw(18)
        << "Total_Marks"
        << left
        << setw(18)
        << "Obtained_Marks"
        << left
        << setw(18)
        << "Credit_Hours"
        <<left
        <<setw(18)
        <<"Percentage"
        <<left
        <<setw(15)
        <<"Grade"
        <<left
        <<setw(0)
        <<"Grade_point"
        << endl;
        
    cout<<"\n";
    
    cout<< left<<"  "
            << setw(23)
            << name
            << left
            << setw(20)
            << tmarks
            << left
            << setw(20)
            << omarks
            << left
            << setw(15)
            << credit_hours
            <<left
            <<setw(0)
            <<percentage
            <<left
            <<setw(14)
            <<"%";
            
            cout<<left
            <<setw(17)
            <<grade
            <<left
            <<setw(0)
            <<grade_point<<endl<<"\n\n"<<endl;
            
            if(percentage<50){
							
							  	 	cout<<"\t YOU WILL REPEATE THIS SUBJECT:"<<name<<endl;
							  }
            
cout<<" \7~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
				    
	}
	   cout<<"\n\nYOUR 'GPA' IN THIS SEMENTER IS :"<<fixed<<setprecision(2)<< gpa<<endl;
	   if (gpa<1.7){
	   	   cout<<"\n 'BE ALERT!' YOU ARE DROPPED IN THIS  SEMESTER ";
          exit(0);
		               }
		else{
		   	cout<<endl;
		                }
		                
	  if(gpa>=1.7&&gpa<2.0){
	  	 cout<<"\n\t\t CONGRATULATIO! YOU ARE PROMOTED TO NEXT SEMESTER"<<endl;
	   	 cout<<" \n 'BE ALERT!'YOU ARE PROMOTED TO NEXT SEMESTER WITH 'PROBATION'";
	   }
		   
	
	   else {
	   	cout<<"\n\t\t CONGRATULATIO! YOU ARE PROMOTED TO NEXT SEMESTER";
	   }
	   
	   
	   
	   
	   
	  	  	   
	   
}

else if(semester>2)
{
	
	cout<<"Please Enter The Total Marks Of Research In Semester "<<semester<<":";
    cin>>R_marks;
	cout<<"Please Enter Obtained  Marks Of Research In Semester  "<<semester<<":";
	 cin>>omarks;
	 cout<<"Please Enter Credit Hours Of Research In Semester "<<semester<<":";
	 cin>>credit_hours;
	cout<<"You Result of this Semester ~ "<<semester<<": "<<endl;
    percentage= (omarks/R_marks)*100;

						      
						        if(percentage>=90&&percentage<=100){
								  
						      		grade="A+";
						      		grade_point=4;
						      		
												  }	        
								    else if(percentage>=80&&percentage<=89){
						      		         grade="A";
						      		         float sub=percentage-80;
						      		         float multiple=sub*0.05;
											 grade_point=3.50+multiple;	
						      		
							                   }
							   else if(percentage>=70&&percentage<=79){
						      		grade="B";
						      		float sub=percentage-70;
						      	    float multiple=sub*0.05;
								    grade_point=3.00+multiple;	
						      		
							  }
							 else if(percentage>=60&&percentage<=69){
						      	grade="C";
						      	float sub=percentage-60;
						      	float multiple=sub*0.05;
								grade_point=2.50+multiple;	
						      									  }
							 else if(percentage>=50&&percentage<=59){
						      		 	grade="D";
										float sub=percentage-50;
						      		        float multiple=sub*0.05;
											grade_point=2.00+multiple;
											
										
						      		     }
							  
							  else if(percentage<50){
							  	 	grade="F";
							  	 	grade_point=0.00;
							  	 	
							  }
							  
			
							 
								



                                  //here declare two variables grade_point_sum,C_sum
                                        
								     	    float grade_point_1=grade_point * credit_hours;  //here multiply
								     	    float sum1 = sum1+grade_point_1;     //sum of all grade_point and credit_hours
								     	    float sum2=sum2+ credit_hours;   // sum of all credit_hours require for division in gpa
									         
									         
									     	    gpa=sum1/sum2;
									    
										    

							       
							
						
							  
						      cout<<"\n\n\n";
		cout<< left<<"  "
        << setw(26)
        <<"Research_Total_Marks "
        << left
        << setw(28)
        << "Research_Obtained_Marks "
        << left
        << setw(27)
        << "Reserch_Credit_Hours"
        <<left
        <<setw(18)
        <<"Percentage"
        <<left
        <<setw(16)
        <<"Grade"
        <<left
        <<setw(0)
        <<"Grade_point"
        << endl;
        
    cout<<"\n\t ";
    
    cout<< left<<"  "
            << setw(25)
            << R_marks
            << left
            << setw(26)
            << omarks
            << left
            << setw(25)
            <<credit_hours
            <<left
            <<setw(0)
            <<percentage
            <<left
            <<setw(14)
            <<"%";
            
            cout<<left
            <<setw(17)
            <<grade
            <<left
            <<setw(0)
            <<grade_point<<endl<<"\n\n"<<endl;
            
            if(percentage<50){
							
							  	 	cout<<"\t YOU WILL REPEATE THIS SUBJECT:"<<name<<endl;
							  }
            
cout<<" \7~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
				    
		
	   cout<<"\n\nYOUR 'GPA' IN THIS SEMENTER IS :"<<fixed<<setprecision(2)<< gpa<<endl;
	   if (gpa<1.7){
	   	   cout<<"\n 'BE ALERT!' YOU ARE DROPPED IN THIS  SEMESTER ";
          exit(0);
		               }
		else{
		   	cout<<endl;
		                }
		                
	  if(gpa>=1.7&&gpa<2.0){
	  	 cout<<"\n\t\t CONGRATULATIO! YOU ARE PROMOTED TO NEXT SEMESTER"<<endl;
	   	 cout<<" \n 'BE ALERT!'YOU ARE PROMOTED TO NEXT SEMESTER WITH 'PROBATION'";
	   }
		   
		    
	   else {
	   	cout<<"\n\n\t\t CONGRATULATIO! YOU ARE PROMOTED TO NEXT SEMESTER";
	   }

	   
	   	
	
}



}

} // HERE MS if CONDITION END 

//else{
	
//}
// HERE MS else CONDITION END 

  if(choice3=='C'||choice3=='c'){
     	system("cls");
     	int no_of_semester;
		float sum_t_gpa=0;
		  cout<<"WELCOME TO CGPA CALCULATOR"<<endl;
	     cout<<"Please Enter The  'NO' Of Semester For Calculate 'CGPA : ";
	     cin>>no_of_semester;
		 	for(int i=0;i<no_of_semester;i++){
		 	cout<<"Please Enter your  'GPA' in  "<<i+1<<"  Semester : ";
		    cin>>t_gpa[i];
		    
		    sum_t_gpa=sum_t_gpa+t_gpa[i];
		    cgpa=  sum_t_gpa/no_of_semester;
		
            
	}
	   cout<<"\n Your  CGPA Of "<<no_of_semester<<"  Semester : "<<fixed<<setprecision(2)<<cgpa;
	   if(cgpa>=2.0){
	     cout<<"\n\t\t CONGRATULATIO! YOU ARE PROMOTED TO NEXT SEMESTER";
	   }
	   else{
	   	    cout<<"\n\t\t BE ALERT! YOU ARE NOT PROMOTED TO NEXT SEMESTER";
	   }
     	
	 }
							  
    cout<<"\n\n Enter '1' To Go back :";
    cin>>no;
    if(no==1){
    	system("cls");
    	UE_LMS obj;
	}
			
			//___//here all ends logic of MS/MP___________________________________________________________________
			
			
		
		
}


	
