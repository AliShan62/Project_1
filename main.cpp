#include"UE_LMS.h"
#include"Staff.h"
#include <iomanip>

#include<iostream>
#include<conio.h>
#include<windows.h>

using namespace std;
int a=0;
struct Register{
	
	string email,name,passward;
	
}R[5000];



void account(){
	system("cls");
	int ascii=219;
	int choice;
	char d;
	char ch=ascii;
	cout<<"\n\n\t\t";
	for(int i=0;i<35;i++)
		cout<<ch;
		
 cout<<" CREATE YOUR ACCOUNT ";
	
	for(int i=0;i<35;i++)
		cout<<ch;	
	cout<<"\n\n";
	cout<<"\n\n\t\t"<<ch<<""<<ch<<" ENTER USER NAME : ";cin.ignore();
	getline(cin,R[a].name);
	cout<<"\n\n\n\t\t"<<ch<<""<<ch<<" ENTER USER EMAIL OR CONTACT : ";
	cin>>R[a].email;
	cout<<"\n\n\n\t\t"<<ch<<""<<ch<<" ENTER USER PASSWARD : ";
	
	
	do{
		d=getch();
		if(isdigit(d) ||isalpha(d)||ispunct(d)){
			R[a].passward=R[a].passward +d;
			cout<<"*";
		}
	}
	while(isdigit(d) ||isalpha(d)||ispunct(d));
	
	a++;
	
	cout<<"\n\n\n\n\n\t\t\t\t"<<ch<<""<<ch<<" CONGRATULATION! ACCOUNT CREATED SUCCESSFULLY  "<<ch<<""<<ch<<" ";
	
}

void login(){
		system("cls");
	int ascii=219;
	int choice;
	char F;
	
	string s_name,t_passward;
	char ch=ascii;
	cout<<"\n\n\t\t";
	for(int i=0;i<35;i++)
		cout<<ch;
		
 cout<<" LOGIN YOUR ACCOUNT ";
	
	for(int i=0;i<35;i++)
		cout<<ch;	
	cout<<"\n\n";
	
	if(a==0)
	   {
		cout<<"\n\n\t\t"<<ch<<""<<ch<<"  NO ANY RECORED FOUND " <<ch<<""<<ch<<"";
	    }
   else{
   	    
		cout<<"\n\n\t\t"<<ch<<""<<ch<<" ENTER USER NAME : " ;cin.ignore();
	   getline(cin,s_name);
	   
	   cout<<"\n\n\n\t\t"<<ch<<""<<ch<<" ENTER USER PASSWARD : ";
	   
	
	do{
		F=getch();
		if(isdigit(F) ||isalpha(F)||ispunct(F)){
			t_passward=t_passward +F;
			cout<<"*";
		}
	}
	while(isdigit(F) ||isalpha(F)||ispunct(F));
	for(int k=0; k<a; k++)
	{ 
	
		if(s_name==R[k].name && t_passward==R[k].passward)
		{
			
cout<<"\n\n\t\t************************************************************************"<<endl;		

cout<<"\n\n\n\n\n\t\t\t\t"<<ch<<""<<ch<<" CONGRATULATION! ACCOUNT LOGIN SUCCESSFULLY  "<<ch<<""<<ch<<" ";	
	    Sleep(2000);
		 system("cls");	 
			 UE_LMS obj;
		}
	    
   else{
		
		cout<<"\n\n\n\n\t\t"<<ch<<""<<ch<<" INCORRECT USER NAME AND PASSWARD "<<ch<<""<<ch<<"";
	}
		
   }
   
	
	}
	
	
	
}
void forgot_passward(){
		system("cls");
	int ascii=219;
	int choice;
	char B;
	int found;
	string s_name,t_passward;
	char ch=ascii;
	cout<<"\n\n\t\t";
	for(int i=0;i<35;i++)
		cout<<ch;
		
 cout<<" RECOVER YOUR PASSWARD  ";
	
	for(int i=0;i<35;i++)
		cout<<ch;	
	cout<<"\n\n";
	
	if(a==0)
	   {
		cout<<"\n\n\t\t"<<ch<<""<<ch<<"  NO ANY RECORED FOUND " <<ch<<""<<ch<<"";
	    }
   else{
   	     
		cout<<"\n\n\t\t"<<ch<<""<<ch<<" ENTER USER NAME : " ;cin.ignore();
	   getline(cin,s_name);
	   
	for(int k=0; k<a; k++)
	{ 
cout<<"\n\n\t\t************************************************************************"<<endl;		
	
		if(s_name==R[k].name)
		{
			
    cout<<"\n\n\n\n\t\t"<<ch<<""<<ch<<" USER NAME : "<<R[k].name;
	
	cout<<"\n\n\n\t\t"<<ch<<""<<ch<<" USER EMAIL OR CONTACT : "<<R[k].email;
	
	cout<<"\n\n\n\t\t"<<ch<<""<<ch<<" USER PASSWARD : "<<R[k].passward;
				
	cout<<"\n\n\n\n\n\t\t\t\t"<<ch<<""<<ch<<" SUCCESSFULLY RECOVERED PASSWARD "<<ch<<""<<ch<<" " ;			
				
		}
		else
		{
		
		cout<<"\n\n\n\n\t\t"<<ch<<""<<ch<<" INCORRECT USER NAME "<<ch<<""<<ch<<" ";
	     }

	    
		
   }
	
   		
	
	}
	
	
	
	
}



int main(){

	R:
		system("cls");
	int ascii=219;
	int choice;
	char ch=ascii;
	cout<<"\n\n\t\t";
	for(int i=0;i<35;i++)
		cout<<ch;
		
 cout<<" 'MOST WELCOME' TO REGISTRATION  FORM ";
	
	for(int i=0;i<35;i++)
		cout<<ch;	
	cout<<"\n\n\n\n";
	
	cout<<"\n\t\t"<<ch<<""<<ch<<" 1:   REGISTER ACCOUNT"<<endl;
	cout<<"\n\t\t"<<ch<<""<<ch<<" 2:   LOGIN ACCOUNT"<<endl;
	cout<<"\n\t\t"<<ch<<""<<ch<<" 3:   FORGOT PASSWARD"<<endl;
	cout<<"\n\t\t"<<ch<<""<<ch<<" 4:   TO EXIT PROGRAME";
	
	cout<<"\n\n\n\t\t";
	for(int i=0;i<30;i++)
		cout<<ch;
		
	cout<<"\n\n\n\t\t"<<ch<<""<<ch<<" ENTER YOUR CHOICE :";
	cin>>choice;
	switch(choice){
		case 1:
			account();
			break;
		case 2:
			 login();
			break;
		case 3:
			forgot_passward();
			break;
	
		case 4:
				system("cls");
			cout<<"\n\n*********** END YOUR PROGRAME *******"<<endl;
			cout<<"\n\n******* THANKS FOR USING PROGRAME *******"<<endl;
			exit(0);
			break;
		default:
		
	cout<<"\n\n\n\t\t"<<ch<<""<<ch<<" PLEASE ENTER THE CORRECT NUMBER "<<ch<<""<<ch<<"";
		
	}
  getch();
	goto R;
	
}

