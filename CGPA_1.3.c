#include<stdio.h>
#include<stdlib.h>
#include<string.h>




struct course_list {

char name[10];
double grade;
double crd;	
	
	
};



int clean();
int csc_lmt();
double grd();
double crd();
double cg();
double total_crd();

void current();
void all();
void result(struct course_list crs[10],int x);



int main() {
		
	start:
		
	int n=0;	
	
	system("cls");	
	
	
    printf("\n\t********************************"); 
    printf("\n\t*                              *");   
    printf("\n\t*        CGPA Calculator       *");  
    printf("\n\t*                              *");  
    printf("\n\t********************************");
    printf("\n\t                           v_1.3");
	
	
	

	
	printf("\n\n\n\t\t *****MENU***** \n");
	
	printf("\n\t 1. Semester CGPA ");
	printf("\n\t 2. Total CGPA ");
	printf("\n\t 3. EXIT ");
	
	printf("\n\n\n Input a number : ");
	scanf("%d",&n);
	
	switch(n) {
		
		case 1:
			
			current();
			
        goto start;
        	
			break;
			
		case 2:
			
			all();
			
	    goto start;
			
			break;
			
		case 3:
			
		system("cls");
		
		printf("\n\n\n Programe Terminated ");
		
		printf("\n\n\n\t\t\t Press [..ENTER..]");
	
		printf("\n\n\n\n");
			
		exit(0);
		
		
		default: 
		
		getchar();
		
		goto start;
		
		break;
			
	}
	

		printf("\n\n\n\n");
	
}


int clean() {
	
	while(getchar()!='\n');
	return 1;
	
}


int csc_lmt() {
	
	int csc=0;
	char c;
	
	
	while (((scanf("%d%c",&csc,&c)!=2 || c!='\n') && clean()) || csc<1 || csc>=5 ) {
		
			
		if(csc>=6) {
			
			printf("\n\n\t Excessive course number");
			printf("\n\t TRY AGAIN.....[1 to 5]");
		

		}
		
			else {
			
			printf("\n\n\t Invalid course number");
			printf("\n\t\t TRY AGAIN.....[1 to 5]");
		

		}
		
			printf("\n\n\n\t\t\t Press [..ENTER..]");
			getchar();
			
			system("cls");
		
		
		printf("\n\n\n\t\t CGPA Calculator");
		printf("\n\n\n Current Semester course : ");
		
	}
			
	return csc;
	
}


double grd(int i) {
	
	
	double grade=0;
	char c;
	
	
	while (((scanf("%lf%c",&grade,&c)!=2 || c!='\n') && clean()) || ( grade!=4 && grade!=3.7 && grade!=3.3 && grade!=3.0 && grade!=2.7 && grade!=2.3 && grade!=2.0 && grade!=1.7 && grade!=1.3 && grade!=1.0 && grade!=0 ) ) {
		
			

			printf("\n\n\t Invalid grade ");
			printf("\n\t TRY AGAIN.....[4, 3.7, 3.3, 3, 2.7, 2.3, 2, 1.7, 1.3, 1.0, 0]");
		

			printf("\n\n\n\t\t\t Press [..ENTER..]");
			getchar();
		
		
		
		 printf("\n Course[%d] grade : ",i);	
		
	}
			
	return grade;
		
	
}



double crd(int i) {
	
	
		
	double credit=0;
	char c;
	
	
	while (((scanf("%lf%c",&credit,&c)!=2 || c!='\n') && clean()) || ( credit!=1 && credit!=1.5 && credit!=2 && credit!=2.5 && credit!=3 && credit!=3.5 && credit!=4 && credit!=4.5 && credit!=5 && credit!=5.5 && credit!=6 && credit!=6.5 && credit!=7 && credit!=7.5 && credit!=8 && credit!=8.5 && credit!=9 && credit!=9.5 && credit!=10 && credit!=10.5 && credit!=11 && credit!=11.5 && credit!=12  ) ) {
		
		
			printf("\n\n\t Invalid credit ");
			printf("\n\t TRY AGAIN.....[1-12]-->(theory+lab) ");
		

			printf("\n\n\n\t\t\t Press [..ENTER..]");
			getchar();
		
		
		
		 printf("\n Course[%d] credit : ",i);	
		
	}
			
	return credit;
	
	
}


double cg() {
	
		
	double cg=0;
	char c;
	
	
	while (((scanf("%lf%c",&cg,&c)!=2 || c!='\n') && clean()) || cg<1 || cg>4 ) {
		
			

			printf("\n\n\t Invalid CGPA ");
			printf("\n\t TRY AGAIN.....[1-4]");
		

			printf("\n\n\n\t\t\t Press [..ENTER..]");
			getchar();
		
			
        	system("cls"); 
        	printf("\n\n\n\t\t CGPA Calculator");
			printf("\n\n\n Current CGPA : "); 
	
		
	}
			
	return cg;
		

	
}


double total_crd() {
	
	
			
	double crd=0;
	char c;
	
	
	while (((scanf("%lf%c",&crd,&c)!=2 || c!='\n') && clean()) || crd<1 || crd>200 ) {
		
			

			printf("\n\n\t Invalid Credit ");
			printf("\n\t TRY AGAIN.....[1-200]");
			
		
			printf("\n\n\n\t\t\t Press [..ENTER..]");
			getchar();
		
		
		    printf("\n Credit Completed : ");
	
		
	}
			
	return crd;
		

}





