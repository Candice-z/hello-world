#include<stdio.h>
int main(void)   
{
	int month,day,year,week,century,rest,w;
	printf("Enter date (mm/dd/yy): ");
	scanf("%d /%d /%d", &month, &day, &year);
	printf("Dated this %d", day);
	switch (day) {
	case 1: case 21: case 31:
    	printf("st"); break;
    case 2: case 22:
    	printf("nd"); break;
    case 3: case 23:
  		printf("rd"); break;
    default: printf("th"); break;
  }
  	printf(" day of ");
    switch (month) {
    case 1:  printf("January");   break;
    case 2:  printf("February");  break;
    case 3:  printf("March");     break;
    case 4:  printf("April");     break;
    case 5:  printf("May");       break;
    case 6:  printf("June");      break;
    case 7:  printf("July");      break;
    case 8:  printf("August");    break;
    case 9:  printf("September"); break;
    case 10: printf("October");   break;
    case 11: printf("November");  break;
    case 12: printf("December");  break;
  }
  printf(", 20%.2d.\n", year);
  if(month>=3){
  	rest=(year+2000)%100;
  	century=(year+2000)/100;
  }
  else{
  	month=month+12;
  	rest=(year-1+2000)%100;
  	century=(year-1+2000)/100;
  }
  w=rest+(rest/4)+(century/4)-2*century+((26*(month+1)/10))+day-1;
  if(w<0){
  	w=7-(-w)%7;
  }
  else{
  	w=w%7;
  }
  printf(" week of ");
  switch(w){
  case 0: printf("Sunday"); break;
  case 1: printf("Monday"); break;
  case 2: printf("Tuesday"); break;
  case 3: printf("Wednesday"); break;
  case 4: printf("Thursday"); break;
  case 5: printf("Friday"); break;
  case 6: printf("Saturday"); break;
  }
  return 0;
}


