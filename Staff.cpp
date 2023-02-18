
#include"Staff.h"
#include"Attendance.h"
#include"cba.h"
#include<iostream>
#include"UE_LMS.h"
#include"Management.h"

using namespace std;


		Staff::Staff(){
			
			string no;
			cout<<"\n\n\t\t****************( welcome in staff portal )****************** "<<endl;
			cout<<"\n \t\t\tPlease Enter the Your are  The 'Teacher' OR 'Management Person'";
			cout<<"\n\nIf Your are 'Teacher' Then Press 'T' :";
			cout<<"\n\nIf Your are 'Mangement Person' Then Press 'M' :";
			cout<<"\n\nTo go Back Enter '1' :";
			cout<<"\n\nYour Choice :";	
			cin>>a;
			 if(a=='T'||a=='t'){
			 	
				system("cls");
			cout<<"'Most Welcome' To The 'Tutors' Portal ";
			
			
			cout<<"\n\n \t\t\tPlease Enter the Your are  The 'Morning_Teacher' OR 'Evening_Teacher'";
			cout<<"\n\nIf Your are 'Morning_Teacher' Then Press 'M' :";
			cout<<"\n\nIf Your are 'Evening_Teacher' Then Press 'E' :";
			cout<<"\n\nTo go Back Enter '1' :";
			cout<<"\n\nYour Choice :";
			cin>>a;
			
			// here i am going to  use nested if else
			if(a=='M'||a=='m'){
				system("cls");
			cout<<"'Most Welcome' To The 'Morning_Teaching_Staff' Portal ";
			cout<<"\n\n \t\t\tPlease Enter the Your are 'Parmanent Teacher' OR 'Visiting Teacher'";
			cout<<"\n\nIf Your are 'Parmanent_Teacher' Then Press 'P' :";
			cout<<"\n\nIf Your are 'Visiting_Teacher' Then Press 'V' :";
			cout<<"\n\nTo go Back Enter '1' :";
			cout<<"\n\nYour Choice :";
			cin>>a;
		    // here i am going to  use nested if else
			if(a=='P'||a=='p'){
				system("cls");
				 cout<<"-----------'Most Welcome To the 'Permanent Teaching' Portal --------------"<<endl;
				 cout<<"\n\n'Now',Please Enter Your Name :";cin.ignore();
			     getline(cin,T_name);
			     
				 cout<<"\n Enter Your Email OR Contact no. :";
				 cin>>email;cin.ignore();
				 cout<<" \nEnter Your Department Name :";
				 getline(cin,department);
				 
				 cout<<" Most WelCome To '"<<department<<"' Department"<<endl;
				
		Sleep(2500);
 			system("cls");   
				 
				 
		int no1 ;
	   int s_id;
	modify arr[1000];
	 	
	    int no;
	    	int choice;

		      HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
            SetConsoleTextAttribute(h,30);
		M:	{
			  	
	       cout<<"\n **********MOST WELCOME TO STUDENT MANAGEMENT PORTAL**********"<<endl;
	       cout<<"\n**********Mr/Ms "<<T_name<<" Here You Can Perfome These Functions********** "<<endl;
                                 
		         cout<<"\n1:To Take Attedance Of Students"<<endl;
				 cout<<"\n2:Insert Record Of Students"<<endl;
				 cout<<"\n3:Update Record Of Students"<<endl;
				 cout<<"\n4:Delete Record Of Students"<<endl;
				 cout<<"\n5:Search Record Of Students"<<endl;
				 cout<<"\n6:Show Record Of Students"<<endl;
				 cout<<"\n7:To Exit Program"<<endl;
				 cout<<"\nPlease Enter Your Choice :";
				 cin>>choice;
	        }     
	        system("cls");
				 	 	if(choice==1){
				 	 		Attendance obj;
				 	 		obj.getdata();
						  }
				 	 	else if(choice==2){
				 	 		system("cls");
				 	 		 system("color F4") ;
				 	 		  
				 	    cout<<"\n\nHow To much Students Record You Want To Store 1,2,3..... :";
						cin>>no1;
						//modify arr[no1];
						for(int i=0;i<no1;i++){
				 	 	 	
	         cout<<"\n\n\t\t***********Insert Record Of Student '"<<i+1<<"'************"<<endl;
  	
             cout<<"\n\n\t\t*********************************************************"<<endl;
                          	       	
	                                arr[i].Insert();
	                                
	                                
	                               
									     
						   }
						   							                   
						 cout<<"To Go Back Press 1:";
						 
	                                cin>>no;
	                          
	                                if(no==1){
	                                	system("cls");
	                                	goto M;
	                                	
									}
				 	 			 	
				 	 	
						  }
				 	 	else if(choice==3){
				 	 		
				 	 		system("cls");
				 	    cout<<"\n\n~~~~~~~~~~~~~~~Welocome To  The Update Portal~~~~~~~~~~~~~~~"<<endl;
				 	    cout<<"\nPlease Enter The Student Id :";
  	                    cin>>s_id;
  	                for(int i=0; i<no1; i++){
  	                if(s_id == arr[i].id){
  			    cout<<"\n\n\t\t~~~~~~~~~~'Conguratulation' Your Record Found Successfully~~~~~~~~"<<endl;
  			    cout<<"\n\n\t\t~~~~~~~~~~~~~~~~~'Now,' You Can Update Student Record ~~~~~~~~~~~~~"<<endl;
  			            arr[i].Insert();
				 	 	   	         }
				 	 	   	         
				 	 	   	         
				 	 	   	    cout<<"To Go Back Press 1:";
						 
	                                cin>>no;
	                          
	                                if(no==1){
	                                	system("cls");
	                                	goto M;
	                                	
									}
				 	 			 	
				 	
				 	 	else if(! s_id == arr[i].id) {
				 	 		cout<<"~~~~~~~~~~~~~~~~~No Student Record Found~~~~~~~~~~~~~~~~~"<<endl;
						  }
	
				 }
			
			
		
			}
			

				 	 	else if(choice==5){
				 	 	system("cls");
  	        cout<<"\n\n************ Search Student Record ************"<<endl;
  	                cout<<"\nPlease Enter The Student Id :";
  	                             cin>>s_id;
  	                        for(int i=0; i<no1; i++){
  	                           if(s_id == arr[i].id){
  			                    cout<<"~~~~~~~~~~'Conguratulation' Your Record Found Successfully~~~~~~~~";
  			
  			                 
  	                            cout<<"\n\n The Name Of Student :"<<arr[i].name<<endl;
                               	cout<<" The ID Of Student :"<<arr[i].id<<endl;
  	                            cout<<" The Name Of Subject :"<<arr[i].sname<<endl;
  	                            cout<<" The Total_Marks Of Subject :"<<arr[i].tmarks<<endl;
  	                            cout<<" The Obtained_Marks Of Student :"<<arr[i].marks<<endl;
  	                            cout<<" The Percentage Of Marks :"<<arr[i].percentage<<endl;
  	                            cout<<" The grade  Obtained:"<<arr[i].grade<<endl;
  	                            
                                cout<<"\n*********************************************************"<<endl;
  	                            cout<<"\n\n~~~~~~~~~~~~~~~~Display Record Successfully~~~~~~~~~~~~~~~~"<<endl;
  	                                              }
  	                                              
		                        else if(! s_id == arr[i].id){
								
		                        	cout<<"~~~~~~~~~~No Student Id Found~~~~~~~~~~"<<endl;
								    }
  		
	
						  }
						  
						  
								cout<<"To Go Back Press 1:";
						 
	                                cin>>no;
	                          
	                                if(no==1){
	                                	system("cls");
	                                	goto M;
	                                	
									}
						  
						  
						  
						  
						  
					}
				 	 	else if(choice==6){
				 	 
			cout<<"*************(Most Welcome To Student Record Portal)**************"<<endl;
 	                cout<<"\nPlease Enter The Student Id :";
  	                               cin>>s_id;
  	 
				 	 	 for(int i=0;i<no1;i++){
				 	 	 	
	 			 	 	 	if(!s_id==arr[i].id){
	 			cout<<"\n\n\n*************(No Student Record found !!!!! )**************\n\n\n"<<endl;	 	 	 		
					                break;
							}
							else if(s_id==arr[i].id){
				cout<<"\n\n\n*************(Record of Student)**************\n\n\n"<<endl;
	 			 	 	 		arr[i].Show();
		
								
							}
  	

						   }
						   
						   cout<<"To Go Back Press 1:";
						 
	                                cin>>no;
	                          
	                                if(no==1){
	                                system("cls");
	                                	goto M;
	                                	
									}
				 	 	
						   
						  }
				 	 	else if(choice==7){
				 	 		int no;
				 	 		cout<<" To go back Enter 1:"<<endl;
				 	 		cout<<" To end Programe press Any Character:";
				 	 		cin>>no;
				 	 		if(no==1){
				 	 		system("cls");	
				 	 		 UE_LMS obj;
							  }
					else{
							  
			cout<<"\n\n*************End Your Programe*************"<<endl;
							  	exit(0);
                     	}
				 	 		
				 	 		
						  }
						  
						  
					else if(choice==4) {
				
				cout<<"\n\n\t\t\t\t********'Most Welcome'To The Delete Portal*********"<<endl;
cout<<"\n\n\t\t\t\3\3**************************\3\3\3\3\3\3\3\3*****************************************\3\3"<<endl;
						cout<<"Please Enter Your Student Id:";
						cin>>s_id;
						for(int i=0;i<no1;i++){
							
							if(s_id==arr[i].id){
							 for(int a=i;a<no1;a++){
							 	 arr[a].id=arr[a+1].id;
							 	 arr[a].name=arr[a+1].name;
							 	 arr[a].sname=arr[a+1].sname;
							 	 arr[a].tmarks=arr[a+1].tmarks;
							 	 arr[a].marks=arr[a+1].marks;
							 	 arr[a].percentage=arr[a+1].percentage;
							 	 arr[a].grade=arr[a+1].grade;
							
							 }
							 
						
							 
			cout<<"\n\n***********Student Record Delete Successfully***********"<<endl;
			Sleep(2500);
			                       system("cls");
							}
						
					
						}

						 }
						 
                     	else{
				 				cout<<"	****Invalid Entery****"<<endl;
						 }	
						
						 //getch();
						
						 goto M;
						 
		
			
	
			
	 
				 
				 
				 
				 
				 
				 
				 
				 
				 
				 
				 
				 
					 
				  
			} 
			
			//hallo
			
			else if(a=='V'||a=='v'){
				
				system("cls");
				 cout<<"-----------'Most Welcome To the 'Visiting  Teaching' Portal --------------"<<endl;
			
				 cout<<"\n\n'Now',Please Enter Your Name :";cin.ignore();
			     getline(cin,T_name);
			     cout<<"\n Enter Your Email OR Contact no. :";
				 cin>>email; cin.ignore();
				 cout<<" \nEnter Your Department Name :";
				 getline(cin,department);
			
				cout<<" Most WelCome To '"<<department<<"' Department"<<endl;
				
				
		Sleep(2500);
 			system("cls");
			
				 			     
				 	 
				 
		int no1 ;
	   int s_id;
	modify arr[1000];
	 	
	    int no;
	    	int choice;

		      HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
            SetConsoleTextAttribute(h,30);
		A:	{
					    	
	       cout<<"\n **********MOST WELCOME TO STUDENT MANAGEMENT PORTAL**********"<<endl;
	       
		   cout<<"\n**********Mr/Ms "<<T_name<<" Here You Can Perfome These Functions **********"<<endl;
                 cout<<"\n1:To Take Attedance Of Students"<<endl;
				 cout<<"\n2:Insert Record Of Students"<<endl;
				 cout<<"\n3:Update Record Of Students"<<endl;
				 cout<<"\n4:Delete Record Of Students"<<endl;
				 cout<<"\n5:Search Record Of Students"<<endl;
				 cout<<"\n6:Show Record Of Students"<<endl;
				 cout<<"\n7:To Exit Program"<<endl;
				 cout<<"\nPlease Enter Your Choice :";
				 cin>>choice;
	        }     
	        system("cls");
				 	 	if(choice==1){
				 	 		
				 	 		Attendance obj;
				 	 		obj.getdata();
						  }
				 	 	else if(choice==2){
				 	 		system("cls");
				 	 		 system("color F4") ;
				 	 		  
				 	    cout<<"\n\nHow To much Students Record You Want To Store 1,2,3..... :";
						cin>>no1;
						//modify arr[no1];
						for(int i=0;i<no1;i++){
				 	 	 	
	         cout<<"\n\n\t\t***********Insert Record Of Student '"<<i+1<<"'************"<<endl;
  	
             cout<<"\n\n\t\t*********************************************************"<<endl;
                          	       	
	                                arr[i].Insert();
	                                
	                                
	                               
									     
						   }
						   							                   
						 cout<<"To Go Back Press 1:";
						 
	                                cin>>no;
	                          
	                                if(no==1){
	                                	system("cls");
	                                	goto A;
	                                	
									}
				 	 			 	
				 	 	
						  }
				 	 	else if(choice==3){
				 	 		
				 	 		system("cls");
				 	    cout<<"\n\n~~~~~~~~~~~~~~~Welocome To  The Update Portal~~~~~~~~~~~~~~~"<<endl;
				 	    cout<<"\nPlease Enter The Student Id :";
  	                    cin>>s_id;
  	                for(int i=0; i<no1; i++){
  	                if(s_id == arr[i].id){
  			    cout<<"\n\n\t\t~~~~~~~~~~'Conguratulation' Your Record Found Successfully~~~~~~~~"<<endl;
  			    cout<<"\n\n\t\t~~~~~~~~~~~~~~~~~'Now,' You Can Update Student Record ~~~~~~~~~~~~~"<<endl;
  			            arr[i].Insert();
				 	 	   	         }
				 	 	   	         
				 	 	   	         
				 	 	   	    cout<<"To Go Back Press 1:";
						 
	                                cin>>no;
	                          
	                                if(no==1){
	                                	system("cls");
	                                	goto A;
	                                	
									}
				 	 			 	
				 	
				 	 	else if(! s_id == arr[i].id) {
				 	 		cout<<"~~~~~~~~~~~~~~~~~No Student Record Found~~~~~~~~~~~~~~~~~"<<endl;
						  }
	
				 }
			
			
		
			}
			

				 	 	else if(choice==5){
				 	 	system("cls");
  	        cout<<"\n\n************ Search Student Record ************"<<endl;
  	                cout<<"\nPlease Enter The Student Id :";
  	                             cin>>s_id;
  	                        for(int i=0; i<no1; i++){
  	                           if(s_id == arr[i].id){
  			                    cout<<"~~~~~~~~~~'Conguratulation' Your Record Found Successfully~~~~~~~~";
  			
  			                 
  	                            cout<<"\n\n The Name Of Student :"<<arr[i].name<<endl;
                               	cout<<" The ID Of Student :"<<arr[i].id<<endl;
  	                            cout<<" The Name Of Subject :"<<arr[i].sname<<endl;
  	                            cout<<" The Total_Marks Of Subject :"<<arr[i].tmarks<<endl;
  	                            cout<<" The Obtained_Marks Of Student :"<<arr[i].marks<<endl;
  	                            cout<<" The Percentage Of Marks :"<<arr[i].percentage<<endl;
  	                            cout<<" The grade  Obtained:"<<arr[i].grade<<endl;
  	                            
                                cout<<"\n*********************************************************"<<endl;
  	                            cout<<"\n\n~~~~~~~~~~~~~~~~Display Record Successfully~~~~~~~~~~~~~~~~"<<endl;
  	                                              }
  	                                              
		                        else if(! s_id == arr[i].id){
								
		                        	cout<<"~~~~~~~~~~No Student Id Found~~~~~~~~~~"<<endl;
								    }
  		
	
						  }
						  
						  
								cout<<"To Go Back Press 1:";
						 
	                                cin>>no;
	                          
	                                if(no==1){
	                                	system("cls");
	                                	goto A;
	                                	
									}
						  
						  
						  
						  
						  
					}
				 	 	else if(choice==6){
				 	 
			cout<<"*************(Most Welcome To Student Record Portal)**************"<<endl;
 	                cout<<"\nPlease Enter The Student Id :";
  	                               cin>>s_id;
  	 
				 	 	 for(int i=0;i<no1;i++){
				 	 	 	
	 			 	 	 	if(!s_id==arr[i].id){
	 			cout<<"\n\n\n*************(No Student Record found !!!!! )**************\n\n\n"<<endl;	 	 	 		
					                break;
							}
							else if(s_id==arr[i].id){
				cout<<"\n\n\n*************(Record of Student)**************\n\n\n"<<endl;
	 			 	 	 		arr[i].Show();
		
								
							}
  	

						   }
						   
						   cout<<"To Go Back Press 1:";
						 
	                                cin>>no;
	                          
	                                if(no==1){
	                                system("cls");
	                                	goto A;
	                                	
									}
				 	 	
						   
						  }
				 	 	else if(choice==7){
				 	int no;
				 	 		cout<<" To go back Enter 1:"<<endl;
				 	 		cout<<" To end Programe press Any Character:";
				 	 		cin>>no;
				 	 		if(no==1){
				 	 		system("cls");	
				 	 		 UE_LMS obj;
							  }
					else{
							  
			cout<<"\n\n*************End Your Programe*************"<<endl;
							  	exit(0);
                     	}
				 	 	
				
				
				
				
				
				 	 				 	 		
				 	 		
				 	 	
						  }
						  
						  
					else if(choice==4) {
				
				cout<<"\n\n\t\t\t\t********'Most Welcome'To The Delete Portal*********"<<endl;
cout<<"\n\n\t\t\t\3\3**************************\3\3\3\3\3\3\3\3*****************************************\3\3"<<endl;
						cout<<"Please Enter Your Student Id:";
						cin>>s_id;
						for(int i=0;i<no1;i++){
							
							if(s_id==arr[i].id){
							 for(int a=i;a<no1;a++){
							 	 arr[a].id=arr[a+1].id;
							 	 arr[a].name=arr[a+1].name;
							 	 arr[a].sname=arr[a+1].sname;
							 	 arr[a].tmarks=arr[a+1].tmarks;
							 	 arr[a].marks=arr[a+1].marks;
							 	 arr[a].percentage=arr[a+1].percentage;
							 	 arr[a].grade=arr[a+1].grade;
							
							 }
							 
						
							 
			cout<<"\n\n***********Student Record Delete Successfully***********"<<endl;
			Sleep(2500);
			                       system("cls");
							}
						
					
						}

						 }
						 
                     	else{
				 				cout<<"	****Invalid Entery****"<<endl;
						 }	
						
						 //getch();
						
						 goto A;
						 
		
			
	
			
				
			
				
				
				
				
		
	}
	else{
		system("cls");
		UE_LMS obj;
	}
	//here again  nested if else ends
	
	
	
}
			else if(a=='E'||a=='e'){
				system("cls");
				cout<<"'Most Welcome' To The 'Evening_Teaching_Staff' Portal ";
				
			cout<<"\n\n \t\t\tPlease Enter the Your are 'Parmanent Teacher' OR 'Visiting Teacher'";
			cout<<"\n\nIf Your are 'Parmanent_Teacher' Then Press 'P' :";
			cout<<"\n\nIf Your are 'Visiting_Teacher' Then Press 'V' :";
			cout<<"\n\nTo go Back Press 1";
			cout<<"\n\nYour Choice :";
			cin>>a;
		    // here i am going to  use nested if else
			if(a=='P'||a=='p'){
				system("cls");
				 cout<<"-----------'Most Welcome To the 'Permanent Teaching' Portal --------------"<<endl;
				 cout<<"\n\n'Now',Please Enter Your Name :";cin.ignore();
			     getline(cin,T_name);
			     
				 cout<<"\n Enter Your Email OR Contact no. :";
				 cin>>email;cin.ignore();
				 cout<<" \nEnter Your Department Name :";
				 getline(cin,department);
				 cout<<" Most WelCome To '"<<department<<"' Department"<<endl;
				 
				 
		Sleep(2500);
 			system("cls");
				
 	 	 
				 
		int no1 ;
	   int s_id;
	modify arr[1000];
	 	
	    int no;
	    	int choice;

		      HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
            SetConsoleTextAttribute(h,30);
		E:	{
					    	
	       cout<<"\n **********MOST WELCOME TO STUDENT MANAGEMENT PORTAL**********"<<endl;
cout<<"\n ********** 'Most Welcome' Mr/Ms "<<T_name<<" Here You Can Perfome These Functions**********"<<endl;
				       
		         cout<<"\n1:To Take Attedance Of Students"<<endl;
				 cout<<"\n2:Insert Record Of Students"<<endl;
				 cout<<"\n3:Update Record Of Students"<<endl;
				 cout<<"\n4:Delete Record Of Students"<<endl;
				 cout<<"\n5:Search Record Of Students"<<endl;
				 cout<<"\n6:Show Record Of Students"<<endl;
				 cout<<"\n7:To Exit Program"<<endl;
				 cout<<"\nPlease Enter Your Choice :";
				 cin>>choice;
	        }     
	        system("cls");
				 	 	if(choice==1){
				 	 		
				 	 		Attendance obj;
				 	 		obj.getdata();
						  }
				 	 	else if(choice==2){
				 	 		system("cls");
				 	 		 system("color F4") ;
				 	 		  
				 	    cout<<"\n\nHow To much Students Record You Want To Store 1,2,3..... :";
						cin>>no1;
						//modify arr[no1];
						for(int i=0;i<no1;i++){
				 	 	 	
	         cout<<"\n\n\t\t***********Insert Record Of Student '"<<i+1<<"'************"<<endl;
  	
             cout<<"\n\n\t\t*********************************************************"<<endl;
                          	       	
	                                arr[i].Insert();
	                                
	                                
	                               
									     
						   }
						   							                   
						 cout<<"To Go Back Press 1:";
						 
	                                cin>>no;
	                          
	                                if(no==1){
	                                	system("cls");
	                                	goto E;
	                                	
									}
				 	 			 	
				 	 	
						  }
				 	 	else if(choice==3){
				 	 		
				 	 		system("cls");
				 	    cout<<"\n\n~~~~~~~~~~~~~~~Welocome To  The Update Portal~~~~~~~~~~~~~~~"<<endl;
				 	    cout<<"\nPlease Enter The Student Id :";
  	                    cin>>s_id;
  	                for(int i=0; i<no1; i++){
  	                if(s_id == arr[i].id){
  			    cout<<"\n\n\t\t~~~~~~~~~~'Conguratulation' Your Record Found Successfully~~~~~~~~"<<endl;
  			    cout<<"\n\n\t\t~~~~~~~~~~~~~~~~~'Now,' You Can Update Student Record ~~~~~~~~~~~~~"<<endl;
  			            arr[i].Insert();
				 	 	   	         }
				 	 	   	         
				 	 	   	         
				 	 	   	    cout<<"To Go Back Press 1:";
						 
	                                cin>>no;
	                          
	                                if(no==1){
	                                	system("cls");
	                                	goto E;
	                                	
									}
				 	 			 	
				 	
				 	 	else if(! s_id == arr[i].id) {
				 	 		cout<<"~~~~~~~~~~~~~~~~~No Student Record Found~~~~~~~~~~~~~~~~~"<<endl;
						  }
	
				 }
			
			
		
			}
			

				 	 	else if(choice==5){
				 	 	system("cls");
  	        cout<<"\n\n************ Search Student Record ************"<<endl;
  	                cout<<"\nPlease Enter The Student Id :";
  	                             cin>>s_id;
  	                        for(int i=0; i<no1; i++){
  	                           if(s_id == arr[i].id){
  			                    cout<<"~~~~~~~~~~'Conguratulation' Your Record Found Successfully~~~~~~~~";
  			
  			                 
  	                            cout<<"\n\n The Name Of Student :"<<arr[i].name<<endl;
                               	cout<<" The ID Of Student :"<<arr[i].id<<endl;
  	                            cout<<" The Name Of Subject :"<<arr[i].sname<<endl;
  	                            cout<<" The Total_Marks Of Subject :"<<arr[i].tmarks<<endl;
  	                            cout<<" The Obtained_Marks Of Student :"<<arr[i].marks<<endl;
  	                            cout<<" The Percentage Of Marks :"<<arr[i].percentage<<endl;
  	                            cout<<" The grade  Obtained:"<<arr[i].grade<<endl;
  	                            
                                cout<<"\n*********************************************************"<<endl;
  	                            cout<<"\n\n~~~~~~~~~~~~~~~~Display Record Successfully~~~~~~~~~~~~~~~~"<<endl;
  	                                              }
  	                                              
		                        else if(! s_id == arr[i].id){
								
		                        	cout<<"~~~~~~~~~~No Student Id Found~~~~~~~~~~"<<endl;
								    }
  		
	
						  }
						  
						  
								cout<<"To Go Back Press 1:";
						 
	                                cin>>no;
	                          
	                                if(no==1){
	                                	system("cls");
	                                	goto E;
	                                	
									}
						  
						  
						  
						  
						  
					}
				 	 	else if(choice==6){
				 	 
			cout<<"*************(Most Welcome To Student Record Portal)**************"<<endl;
 	                cout<<"\nPlease Enter The Student Id :";
  	                               cin>>s_id;
  	 
				 	 	 for(int i=0;i<no1;i++){
				 	 	 	
	 			 	 	 	if(!s_id==arr[i].id){
	 			cout<<"\n\n\n*************(No Student Record found !!!!! )**************\n\n\n"<<endl;	 	 	 		
					                break;
							}
							else if(s_id==arr[i].id){
				cout<<"\n\n\n*************(Record of Student)**************\n\n\n"<<endl;
	 			 	 	 		arr[i].Show();
		
								
							}
  	

						   }
						   
						   cout<<"To Go Back Press 1:";
						 
	                                cin>>no;
	                          
	                                if(no==1){
	                                system("cls");
	                                	goto E;
	                                	
									}
				 	 	
						   
						  }
				 	 	else if(choice==7){
				 	 		int no;
				 	 		cout<<" To go back Enter 1:"<<endl;
				 	 		cout<<" To end Programe press Any Character:";
				 	 		cin>>no;
				 	 		if(no==1){
				 	 		system("cls");	
				 	 		 UE_LMS obj;
							  }
					    else{
							  
			cout<<"\n\n*************End Your Programe*************"<<endl;
							  	exit(0);
                     	}
				 	 	
				 	 		
				 	 		
						  }
						  
						  
					else if(choice==4) {
				
				cout<<"\n\n\t\t\t\t********'Most Welcome'To The Delete Portal*********"<<endl;
cout<<"\n\n\t\t\t\3\3**************************\3\3\3\3\3\3\3\3*****************************************\3\3"<<endl;
						cout<<"Please Enter Your Student Id:";
						cin>>s_id;
						for(int i=0;i<no1;i++){
							
							if(s_id==arr[i].id){
							 for(int a=i;a<no1;a++){
							 	 arr[a].id=arr[a+1].id;
							 	 arr[a].name=arr[a+1].name;
							 	 arr[a].sname=arr[a+1].sname;
							 	 arr[a].tmarks=arr[a+1].tmarks;
							 	 arr[a].marks=arr[a+1].marks;
							 	 arr[a].percentage=arr[a+1].percentage;
							 	 arr[a].grade=arr[a+1].grade;
							
							 }
							 
						
							 
			cout<<"\n\n***********Student Record Delete Successfully***********"<<endl;
			Sleep(2500);
			                       system("cls");
							}
						
					
						}

						 }
						 
                     	else{
				 				cout<<"	****Invalid Entery****"<<endl;
						 }	
						
						 //getch();
						
						 goto E;
						 
		
			
	
			
				 
				  
			}
			//hallao
			else if(a=='V'||a=='v'){
				
				system("cls");
				 cout<<"-----------'Most Welcome To the 'Visiting  Teaching' Portal --------------"<<endl;
			
				 cout<<"\n\n'Now',Please Enter Your Name :";cin.ignore();
			     getline(cin,T_name);
			     cout<<"\n Enter Your Email OR Contact no. :";
				 cin>>email; cin.ignore();
				 cout<<" \nEnter Your Department Name :";
				 getline(cin,department);
			
				cout<<" Most WelCome To '"<<department<<"' Department"<<endl;
				
				
		Sleep(2500);
 			system("cls");
				
							 	 
				 
		int no1 ;
	   int s_id;
	modify arr[1000];
	 	
	    int no;
	    	int choice;

		      HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
            SetConsoleTextAttribute(h,30);
		V:	{
					    	
	       cout<<"\n **********MOST WELCOME TO STUDENT MANAGEMENT PORTAL**********"<<endl;
	       cout<<"\n********** 'Most Welcome' Mr/Ms "<<T_name<<" Here You Can Perfome These Functions **********"<<endl;
			
		         cout<<"\n1:To Take Attedance Of Students"<<endl;
				 cout<<"\n2:Insert Record Of Students"<<endl;
				 cout<<"\n3:Update Record Of Students"<<endl;
				 cout<<"\n4:Delete Record Of Students"<<endl;
				 cout<<"\n5:Search Record Of Students"<<endl;
				 cout<<"\n6:Show Record Of Students"<<endl;
				 cout<<"\n7:To Exit Program"<<endl;
				 cout<<"\nPlease Enter Your Choice :";
				 cin>>choice;
	        }     
	        system("cls");
				 	 	if(choice==1){
				 	 		
				 	 		Attendance obj;
				 	 		obj.getdata();
						  }
				 	 	else if(choice==2){
				 	 		system("cls");
				 	 		 system("color F4") ;
				 	 		  
				 	    cout<<"\n\nHow To much Students Record You Want To Store 1,2,3..... :";
						cin>>no1;
						//modify arr[no1];
						for(int i=0;i<no1;i++){
				 	 	 	
	         cout<<"\n\n\t\t***********Insert Record Of Student '"<<i+1<<"'************"<<endl;
  	
             cout<<"\n\n\t\t*********************************************************"<<endl;
                          	       	
	                                arr[i].Insert();
	                                
	                                
	                               
									     
						   }
						   							                   
						 cout<<"To Go Back Press 1:";
						 
	                                cin>>no;
	                          
	                                if(no==1){
	                                	system("cls");
	                                	goto V;
	                                	
									}
				 	 			 	
				 	 	
						  }
				 	 	else if(choice==3){
				 	 		
				 	 		system("cls");
				 	    cout<<"\n\n~~~~~~~~~~~~~~~Welocome To  The Update Portal~~~~~~~~~~~~~~~"<<endl;
				 	    cout<<"\nPlease Enter The Student Id :";
  	                    cin>>s_id;
  	                for(int i=0; i<no1; i++){
  	                if(s_id == arr[i].id){
  			    cout<<"\n\n\t\t~~~~~~~~~~'Conguratulation' Your Record Found Successfully~~~~~~~~"<<endl;
  			    cout<<"\n\n\t\t~~~~~~~~~~~~~~~~~'Now,' You Can Update Student Record ~~~~~~~~~~~~~"<<endl;
  			            arr[i].Insert();
				 	 	   	         }
				 	 	   	         
				 	 	   	         
				 	 	   	    cout<<"To Go Back Press 1:";
						 
	                                cin>>no;
	                          
	                                if(no==1){
	                                	system("cls");
	                                	goto V;
	                                	
									}
				 	 			 	
				 	
				 	 	else if(! s_id == arr[i].id) {
				 	 		cout<<"~~~~~~~~~~~~~~~~~No Student Record Found~~~~~~~~~~~~~~~~~"<<endl;
						  }
	
				 }
			
			
		
			}
			

				 	 	else if(choice==5){
				 	 	system("cls");
  	        cout<<"\n\n************ Search Student Record ************"<<endl;
  	                cout<<"\nPlease Enter The Student Id :";
  	                             cin>>s_id;
  	                        for(int i=0; i<no1; i++){
  	                           if(s_id == arr[i].id){
  			                    cout<<"~~~~~~~~~~'Conguratulation' Your Record Found Successfully~~~~~~~~";
  			
  			                 
  	                            cout<<"\n\n The Name Of Student :"<<arr[i].name<<endl;
                               	cout<<" The ID Of Student :"<<arr[i].id<<endl;
  	                            cout<<" The Name Of Subject :"<<arr[i].sname<<endl;
  	                            cout<<" The Total_Marks Of Subject :"<<arr[i].tmarks<<endl;
  	                            cout<<" The Obtained_Marks Of Student :"<<arr[i].marks<<endl;
  	                            cout<<" The Percentage Of Marks :"<<arr[i].percentage<<endl;
  	                            cout<<" The grade  Obtained:"<<arr[i].grade<<endl;
  	                            
                                cout<<"\n*********************************************************"<<endl;
  	                            cout<<"\n\n~~~~~~~~~~~~~~~~Display Record Successfully~~~~~~~~~~~~~~~~"<<endl;
  	                                              }
  	                                              
		                        else if(! s_id == arr[i].id){
								
		                        	cout<<"~~~~~~~~~~No Student Id Found~~~~~~~~~~"<<endl;
								    }
  		
	
						  }
						  
						  
								cout<<"To Go Back Press 1:";
						 
	                                cin>>no;
	                          
	                                if(no==1){
	                                	system("cls");
	                                	goto V;
	                                	
									}
						  
						  
						  
						  
						  
					}
				 	 	else if(choice==6){
				 	 
			cout<<"*************(Most Welcome To Student Record Portal)**************"<<endl;
 	                cout<<"\nPlease Enter The Student Id :";
  	                               cin>>s_id;
  	 
				 	 	 for(int i=0;i<no1;i++){
				 	 	 	
	 			 	 	 	if(!s_id==arr[i].id){
	 			cout<<"\n\n\n*************(No Student Record found !!!!! )**************\n\n\n"<<endl;	 	 	 		
					                break;
							}
							else if(s_id==arr[i].id){
				cout<<"\n\n\n*************(Record of Student)**************\n\n\n"<<endl;
	 			 	 	 		arr[i].Show();
		
								
							}
  	

						   }
						   
						   cout<<"To Go Back Press 1:";
						 
	                                cin>>no;
	                          
	                                if(no==1){
	                                system("cls");
	                                	goto V;
	                                	
									}
				 	 	
						   
						  }
				 	 	else if(choice==7){
				 	 			int no;
				 	 		cout<<" To go back Enter 1:"<<endl;
				 	 		cout<<" To end Programe press Any Character:";
				 	 		cin>>no;
				 	 		if(no==1){
				 	 		system("cls");	
				 	 		 UE_LMS obj;
							  }
					else{
							  
			cout<<"\n\n*************End Your Programe*************"<<endl;
							  	exit(0);
                     	}
				 	 	
				 	 		
				 	 		
				 	 		
						  }
						  
						  
					else if(choice==4) {
				
				cout<<"\n\n\t\t\t\t********'Most Welcome'To The Delete Portal*********"<<endl;
cout<<"\n\n\t\t\t\3\3**************************\3\3\3\3\3\3\3\3*****************************************\3\3"<<endl;
						cout<<"Please Enter Your Student Id:";
						cin>>s_id;
						for(int i=0;i<no1;i++){
							
							if(s_id==arr[i].id){
							 for(int a=i;a<no1;a++){
							 	 arr[a].id=arr[a+1].id;
							 	 arr[a].name=arr[a+1].name;
							 	 arr[a].sname=arr[a+1].sname;
							 	 arr[a].tmarks=arr[a+1].tmarks;
							 	 arr[a].marks=arr[a+1].marks;
							 	 arr[a].percentage=arr[a+1].percentage;
							 	 arr[a].grade=arr[a+1].grade;
							
							 }
							 
						
							 
			cout<<"\n\n***********Student Record Delete Successfully***********"<<endl;
			Sleep(2500);
			                       system("cls");
							}
						
					
						}

						 }
						 
                     	else{
				 				cout<<"	****Invalid Entery****"<<endl;
						 }	
						
						 //getch();
						
						 goto V;
						 
		
			
	
			
				
			
				
				
				
		
	}
	else{
		system("cls");
		UE_LMS obj;
	}
		//here again  nested if else ends	
					
	} 
	
	else{
		system("cls");
		UE_LMS obj;
	 }// here  nested if else ends 
	
	

		}
		
		//here Teacher Record Ends
		else if (a=='M'||a=='m'){
				     system("cls");
				Management obj2;
				obj2.getdata();
				
			   }
		
			else{
				system("cls");
				UE_LMS obj;
			}
     
	}	// CONSTRUCTURE OF STAFF ENDING

		
	
