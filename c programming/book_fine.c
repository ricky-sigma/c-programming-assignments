//program to calculate fine on book overdue
//authou CT101/G/22039/24

int convertDateToDays(int date) {
    int year = date / 10000;
    int month = (date / 100) % 100;
    int day = date % 100;

    return year * 365 + month * 30 + day;
}


#include <stdio.h>

int main(){
    int id;
    int dueDate;
    int returnDate;
    int overdue;
    int fineRate;
    int fineAmount;
    printf("Enter the book ID : \n");
     scanf("%d" , &id);
   printf("Enter the due date (YYYYMMDD): \n");
    scanf("%d", &dueDate);
   printf("enter the return date (YYYYMMDD): \n");
     scanf("%d" , &returnDate);

       overdue = returnDate - dueDate;


           if (overdue <= 0) {
        printf("No fine. Book was returned on time or earlier.\n");
        return 0;
    } else if (overdue <= 7) {
        fineRate = 20;
    } else if (overdue <= 14) {
        fineRate = 50;
    } else {
        fineRate = 100;
    }

  
    fineAmount = overdue * fineRate;

    printf("\nBook ID: %d", id);
    printf("\nDue Date: %d", dueDate);
    printf("\nReturn Date: %d", returnDate);
    printf("\nDays Overdue: %d", overdue);
    printf("\nFine Rate: Ksh. %d per day", fineRate);
    printf("\nFine Amount: Ksh. %d\n", fineAmount);



      
return 0;
}