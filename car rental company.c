#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <conio.h>
struct cars
{
	int carid;
	char car_name[100];
	float price_mil;
}c[50];
void Print_Detail();
void Admin_Portal();
int Discount(int total);
int main()
{
	char name[50],address[100],condition,type,color[10],feedback[75],clr;
	float addsum=0,damage=0,total,grand;
	int a,n,uid, id,cars[10], driv, opt,m,i, loc, dname, driver_pay,driver,days,rdays,penalty,choc2;
	long long int cnic;
	do{
		system("cls");
	printf("\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n");
	printf("\t\t\xdb\xdb WELCOME TO FAST CAR RENTAL HOUSE \xdb\xdb\n");
	printf("\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n");
	for(i=0;i<1;i++){
	
    printf("\nEnter your 13 digit CNIC number: ");
	fflush(stdin);
	scanf("%lld",&cnic);
	if(cnic==0000)//Admin portal
	Admin_Portal();
	
	else // Customer Portal
	{
		if(cnic>999999999999 && cnic<10000000000000){
			printf("\nEnter Client's Name: ");
	        fflush(stdin);
	        gets(name);
	        Print_Detail(); //On line 477
		}
		else{
			printf("Please enter valid 13 digit number only\n\n");
			i--;
		}
    }
    }
	for (i=0;i<1;i++)
	{
		printf("\n\n");
		printf("Enter the car ID to choose: ");
		fflush(stdin);
		scanf("%d",&uid);
		if(uid>100 && uid<131)
		{
			id=uid;
		}
		else
		{
			printf("Please choose from the available cars!\n\n");
			i--;
		}
	}
	
	printf("\n\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n\n");
	
	for(i=0;i<1;i++)
	{
	printf("Choose the color of the car\nPress W for white \nPress B for Black \nPress G for Grey\nPress M for Maroon\n\n");
	printf("Enter the colour code: ");
	fflush(stdin);
	scanf(" %c",&clr);
	if(clr=='W')
	{
		printf("\nYou choose white color");
	}
	else if(clr=='B')
	{
		printf("\nYou choose Black color");
	}
	else if(clr=='G')
	{
		printf("\nYou choose Grey color");
	}
	else if(clr=='M')
	{
		printf("\nYou choose Maroon color");
	}
	else
	{
		printf("\nPlease choose from the available colors");
		i--;
	}
    
    
   	printf("\n\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n\n");
    
    
	char drivers[10][30]={"Driver:111 (Rating 8.6)","Driver:222 (Rating 8.8)","Driver:333 (Rating 9.2)","Driver:444 (Rating 9.0)","Driver:555 (Rating 9.6)","Driver:666 (Rating 9.15)\n"};
	printf("\nDo you want a driver for car ? [1 for yes/ 2 for no] ");
	fflush(stdin);
	scanf("%d",&driv);
	if(driv==1)
	{
		printf("\nSelect driver from the list");
		for(i=0;i<6;i++)
		{
			printf("\n%s",drivers[i]);
		}
		printf("\nDriver pay = Rs.1500 per day:\n\n");
		for(i=0;i<1;i++)
		{
			printf("Enter the ID of Driver: ");
			fflush(stdin);
			scanf("%d",&driver);
			if(driver==111 || driver==222 || driver==333 || driver==444 || driver==555 || driver==666)
			{
				dname=driver;
			}
			else
			{
				printf("Invalid choice, please select from above options\n\n");
				i--;
			}
		}
			printf("\nYou choose Driver: %d",dname);
	}
    }
   
   
   //***************************************************************************************************************************//
    printf("\n\nEnter the total days of trip:\n(Maximum 20)\n");
    fflush(stdin);
    scanf("%d",&days);
    
    
    printf("\n\n\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n\n");
	printf("\n\nWill you pick it from the garage or shall we drop it to your home [1 for garage/ 2 for home] ");
	fflush(stdin);
	scanf("%d",&opt);
	if(opt==1)
	{
		printf("\nIf you want to know the location of garages enter 1 else 2: ");
		scanf("%d",&loc);
		if (loc==1)
		{	
			printf("\nOur Garages Locations are as follow\nNazimabad no 4 behind Imtiaz Super Market\n");
			printf("Soldier Bazar no 2 near Taj Gasoline pump\n");
			printf("Malir Halt 11-A near Shamsi Masjid\n");
			printf("Shah Latif Town near Fast Nu.\n");
		}
	}
	else if(opt=2)
	{
		printf("Enter your address\n");
		fflush(stdin);
		gets(address);
	}
	printf("\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n");
	printf("\tCar Rented!\n\tHave a good day.");
	printf("\nPress any key for bill\n");
	scanf(" %c");
	system("cls");
	printf("\n\tRETURNING CAR DETAILS\n\n");
	printf("\n\n\t\xdb\xdb GENERATING BILL \xdb\xdb\n");
	//for(i=0;i<1;i++){
	printf("\nEnter the days in which you returned the car: ");
	fflush(stdin);
	scanf("%d",&rdays);
	if(rdays<0 || rdays>20){
		printf("\nYou returned the car in %d days: ",rdays);
	}
	else{
		printf("please enter the days from 1-20");
		i--;
	}
   // }
    
	if(rdays==days)
	{
		printf("Great! You returned the car on communicated date\n\n");
		penalty=0;
	}
	else if(rdays>days)
	{
		penalty=rdays-days;
		printf("You didn't returned the car on communicated date\nRs 2000/- will be charged as penalty per extra day\nPenalty will be charged for %d days\n\n",penalty);
	}
	else if(rdays<days)
	{
		penalty=days-rdays;
		printf("You returned the car %d days before the communicated date\n\n",penalty);
		penalty=0;
	}
	printf("Enter the average miles of a cars that are driven: ");
	scanf("%d",&m);
	n=101;
	for(i=0;i<30;i++){
		if(id==n)
		{
			addsum = (c[i].price_mil*m);
		}
		n++;
	}	
    
	//**************************************************************************************************************************//
	printf("\n\n\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n\n");


	printf("\nTell about the condition of car \n1.Good(G)\n2.Bad(B)\n");
	scanf(" %c",&condition);
	switch(condition)
	{
		case 'G':
			printf("No extra charges will be added on total bill\n");
			break;
		case 'B':
			printf("What type of damage occurs to the car:\nPress F for Tyre Flat(F)\nPress E for Engine Exhaust(E)\nPress G for Gear Box/Transmission Problem(G)\nPress O for Other problems(O)\n");
			scanf(" %c",&type);
			if(type=='F')
			{
				printf("7000 PKR will be surcharged as penalty.\n");
				damage=damage+7000;
			}
			else if(type=='E')
			{
				printf("50000 PKR will be surcharged as penalty.\n");
				damage=damage+50000;
			}
			else if(type=='G')
			{
				printf("15000 PKR will be surcharged as penalty.\n");
				damage=damage+15000;
			}
			else if(type=='O')
			{
				printf("35000 PKR will be surcharged as penalty.\n");
				damage=damage+35000;
			}
			break;			
		default:
			printf("Invalid.\n");
	}



	printf("\nYour Data is saved!");
	printf("\nPress any key for bill reciept\n");
	scanf(" %c");
	system("cls");
	
	if(driv==1)
	{
		driver_pay=1500*rdays;
	}
	else
	{
		driver_pay=0;
	}
	total= addsum + (driver_pay) + damage + (penalty*2000);
	
	printf("\n\n\n\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb FAST CAR RENTAL HOUSE \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
	
	printf("\n\n---------------------------------------------------------\n");
	printf("\n\t\t\xdb\xdb BILL RECIEPT \xdb\xdb\n");
	printf("\n\n\t\xdb\xdb CLIENT DETAILS \xdb\xdb\n\n");
	printf("Name : %s \n",name);
	printf("CNIC : %lld\n\n\n",cnic);
	printf("\n\t\xdb\xdb CAR DETAILS \xdb\xdb\n\n");
	    
		n=101;
		for(i=0;i<30;i++)
		{
			if(id==n)
			{
			    printf("ID of car: %d\nName of car: %s\nRent per mile: %.2f\nTotal miles: %d",id,c[i].car_name,c[i].price_mil,m);
		    }
		n++;    
	    }
		
		//***********************************************************************************************************************//
		
	if(clr=='W')
	{
		printf("\nColor: White");
	}
	else if(clr=='B')
	{
		printf("\nColor: Black");
	}
	else if(clr=='G')
	{
		printf("\nColor: Grey");
	}
	else if(clr=='M')
	{
		printf("\nColor: Maroon");
	}
		printf("\nTotal days of trip: %d",days);
		printf("\nCar returned in %d days",rdays);
		if(rdays>days)
		{
		printf("\nRs 750 will be charged as penalty for %d days",penalty); 
		}
		if(driv==0)
		{
		printf("\nDriver: no\n\n");
		}
		else
		printf("\nDriver: yes\n");
		if(opt==1)
		{
			printf("Car pickup location: Garage");
		}
		else
		{
			printf("Car drop location : ");
			puts(address);
		}
	system("CLS");
	printf("\n\n\n\n\t\xdb\xdb\xdb AMOUNT DETAILS \xdb\xdb\xdb\n");

	printf("\nCar damage penalty: %.2f\nExtra days penalty: %d\nCar rent: %.2f\nDriver Rent: %d \n\n",damage,penalty*750,addsum,driver_pay);
	printf("Total bill generated: %.2f\n\n",total);	
	grand= Discount(total);
	printf("\nTotal Amount after discount is: %.2f ",grand);
	printf("\n\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n");
	printf("\n\tThanks for using FAST car rental House\n\tPlease come again");
		
	FILE *fptr=(fopen("Client_Data.txt","a+"));
	fprintf(fptr,"\nName:%s Bill-Amount:%.1f Profit:%.1f\n\n",name,grand,grand*0.1);
	printf("Press any key to continue else press 1");
	scanf("%d",choc2);
	fclose(fptr);
}while(choc2!=1);
	}



/*****************************************Cars Details**************************************************************************/

 
void Print_Detail()
{
	int i;
	printf("Please choose a car you want to rent!\n\n");
	c[0].carid=101;
	strcpy(c[0].car_name,"Suzuki Cultus");
	c[0].price_mil=1100.76;
//	printf("\nID: %d \nName: %s \nPrice per mile: %f",c[0].carid,c[0].car_name,c[0].price_mil);
//	printf("\n----------------------------------------------\n");
	c[1].carid=102;
	strcpy(c[1].car_name,"Suzuki Alto");
	c[1].price_mil=1015.5;
//	printf("\nID: %d \nName: %s \nPrice per mile: %f",c[1].carid,c[1].car_name,c[1].price_mil);
//	printf("\n----------------------------------------------\n");
	c[2].carid=103;
	strcpy(c[2].car_name,"Suzuki Ciaz");
	c[2].price_mil=1321.45;
//	printf("\nID: %d \nName: %s \nPrice per mile: %f",c[2].carid,c[2].car_name,c[2].price_mil);
//	printf("\n----------------------------------------------\n");
	c[3].carid=104;
	strcpy(c[3].car_name,"Suzuki Swift");
	c[3].price_mil=1028.5;
//	printf("\nID: %d \nName: %s \nPrice per mile: %f",c[3].carid,c[3].car_name,c[3].price_mil);
//	printf("\n----------------------------------------------\n");
	c[4].carid=105;
	strcpy(c[4].car_name,"Honda Fit    ");
	c[4].price_mil=1270;
//	printf("\nID: %d \nName: %s \nPrice per mile: %f",c[4].carid,c[4].car_name,c[4].price_mil);
//	printf("\n----------------------------------------------\n");
	c[5].carid=106;
	strcpy(c[5].car_name,"Honda Grace");
	c[5].price_mil=1300;
//	printf("\nID: %d \nName: %s \nPrice per mile: %f",c[5].carid,c[5].car_name,c[5].price_mil);
//	printf("\n----------------------------------------------\n");
	c[6].carid=107;
	strcpy(c[6].car_name,"Honda Accord");
	c[6].price_mil=1380;
//	printf("\nID: %d \nName: %s \nPrice per mile: %f",c[6].carid,c[6].car_name,c[6].price_mil);
//	printf("\n----------------------------------------------\n");
	c[7].carid=108;
	strcpy(c[7].car_name,"Honda CR-V");
	c[7].price_mil=1800;
//	printf("\nID: %d \nName: %s \nPrice per mile: %f",c[7].carid,c[7].car_name,c[7].price_mil);
//	printf("\n----------------------------------------------\n");
	c[8].carid=109;
	strcpy(c[8].car_name,"Honda BR-V");
	c[8].price_mil=2000;
//	printf("\nID: %d \nName: %s \nPrice per mile: %f",c[8].carid,c[8].car_name,c[8].price_mil);
//	printf("\n----------------------------------------------\n");
	c[9].carid=110;
	strcpy(c[9].car_name,"Honda Sedan");
	c[9].price_mil=2200;
//	printf("\nID: %d \nName: %s \nPrice per mile: %f",c[9].carid,c[9].car_name,c[9].price_mil);
//	printf("\n----------------------------------------------\n");
	c[10].carid=111;
	strcpy(c[10].car_name,"Honda Insight");
	c[10].price_mil=1930;
//	printf("\nID: %d \nName: %s \nPrice per mile: %f",c[10].carid,c[10].car_name,c[10].price_mil);
//	printf("\n----------------------------------------------\n");
	c[11].carid=112;
	strcpy(c[11].car_name,"Audi A3     ");
	c[11].price_mil=4500;
//	printf("\nID: %d \nName: %s \nPrice per mile: %f",c[11].carid,c[11].car_name,c[11].price_mil);
//	printf("\n----------------------------------------------\n");
	c[12].carid=113;
	strcpy(c[12].car_name,"Audi A4     ");
	c[12].price_mil=4800;
//	printf("\nID: %d \nName: %s \nPrice per mile: %f",c[12].carid,c[12].car_name,c[12].price_mil);
//	printf("\n----------------------------------------------\n");
	c[13].carid=114;
	strcpy(c[13].car_name,"Audi Q3     ");
	c[13].price_mil=4870;
//	printf("\nID: %d \nName: %s \nPrice per mile: %f",c[13].carid,c[13].car_name,c[13].price_mil);
//	printf("\n----------------------------------------------\n");
	c[14].carid=115;
	strcpy(c[14].car_name,"Audi Q4     ");
	c[14].price_mil=5000;
//	printf("\nID: %d \nName: %s \nPrice per mile: %f",c[14].carid,c[14].car_name,c[14].price_mil);
//	printf("\n----------------------------------------------\n");
	c[15].carid=116;
	strcpy(c[15].car_name,"Mercedes S");
	c[15].price_mil=5150;
//	printf("\nID: %d \nName: %s \nPrice per mile: %f",c[15].carid,c[15].car_name,c[15].price_mil);
//	printf("\n----------------------------------------------\n");
	c[16].carid=117;
	strcpy(c[16].car_name,"Mercedes A");
	c[16].price_mil=5500;
//	printf("\nID: %d \nName: %s \nPrice per mile: %f",c[16].carid,c[16].car_name,c[16].price_mil);
//	printf("\n----------------------------------------------\n");
	c[17].carid=118;
	strcpy(c[17].car_name,"KIA Sportage");
	c[17].price_mil=5300;
//	printf("\nID: %d \nName: %s \nPrice per mile: %f",c[17].carid,c[17].car_name,c[17].price_mil);
//	printf("\n----------------------------------------------\n");
	c[18].carid=119;
	strcpy(c[18].car_name,"KIA Picanto");
	c[18].price_mil=3900;
//	printf("\nID: %d \nName: %s \nPrice per mile: %f",c[18].carid,c[18].car_name,c[18].price_mil);
//	printf("\n----------------------------------------------\n");
	c[19].carid=120;
	strcpy(c[19].car_name,"KIA Carnival");
	c[19].price_mil=4850;
//	printf("\nID: %d \nName: %s \nPrice per mile: %f",c[19].carid,c[19].car_name,c[19].price_mil);
//	printf("\n----------------------------------------------\n");
	c[20].carid=121;
	strcpy(c[20].car_name,"Honda Vezel");
	c[20].price_mil=4300;
//	printf("\nID: %d \nName: %s \nPrice per mile: %f",c[20].carid,c[20].car_name,c[20].price_mil);
//	printf("\n----------------------------------------------\n");
	c[21].carid=122;
	strcpy(c[21].car_name,"Honda BR-V");
	c[21].price_mil=5100;
//	printf("\nID: %d \nName: %s \nPrice per mile: %f",c[21].carid,c[21].car_name,c[21].price_mil);
//	printf("\n----------------------------------------------\n");
	c[22].carid=123;
	strcpy(c[22].car_name,"Honda Juke");
	c[22].price_mil=4990;
//	printf("\nID: %d \nName: %s \nPrice per mile: %f",c[22].carid,c[22].car_name,c[22].price_mil);
//	printf("\n----------------------------------------------\n");
	c[23].carid=124;
	strcpy(c[23].car_name,"Honda Civic");
	c[23].price_mil=3560;
//	printf("\nID: %d \nName: %s \nPrice per mile: %f",c[23].carid,c[23].car_name,c[23].price_mil);
//	printf("\n----------------------------------------------\n");
	c[24].carid=125;
	strcpy(c[24].car_name,"BMW iX     ");
	c[24].price_mil=7000;
//	printf("\nID: %d \nName: %s \nPrice per mile: %f",c[24].carid,c[24].car_name,c[24].price_mil);
//	printf("\n----------------------------------------------\n");
	c[25].carid=126;
	strcpy(c[25].car_name,"BMW Coupe");
	c[25].price_mil=6800;
//	printf("\nID: %d \nName: %s \nPrice per mile: %f",c[25].carid,c[25].car_name,c[25].price_mil);
//	printf("\n----------------------------------------------\n");
	c[26].carid=127;
	strcpy(c[26].car_name,"Toyota Yasris");
	c[26].price_mil=3250;
//	printf("\nID: %d \nName: %s \nPrice per mile: %f",c[26].carid,c[26].car_name,c[26].price_mil);
//	printf("\n----------------------------------------------\n");
	c[27].carid=128;
	strcpy(c[27].car_name,"Toyota Highland");
	c[27].price_mil=3990;
//	printf("\nID: %d \nName: %s \nPrice per mile: %f",c[27].carid,c[27].car_name,c[27].price_mil);
//	printf("\n----------------------------------------------\n");
	c[28].carid=129;
	strcpy(c[28].car_name,"Toyota Vitz");
	c[28].price_mil=3150;
//	printf("\nID: %d \nName: %s \nPrice per mile: %f",c[28].carid,c[28].car_name,c[28].price_mil);
//	printf("\n----------------------------------------------\n");
	c[29].carid=130;
	strcpy(c[29].car_name,"Toyota Corolla");
	c[29].price_mil=3240;
//	printf("\nID: %d \nName: %s \nPrice per mile: %f",c[29].carid,c[29].car_name,c[29].price_mil);
//	printf("\n----------------------------------------------\n");
	printf("\n\n\t\t~~LIST OF CARS~~\n");
	for(i=0;i<64;i++)
	{
		printf("#");
	}
	printf("\n");
	printf("#   Car ID\t\tCar Name\t\t Rent per mile #\n");
	for(i=0;i<64;i++)
	{
		printf("#");
	}
	printf("\n");
	for(i=0;i<30;i++)
	{
		printf("#   %d \t\t%s\t\t  %.2f      #\n",c[i].carid,c[i].car_name,c[i].price_mil);
	}
	for(i=0;i<64;i++)
	{
		printf("#");
	}
	printf("\n");
}


/******************************************Discount************************************************************************/

int Discount(int total) 
{
	int grand;
	if(total>=1000 && total<=1499)
	{
		printf("Congratulations! You have won a discount of 10 percent\n");
		grand = total*0.9;	
	}
	else if(total>=10000 && total<=14999)
	{
		printf("Congratulations! You have won a discount of 20 percent\n");
		grand = total*0.8;
	}
	else if(total>=15000 && total<=29999)
	{
		printf("Congratulations! You have won a discount of 30 percent\n");
		grand = total*0.7;
	}
	else if(total>=30000 && total<=44999)
	{
		printf("Congratulations! You have won a discount of 40 percent\n");
		grand = total*0.6;
	}
	else if(total>=45000)
	{
		printf("Congratulations! You have won a discount of 50 percent\n");
		grand = total*0.5;
	}
	else
	{
		printf("Sorry! You are not qualified for discount\n");
		grand = total;
	}
	return(grand);
}


/************************************************Admin portal**********************************************************************/

void Admin_Portal()
{
	FILE *ptr;
	char line[250];
	int i;
	printf("For client Data enter 1:\n");
	scanf("%d",&i);
	if(i==1)
	{
	ptr=fopen("Client_Data.txt","a+");
	while (fgets(line, sizeof line, ptr) != NULL)
	{
		printf("%s\n",line);
	}
	}
	fclose(ptr);
	exit(0);
}