void current() {


int csc1=0;
	
	system("cls"); 
 
   	printf("\n\n\n\t\t CGPA Calculator");
   	
    printf("\n\n\n Current Semester course : ");
	
	
	csc1=csc_lmt();
	
	
	struct course_list crs[10];
	
	int j=1;
	double tcr=0;
	double gp[10];
	
	for(int i=1;i<=csc1;i++) {
	
	printf("\n\n -----------------------------------------------------------------------");	
   	printf("\n -----------------------------------------------------------------------");	
	printf("\n\n\t\t\t *****Course[%d]****",i);	
	
	

    printf("\n\n Course[%d] Name : ",i);
    gets(crs[i].name);
    printf("\n Course[%d] grade : ",i);
   	crs[i].grade=grd(i);
   	printf("\n Course[%d] credit : ",i);
    crs[i].crd=crd(i);
    
   	
   	gp[j]=crs[i].grade*crs[i].crd;
    tcr+=crs[i].crd;
   	
   	j++;
   	
   	
   
	}

   	double gpa=0;

	for(int k=1;k<=j;k++) { 
	
	gpa+=gp[k];
		
	}
	
	double m=gpa;
	double n=tcr;
	
	double x=m/n;
	
	result(crs,csc1);
	
	printf("\n\n\n\t\t\t\t\t    Semester CGPA = %.2lf ",x);

	printf("\n\n\n\n\t\t\t\t\t\t\t Press [..ENTER..]");
	getchar();

	
printf("\n\n\n");	

		
	
	
	
}




void all() {
		
    double crc,ccm;
	int csc2=0;
	
	system("cls"); 
	printf("\n\n\n\t\t CGPA Calculator");
	
	printf("\n\n\n Current CGPA : "); 
    crc=cg();
    printf("\n Credit Completed : ");
    ccm=total_crd();
    
    double g=crc*ccm;
    
    
    system("cls");

   	printf("\n\n\n\t\t CGPA Calculator");
   	printf("\n\n\n Current Semester course : ");
	
	csc2=csc_lmt();
	
	struct course_list crs[10];
	
	int j=1;
	double tcr=0;
	double gp[10];
	
	for(int i=1;i<=csc2;i++) {

	printf("\n\n -----------------------------------------------------------------------");	
   	printf("\n -----------------------------------------------------------------------");	
	printf("\n\n\t\t\t *****Course[%d]****",i);	
	
	

    printf("\n\n Course[%d] Name : ",i);
    gets(crs[i].name);
    printf("\n Course[%d] grade : ",i);
   	crs[i].grade=grd(i);
   	printf("\n Course[%d] credit : ",i);
    crs[i].crd=crd(i);



   	
   	gp[j]=crs[i].grade*crs[i].crd;
    tcr+=crs[i].crd;
   	
   	j++;
   	
   	
	   	
	}

   	double gpa=0;

	for(int k=1;k<=j;k++) { 
	
	gpa+=gp[k];
		
	}
	
	double m=gpa+g;
	double n=ccm+tcr;
	
	double x=m/n;
	
	result(crs,csc2);
	
	printf("\n\n\n\t\t\t\t\t   Predicted CGPA = %.2lf ",x);

	printf("\n\n\n\n\t\t\t\t\t\t\t Press [..ENTER..]");
	getchar();	
		

	
printf("\n\n\n");	


	
}


void result(struct course_list crs[10],int x) {
	
	
	char lg[5];	
	
	system("cls");
	
    printf("\n");	

	printf("\n  ______________________________________________________________________________________");		
	printf("\n\n\t\t\t\t\t CGPA Calculator ");
    printf("\n  ______________________________________________________________________________________");
		
	printf("\n\n\t Course Name \t\t  Credit \t\t Grade Point \t Letter grade ");	
	printf("\n  --------------------------------------------------------------------------------------");
	
	for(int i=1;i<=x;i++) {
		
		if(crs[i].grade==4) {
			
			strcpy(lg,"A");		
		}
		
		
		if(crs[i].grade==3.7) {
			
			strcpy(lg,"A-");		
		}
		
		
		if(crs[i].grade==3.3) {
			
			strcpy(lg,"B+");		
		}
		
		
		if(crs[i].grade==3) {
			
			strcpy(lg,"B");		
		}
		
		
		if(crs[i].grade==2.7) {
			
			strcpy(lg,"B-");		
		}
		
		
		if(crs[i].grade==2.3) {
			
			strcpy(lg,"C+");		
		}
		
		
		if(crs[i].grade==2) {
			
			strcpy(lg,"C");		
		}
		
		
		if(crs[i].grade==1.7) {
			
			strcpy(lg,"C-");		
		}
		
		
		if(crs[i].grade==1.3) {
			
			strcpy(lg,"D+");		
		}
		
		
		if(crs[i].grade==1) {
			
			strcpy(lg,"D");		
		}
		
		
		if(crs[i].grade==0) {
			
			strcpy(lg,"F");		
		}
		
	
		
		
		
    	printf("\n\t    %s \t\t   %.2f \t\t    %.2f \t      %s ",crs[i].name,crs[i].crd,crs[i].grade,lg);	
    	printf("\n  --------------------------------------------------------------------------------------");	
	}
	
	
	
}




