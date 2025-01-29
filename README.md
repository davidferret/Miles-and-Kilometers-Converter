# 📌 Distance Converter - C Program

## 🚀 Overview
This C program provides a simple yet efficient way to convert distances between miles and kilometers. It features an intuitive menu system, input validation, and optimized floating-point calculations for accurate results.

## 🛠 Features
- **Bidirectional Conversion**: Convert miles to kilometers or vice versa.
- **Precomputed Constants**: Uses predefined constants for efficient conversions.
- **Input Validation**: Ensures the user enters a valid, positive numeric value.
- **User-Friendly Interface**: Simple text-based menu for ease of use.

## 📜 How It Works
1. The user is prompted with a menu to choose a conversion direction:
   - `1` for miles to kilometers
   - `2` for kilometers to miles
2. The program validates user input to ensure only positive numbers are accepted.
3. The conversion is performed using optimized multiplication.
4. The result is displayed with two decimal precision.

## 🏗 Code Structure
- **`convertMilesToKm(double miles)`**: Converts miles to kilometers.
- **`convertKmToMiles(double km)`**: Converts kilometers to miles.
- **`inputValidation(double *value)`**: Ensures user inputs valid numerical values.
- **`displayMenu()`**: Prints the conversion menu.

## 🔧 Compilation & Execution
To compile and run the program, use the following commands:
```bash
gcc distance_converter.c -o distance_converter
./distance_converter
```

## 🎯 Example Usage
```
--- Distance Converter ---
1. Convert miles to kilometers
2. Convert kilometers to miles
Enter your choice (1 or 2): 1
Enter the distance in miles: 5

5.00 miles is equal to 8.05 kilometers.
```

## 📬 Contributions & Feedback
Feel free to contribute or suggest improvements to enhance the program. Happy coding! 🚀

