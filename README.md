# final-grade-calculator
A simple and practical C program that calculates the minimum final exam score required to pass a course or achieve a target semester grade, based on midterm performance and exam weightings.
## Features & Implementation Details
- **Modular Architecture:** Calculation logic is encapsulated within a custom function (calculaterequiredfinal).
- **Dynamic Percentage Balance:** Automatically calculates the final exam weighting (100 - midtermpercent).
- **Precise Contribution Modeling:** Determines the score earned from the midterm and accurately isolates the remaining deficit for the target grade.
- **Ceiling Rounding:** Uses `ceil()` from `<math.h>` to round up fractional score requirements to the nearest integer.

# Example Run
enter your midterm note: 78
enter your midterm percent(example:20): 40
enter your target note: 60
Notes of your should be: 48
