# 💸 Bill Splitter & Tip Calculator

A command-line program that splits a restaurant bill fairly among friends,
including tax and tip. My first C project, built to practice the fundamentals
while learning C.

## What It Does

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
Tax amount: Rs 75.00
Tip amount: Rs 150.00
Total bill (including tax and tip): Rs 1725.00
Each person should pay: Rs 431.25
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

The program returns exit code `0` on success and `1` on invalid input, so it
can be used safely in scripts and shell pipelines.

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

## Files

- `bill_splitter.c` — the complete program
- `.gitignore` — ignores compiled binaries and editor files

## Built With

C (GCC) — written while working through a beginner C course.

## Author

**Akash Bhat** — [github.com/AkashBGBhat](https://github.com/AkashBGBhat)
