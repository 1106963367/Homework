 /* Prints a date in legal form */
#include <stdio.h>
int main()
{
	int month, day, year;
	
	printf("Enter date (mm/dd/yy):");
	scanf("%d /%d /%d",&month, &day, &year );
	
	printf("Dated this %d", day);
	switch( day ) {
		case 1: case 11: case 21:
			printf("st");    break;
		case 2: case 22:
		    printf("nd");    break;
		case 3: case 23:
		    printf("rd");    break;
		default: printf("th");  break;			
	}
	printf(" day of ");
	
	switch (month) {
		case  1: printf("January");       break;
		case  2: printf("February");      break;
		case  3: printf("March");         break;
		case  4: printf("April");         break;
		case  5: printf("May");           break;
		case  6: printf("June");          break;
		case  7: printf("July");          break;
		case  8: printf("August");        break;
		case  9: printf("September");     break;
		case 10: printf("October");       break;
		case 11: printf("November");      break;
		case 12: printf("December");      break;
		
	}
	
	printf(", 20%.2d.\n",year);
	/* ÔóÀÕ¹«Ê½ */                             
	int x, y, W;
	
	y=2000+year;
	//printf("%d\n",y);
	switch (month) {
		case  1: x=day;         break;
		case  2: x=31+day;      break;
		case  3: x=59+day;      break;
		case  4: x=90+day;      break;
		case  5: x=120+day;     break;
		case  6: x=151+day;     break;
		case  7: x=181+day;     break;
		case  8: x=211+day;     break;
		case  9: x=242+day;     break;
		case 10: x=273+day;     break;
		case 11: x=304+day;     break;
		case 12: x=334+day;     break;
	}
	
	if( y%4==0 && x>60 ) {
		x=x+1;
	}
	//printf("%d\n",x);
	W=((y-1)*365 + ((y-1)/4) - ((y-1)/100) + ((y-1)/400) + x ) %7;
	//printf("%d\n",W);
	switch (W) {
		case 0: printf("Sunday!");     break;
		case 1: printf("Monday");     break;
		case 2: printf("Tuesday");    break;
		case 3: printf("Wednesday");  break;
		case 4: printf("Thursday");   break;
		case 5: printf("Friday");     break;
		case 6: printf("Saturday!");   break;
	}

	return 0;
}
