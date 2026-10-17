# bill-calculator
A command-line Bill Splitter &amp; Tip Calculator written in C — takes bill amount, number of people, tax and tip rates, validates all input, and splits the total fairly. Built while learning C fundamentals.

# 💸 Bill Splitter & Tip Calculator (C)

A simple command-line program that splits a restaurant bill fairly among friends,
including tax and tip. My first C project, built to practice the fundamentals.

## What it does

The program asks for:
- Number of people
- Total bill amount
- Tax rate (%)
- Tip rate (%)

It then calculates the tax and tip amounts, the grand total, and how much each
person should pay.

## Sample Run

```
Enter the number of people: 4
Enter the total amount of the bill: 1500
Enter the tax rate (as a percentage): 5
Enter the tip rate (as a percentage): 10
Tax amount: ₹75.00
Tip amount: ₹150.00
Total bill (including tax and tip): ₹1725.00
Each person should pay: ₹431.25
```

## Input Validation

Bad input never produces garbage output — the program checks every value before
calculating and exits with a specific error message:

| Check | Rule |
|---|---|
| Number of people | Must be ≥ 1 |
| Bill amount | Must be > 0 |
| Tax rate | Cannot be negative (0% allowed) |
| Tip rate | Cannot be negative (0% allowed) |

The program returns exit code `0` on success and `1` on invalid input, so it can
be used safely in scripts and shell pipelines.

## How to Compile & Run

Requires a C compiler (e.g., GCC).

```bash
gcc bill_splitter.c -o bill_splitter
./bill_splitter          # Linux / macOS
bill_splitter.exe        # Windows
```

## Concepts Demonstrated

- Variables and data types (`int` vs `float`)
- Formatted input/output (`printf` / `scanf`)
- Arithmetic operators and percentage math
- Conditionals (`if` / `else if`) and input validation
- Exit codes (`return 0` / `return 1`)
- Guard-clause control flow

## Planned Improvements

- [ ] Multi-currency selector (INR / USD / EUR)
- [ ] Rejection of non-numeric input using `scanf`'s return value
- [ ] Loop to handle multiple bills in one session
- [ ] Split items unequally (arrays)
- [ ] Save bill history to a file
- [ ] Refactor logic into functions

## Built With

C (GCC) — written while working through a beginner C course.

The code below is The Bill Calculator

    #include <stdio.h>
    
    int main() {
    
    // Details of the Bill
    int people;
    printf("Enter the number of people: ");
    scanf("%d", &people);
    float total_amount;
    printf("\nEnter the total amount of the bill: ");
    scanf("%f", &total_amount);
    float tax_rate;
    printf("\nEnter the tax rate (as a percentage): ");
    scanf("%f", &tax_rate);
    float tip_rate;
    printf("\nEnter the tip rate (as a percentage): ");
    scanf("%f", &tip_rate);
     
    // Validate input values
    if (people <= 0) {
        printf("Invalid input. Number of people must be greater than zero.\n");
        return 1;
    }
    else if (total_amount <= 0) {
        printf("Invalid input. Total amount must be greater than zero.\n");
        return 1;
    }
    else if (tax_rate < 0) {
        printf("Invalid input. Tax rate cannot be negative.\n");
        return 1;
    }
    else if (tip_rate < 0) {
        printf("Invalid input. Tip rate cannot be negative.\n");
        return 1;
    }
    else {
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
    }
    return 0;
    }
