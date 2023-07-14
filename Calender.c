#include<stdio.h>
int getTheFirstDayofYear(int year){
    int day = (year*365 + ((year - 1)/4) - ((year - 1)/100) + ((year -1)/400)) % 7;
    return day;
}
int main(){
    char *Months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "November", "December"};
    int dayInmonths[] = {31, 28, 31, 30,  31, 30, 31, 31, 30, 31, 30, 31};

    int m, d, days, week = 0, speceCounter = 0, year;
    
    printf("\nCreator '^--JSL Tech World--^'\n\nEnter your Year: ");
    scanf("%d", &year);
    printf("\n\n*********** Welcome to %d ************\n\n", year);

    //check If it is a leap year
    if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0){
        dayInmonths[1] = 29;
    }
    
    //find the First day of the year
    week = getTheFirstDayofYear(year);

    for(m = 0; m < 12; m++){
        printf("\n\n-------------- %s -----------------\n\n", Months[m]);
        printf("     Sun    Mon    Tue    Wed   Thus   Fri    Sat\n\n");

        for (speceCounter = 1; speceCounter <= week; speceCounter++)
        {
            printf("       ");
        }
        

        days = dayInmonths[m];
         
    for(d = 1; d <= days; d++){
        printf(" %6d", d);
        week++;
        if(week > 6){
            week = 0;
            printf("\n");
        }
    }
    
    }




    return 0;
}