# Diet Planning & Calorie Tracking Library
A simple and reusable C++ library for tracking
meals and daily calorie intake.

---

## About

DietPlanner is a C++ header-only library built
as part of a BSCS Object Oriented Programming
assignment. It provides a Meal class that models
real food items with nutritional data, and lets
you perform meaningful operations on them like
combining meals, comparing calorie counts, and
checking against a daily goal.

Everything is user driven. No values are
hardcoded in the program.

---

## Files

| File          | Purpose                          |
|---------------|----------------------------------|
| DietPlanner.h | Main library with Meal class     |
| main.cpp      | Demo file testing all features   |
| README.txt    | Project documentation            |

---

## What the Library Does

- Create meals with different levels of detail
- Combine two meals using the + operator
- Subtract meals using the - operator
- Scale a meal portion using the * operator
- Compare meals using ==, < and > operators
- Print meal details using the << operator
- Check if a meal is low, moderate or high calorie
- Check if a meal fits within a calorie limit
- Track total daily calories vs a personal goal

---

## OOP Concepts Used

**Constructor Overloading**
Three versions of the Meal constructor allow
creating a meal with no data, partial data,
or full nutritional details.

**Function Overloading**
The checkCalories() function has three versions
with different parameters for flexible calorie
checking.

**Operator Overloading**
Six arithmetic and comparison operators are
overloaded to work naturally with Meal objects.
The << operator is implemented as a friend
function.

---

## How to Run

1. Clone this repository
2. Open Visual Studio Community
3. Create a new Console App C++ project
4. Add DietPlanner.h and main.cpp to the project
5. Press Ctrl + F5
6. Enter your meal details when prompted

---

## Sample Run

Program asks user to enter details for 3 meals,
then demonstrates all operators and calorie
check functions on those meals, and finally
shows a daily calorie summary.

Input is fully user driven at runtime.

---

## Built With

- C++
- Visual Studio Community 2022

---

## Related Repositories
- **[CPP-Basics](https://github.com/ZimalYousuf3/CPP-Basics)** - Fundamental C++ programs (100+ examples)
- **[CPP-Practice-Problems](https://github.com/ZimalYousuf3/CPP-Practice-Problems)** - Advanced practice with data files
- **[CPP-Management-Systems](https://github.com/ZimalYousuf3/CPP-Management-Systems)** - Complete management applications
- **[CPP-OOP-LAB](https://github.com/ZimalYousuf3/CPP-OOP-LAB)** - Object Oriented Programming projects and assignments

## Author

**Zimal Yousuf**  
BSCS Student | C++ Programmer  
*Passionate about clean code and foundational programming concepts*
Course : Object Oriented Programming
Degree : BSCS
