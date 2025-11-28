//Create an enumeration for days (SUNDAY to SATURDAY) and
//print each day with its integer value.

#include <stdio.h>

enum days {
    SUNDAY=0,MONDAY,TUESDAY,WEDNESDAY,THRUSDAY,FRIDAY,SATURDAY};
int main(){
    
    printf("SUNDAY = %d\n",SUNDAY);
    printf("MONDAY = %d\n",MONDAY);
    printf("TUESDAY = %d\n",TUESDAY);
    printf("WEDNESDAY = %d\n",WEDNESDAY);
    printf("THRUSDAY = %d\n",THRUSDAY);
    printf("FRIDAY = %d\n",FRIDAY);
    printf("SATURDAY = %d\n",SATURDAY);
return 0;
}