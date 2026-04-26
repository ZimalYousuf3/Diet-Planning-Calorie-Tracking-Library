=======================================================
          Assignment 03 — C++ Library Project
=======================================================

Student Name  : Zimal Yousuf
Roll Number   : BSCS-14-F25-27
Topic Chosen  : Diet Planning & Calorie Tracking Library

-------------------------------------------------------
Description
-------------------------------------------------------
DietPlanner.h is a C++ library built around a Meal
class. It allows users to create meals, enter their
nutritional details, combine or compare meals, and
track their daily calorie intake against a personal
goal. All data is entered by the user at runtime.
No hardcoded values are used.

-------------------------------------------------------
Files Included
-------------------------------------------------------
DietPlanner.h  ->  The main library file
DietPlanner_Library.cpp       ->  Demo file that tests all features
README.txt     ->  This file

-------------------------------------------------------
Concepts Demonstrated
-------------------------------------------------------

1. Constructor Overloading (3 versions)
   - Default constructor
     Creates an empty meal with name Unknown
     and all values set to zero

   - Constructor with name and calories only
     User provides meal name and calories,
     protein carbs and fats are set to zero

   - Constructor with full details
     User provides name, calories, protein,
     carbs and fats

2. Function Overloading (3 versions of checkCalories)
   - checkCalories()
     Checks if meal is low, moderate or high
     calorie based on fixed ranges

   - checkCalories(limit)
     Checks if meal is within a user defined
     calorie limit

   - checkCalories(min, max)
     Checks if meal falls within a user defined
     calorie range

3. Operator Overloading (6 operators)
   +   Combines two meals, adds all values
   -   Subtracts one meal from another
   *   Multiplies a meal by a factor
   ==  Compares two meals by calories
   <   Checks which meal has fewer calories
   >   Checks which meal has more calories
   <<  Prints full meal details (friend function)

-------------------------------------------------------
Sample Output
-------------------------------------------------------
=================================================================
                 Diet Planning & Calorie Tracker
=================================================================
Default meal created:
 =========== Meal Details ===========
 Name:      Unknown
 Calories:  0 kcal
 Protien:   0 g
 Carbs:     0 g
 Fats:      0 g
 ====================================

Enter details for a Meal-2:
 Enter meal name: Breakfast
 Enter calories: 400
 Meal-2 created with name and calories:
 =========== Meal Details ===========
 Name:      Breakfast
 Calories:  400 kcal
 Protien:   0 g
 Carbs:     0 g
 Fats:      0 g
 ====================================

Enter details for a Meal-3:
 Enter meal name: Lunch
 Enter calories: 500
 Enter protien: 25
 Enter carbs: 35
 Enter fats: 15
 Meal-3 created with full details:
 =========== Meal Details ===========
 Name:      Lunch
 Calories:  500 kcal
 Protien:   25 g
 Carbs:     35 g
 Fats:      15 g
 ====================================

Operator Overloading Demo:
 Combining Meal-2 and Meal-3:
 Name: Breakfast + Lunch  |  Calories: 900 kcal

 1. Does Meal-2 equal Meal-3 in calories?
    No! Breakfast and Lunch have different calories.

 2. Does Meal-2 have fewer calories than Meal-3?
    Yes! Breakfast has fewer calories than Lunch.

Calorie Check:
 - Breakfast: Moderate calorie meal
 - Lunch:     Moderate calorie meal

 Enter calorie limit: 450
 - Breakfast: Meal is within the calorie limit
 - Lunch:     Meal exceeds the calorie limit

 Enter min: 300  |  Enter max: 500
 - Breakfast: Meal fits in your target range
 - Lunch:     Meal fits in your target range

Daily Calories Summary:
 Enter your daily goal: 2000
 Total calories consumed today: 900 kcal
 Calories remaining to reach goal: 1100 kcal
=================================================================

-------------------------------------------------------
GitHub Repository
-------------------------------------------------------
https://github.com/ZimalYousuf3/Diet-Planning-Calorie-Tracking-Library

=======================================================