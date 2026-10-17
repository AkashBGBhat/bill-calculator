#include <stdio.h>

int main() {

    // Details of the Bill
    int people;
    printf("Enter the number of people: ");
    scanf("%d", &people);
    float total_amount;
    printf("Enter the total amount of the bill: ");
    scanf("%f", &total_amount);
    float tax_rate;
    printf("Enter the tax rate (as a percentage): ");
    scanf("%f", &tax_rate);
    float tip_rate;
    printf("Enter the tip rate (as a percentage): ");
    scanf("%f", &tip_rate);

    // Validate input values (guard clauses: exit early with a specific error)
    if (people <= 0) {
        printf("Invalid input. Number of people must be greater than zero.\n");
        return 1;
    }
    if (total_amount <= 0) {
        printf("Invalid input. Total amount must be greater than zero.\n");
        return 1;
    }
    if (tax_rate < 0) {
        printf("Invalid input. Tax rate cannot be negative.\n");
        return 1;
    }
    if (tip_rate < 0) {
        printf("Invalid input. Tip rate cannot be negative.\n");
        return 1;
    }

    // Calculation of Total Bill
    float tax_amount = total_amount * (tax_rate / 100);
    printf("Tax amount: Rs %.2f\n", tax_amount);
    float tip_amount = total_amount * (tip_rate / 100);
    printf("Tip amount: Rs %.2f\n", tip_amount);
    float total_bill = total_amount + tax_amount + tip_amount;
    printf("Total bill (including tax and tip): Rs %.2f\n", total_bill);

    // Calculation of Bill Per Person
    float bill_per_person = total_bill / people;
    printf("Each person should pay: Rs %.2f\n", bill_per_person);

    return 0;
}
