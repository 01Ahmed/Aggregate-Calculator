#include<iostream>
#include<windows.h>
void line();
using namespace std;
int main()
{
    char option= 0; 
	do{
	char chose_degree, choice;                     
	float percentage,percent,per,aggregate,nts=0,total=0,totl=0,tot=0,matric=0,inter=0; 
	cout<<"\n*****WELCOME TO MY CALCULATOR*****\n";
	line();
	char p[]="ARH";
	char x[5];
	cout<<endl;
	cout<<"Please Enter PassCode= ";
	cin>>x;
	system("cls");
	system("color A");
		cout<<"Please select the degree program in which you are interested to take admission"<<endl;
		line();
		cout<<"\nEnter S or s for SIT Department"<<endl;
		cout<<"Enter M or m for Mechanical Department"<<endl;
		cout<<"Enter E or e for Electrical Department"<<endl;
		cout<<"Enter C or c for Civil Department"<<endl;
		cout<<"Enter T or t for Science Department"<<endl;
		line();
		cout<<"\nSelect any option from the above menu : ";
		cin>>chose_degree;
		system("cls");
		switch(chose_degree)
		{
			{
			
		 case 'S':                                 
		 case 's':
		 system("color E");
		cout<<"\nEnter Option A or a for Computer Science"<<endl;
		cout<<"Enter Option B or b for Software Engineering"<<endl;
		cout<<"Enter Option C or c for Telecom Engineering"<<endl;
		line();
		cout<<"\nSelect any option from the above menu : ";
		cin>>chose_degree;
		system("cls");
		         {
			       cout<<"\nEnter the Marks of your NTS test marks : ";
			       cin>>nts;
			       cout<<"\nEnter the total Marks of your NTS test marks : ";
			       cin>>total;
			       percentage = (nts/total*100);
			       cout<<"\nYour nts % is = "<<percentage<<endl;
			       line();
			       cout<<"Enter the Marks of your matric marks : ";
			       cin>>matric;
			       cout<<"\nEnter the total Marks of Matric : ";
			       cin>>totl;
			        percent = (matric/totl*100);
			       cout<<"\nYour Matric % is = "<<percent<<endl;
			       line();
			       cout<<"Enter the Marks of your intermediate marks : ";
			       cin>>inter;
			        cout<<"\nEnter the total Marks of Inter : ";
			       cin>>tot;
			        per = (inter/tot*100);
			       cout<<"\nYour inter % is = "<<per<<endl;
				   line(); 
			      aggregate=((matric/totl*100)*0.20)+((inter/tot*100)*0.30)+((nts/total*100)*0.50);
			      cout<<"\n\nYour aggregate is = "<<aggregate<<endl;
			       cout<<"\nBy using 20% - matric 30% - inter and 50% - nts MarksS"<<endl;
			    	line();
			       if(aggregate >= 50)
			       {
				    cout<<"\nCongratulations! You are eligible for the This degree"<<endl;
			       }
		           else
			       {
				    cout<<"\nSorry! You could not qualify for the This degree"<<endl;
			       }
			   }
		

			       break;
		         
		     }
		 case 'M':
		 case 'm':
		 	 {
		          system("color 6");
			       cout<<"\nEnter the Marks of your NTS test marks : ";
			       cin>>nts;
			       cout<<"\nEnter the total Marks of your NTS test marks : ";
			       cin>>total;
			       percentage = (nts/total*100);
			       cout<<"\nYour nts % is = "<<percentage<<endl;
			       line();
			       cout<<"Enter the Marks of your matric marks : ";
			       cin>>matric;
			       cout<<"\nEnter the total Marks of Matric : ";
			       cin>>totl;
			        percent = (matric/totl*100);
			       cout<<"\nYour Matric % is = "<<percent<<endl;
			        line();
			       cout<<"Enter the Marks of your intermediate marks : ";
			       cin>>inter;
			        cout<<"\nEnter the total Marks of Inter : ";
			       cin>>tot;
			        per = (inter/tot*100);
			       cout<<"\nYour inter% is = "<<per<<endl;
			        line();			 			       
			      aggregate=((matric/totl*100)*0.20)+((inter/tot*100)*0.30)+((nts/total*100)*0.50);
			      cout<<"\n\nYour aggregate is="<<aggregate<<endl;
			      cout<<"\nBy using 20%-matric 30%-inter and 50%-nts MarksS"<<endl;
			      line();
			       if(aggregate >= 60)
			       {
				    cout<<"\nCongratulations! You are eligible Mechanical Engineering degree program"<<endl;
			       }
		           else
			       {
				    cout<<"\nSorry! You could not qualify for the Mechanical Engineering degree program"<<endl;
			       }
			       break;
		         }		         
		 case 'E':
		 case 'e':
		 	 {
		          system("color 7");
			       cout<<"\nEnter the Marks of your NTS test marks : ";
			       cin>>nts;
			       cout<<"\nEnter the total Marks of your NTS test marks : ";
			       cin>>total;
			       percentage = (nts/total*100);
			       cout<<"\nYour nts % is = "<<percentage<<endl;
			       line();
			       cout<<"Enter the Marks of your matric marks : ";
			       cin>>matric;
			       cout<<"\nEnter the total Marks of Matric : ";
			       cin>>totl;
			        percent = (matric/totl*100);
			       cout<<"\nYour Matric % is = "<<percent<<endl;
			        line();
			       cout<<"Enter the Marks of your intermediate marks : ";
			       cin>>inter;
			        cout<<"\nEnter the total Marks of Inter : ";
			       cin>>tot;
			        per = (inter/tot*100);
			       cout<<"\nYour inter% is = "<<per<<endl;
			        line();			       			       
			      aggregate=((matric/totl*100)*0.20)+((inter/tot*100)*0.30)+((nts/total*100)*0.50);
			      cout<<"\n\nYour aggregate is="<<aggregate<<endl;
			      cout<<"\nBy using 20%-matric 30%-inter and 50%-nts MarksS"<<endl;
			      line();
			       if(aggregate >= 60)
			       {
				    cout<<"\nCongratulations! You are eligible for the Electrical Engineering degree program"<<endl;
			       }
		           else
			       {
				    cout<<"\nSorry! You could not qualify for the Electrical Engineering degree program"<<endl;
			       }
			       break;
		         }
		         
		 case 'C':
		 case 'c':
		 	 {
		          system("color A");
			       cout<<"\nEnter the Marks of your NTS test marks : ";
			       cin>>nts;
			       cout<<"\nEnter the total Marks of your NTS test marks : ";
			       cin>>total;
			       percentage = (nts/total*100);
			       cout<<"\nYour nts % is = "<<percentage<<endl;
			       line();
			       cout<<"Enter the Marks of your matric marks : ";
			       cin>>matric;
			       cout<<"\nEnter the total Marks of Matric : ";
			       cin>>totl;
			        percent = (matric/totl*100);
			       cout<<"\nYour Matric % is = "<<percent<<endl;
			        line();
			       cout<<"Enter the Marks of your intermediate marks : ";
			       cin>>inter;
			        cout<<"\nEnter the total Marks of Inter : ";
			       cin>>tot;
			        per = (inter/tot*100);
			       cout<<"\nYour inter% is = "<<per<<endl;
			        line();			       			       
			      aggregate=((matric/totl*100)*0.20)+((inter/tot*100)*0.30)+((nts/total*100)*0.50);
			      cout<<"\n\nYour aggregate is="<<aggregate<<endl;
			      cout<<"\nBy using 20%-matric 30%-inter and 50%-nts MarksS"<<endl;
			      line();
			       if(aggregate >= 60)
			       {
				    cout<<"\nCongratulations! You are eligible for the Civil Engineering degree program"<<endl;
			       }
		           else
			       {
				    cout<<"\nSorry! You could not qualify for the Civil Engineering degree program"<<endl;
			       }
			       break;
		         }
		 case 'T':                                 
		 case 't':
		   {
	     system("color C");
		 cout<<"Enter Option P or p for BS-Phy"<<endl;
	    cout<<"Enter Option M or m for BS-Maths"<<endl;
	    cout<<"Enter Option H or h for BS-Chm"<<endl;
	    cout<<"\nSelect any option from the above menu : ";
		cin>>chose_degree;
	    system("cls");
		         {		        		         
			       cout<<"\nEnter the Marks of your NTS test marks : ";
			       cin>>nts;
			       cout<<"\nEnter the total Marks of your NTS test marks : ";
			       cin>>total;
			       percentage = (nts/total*100);
			       cout<<"\nYour nts % is = "<<percentage<<endl;
			       line();
			       cout<<"Enter the Marks of your matric marks : ";
			       cin>>matric;
			       cout<<"\nEnter the total Marks of Matric : ";
			       cin>>totl;
			        percent = (matric/totl*100);
			       cout<<"\nYour Matric % is = "<<percent<<endl;
			       line();
			       cout<<"Enter the Marks of your intermediate marks : ";
			       cin>>inter;
			        cout<<"\nEnter the total Marks of Inter : ";
			       cin>>tot;
			        per = (inter/tot*100);
			       cout<<"\nYour inter % is = "<<per<<endl;
			       line();			       			       
			      aggregate=((matric/totl*100)*0.20)+((inter/tot*100)*0.30)+((nts/total*100)*0.50);
			      cout<<"\n\nYour aggregate is="<<aggregate<<endl;
			       cout<<"\nBy using 20%-matric 30%-inter and 50%-nts MarksS"<<endl;
			       line();
			       if(aggregate >= 45)
			       {
				    cout<<"\nCongratulations! You are eligible for the this degree"<<endl;
			       }
		           else
			       {
				    cout<<"\nSorry! You could not qualify for the this degree"<<endl;
			       }
			       break;
		         }
		     }
		         default:                                       
			     {
				   cout<<"\nInvalid input! Enter the correct option again"<<endl;
				   cout<<"Press any key to continue . . .";                           
				 }
	    }
	    line();
	    cout<<"\nDo you want to check your eligibility in some other degree program y/n? : ";
		cin>>option;
	    system("cls");

        if (choice=='N'||choice=='n')
	   { 
		   break;
		 }
	  }while (option=='Y'||option=='y');

return 0;
}
void line()
{
	cout<<"\n--------------------------------------------------------------------------------";
}

