//program to calculate electricity bill
//Author CT101/G/22039/24



include <stdio.h>

int main() {
    int id;
    char name[100];
    int unitsConsumed;
    float chargesPerUnit, totalBill, surcharge = 0;

    // Input for Name
    printf("Enter your Name: \n");
    scanf("%s", name);

    // Input for ID
    printf("Enter your ID: ");
    scanf("%d", &id);

    // Input for units consumed
    printf("Enter the number of units consumed: ");
    scanf("%d", &unitsConsumed);

    // Determine charges per unit based on units consumed
    if (unitsConsumed <= 199) {
        chargesPerUnit = 1.20;
    } else if (unitsConsumed >= 200 && unitsConsumed < 400) {
        chargesPerUnit = 1.50;
    } else if (unitsConsumed >= 400 && unitsConsumed < 600) {
        chargesPerUnit = 1.80;
    } else {
        chargesPerUnit = 2.00;
    }

    // Calculate total bill
    totalBill = unitsConsumed * chargesPerUnit;

    
    if (totalBill > 400) {
        surcharge = totalBill * 0.15;
        totalBill += surcharge;
    }

    // Ensure the minimum bill is Kshs. 100
    if (totalBill < 100) {
        totalBill = 100;
    }

    // Output the final details
    printf("\n--- Electricity Bill ---\n");
    printf("Customer ID: %d\n", id);
    printf("Customer Name: %s\n", name);
    printf("Units Consumed: %d\n", unitsConsumed);
    printf("Charges per Unit: %.2f\n", chargesPerUnit);
    printf("Total Amount to Pay: Kshs. %.2f\n", totalBill);

    return 0;
}


}