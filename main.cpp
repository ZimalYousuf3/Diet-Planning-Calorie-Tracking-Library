#include <iostream>
#include "DietPlanner.h"
using namespace std;

int main () {
	cout << "=================================================================" << endl;
    cout << "                 Diet Planning & Calorie Tracker                 " << endl;
	cout << "=================================================================" << endl;
	string name;
	double calories;
	double protien;
	double carbs;
	double fats;

	// Meal created using default constructor
	Meal m1 = Meal();
	cout << " Default meal created: " << endl;
	cout << m1 << endl;
    
	cout << "---------------------------------------" << endl;
	cout << "       Enter details for a Meal-2       " << endl;
	cout << "---------------------------------------" << endl;

	cout << " Enter meal name: ";
	getline(cin, name);
	cout << " Enter calories: ";
	cin >> calories;

	cin.ignore(); // Clear newline from previous input

	// Meal created using constructor with name and calories
	Meal m2 = Meal(name, calories);
	cout << " Meal-2 created with name and calories: " << endl;
	cout << m2 << endl;
	cout << "---------------------------------------" << endl;

	cout << "---------------------------------------" << endl;
	cout << "       Enter details for a Meal-3       " << endl;
	cout << "---------------------------------------" << endl;
	
	cout << " Enter meal name: ";
	getline(cin, name);
	cout << " Enter calories: ";
	cin >> calories;
	cout << " Enter protien: ";
	cin >> protien;
	cout << " Enter carbs: ";
	cin >> carbs;
	cout << " Enter fats: ";
	cin >> fats;
	
	Meal m3 = Meal(name, calories, protien, carbs, fats);
	cout << " Meal-3 created with full details: " << endl;
	cout << m3 << endl;
	cout << "---------------------------------------" << endl;

	// Operator overloading demo
	cout << "------------------------------------------------------------" << endl;
	cout << "                   Operator Overloading Demo                " << endl;
	cout << "------------------------------------------------------------" << endl;

	Meal combined = m2 + m3;
	cout << " Combining Meal-2 and Meal-3: " << endl;
	cout << combined << endl;

	Meal reduced = m3 - m2;
	cout << " Subtracting Meal-2 from Meal-3: " << endl;
	cout << reduced << endl;

	Meal doublePortion = m3 * 2;
	cout << " Doubling Meal-3: " << endl;
	cout << doublePortion << endl;
	cout << endl;

	cout << " 1.Does Meal-2 is equal to Meal-3 in calories? " << endl;
	
	if (m2 == m3) {
		cout << " Yes! " << m2.getName() << " and " << m3.getName() << " has same calories. " << endl;
	}
	else {
		cout << " No! " << m2.getName() << " and " << m3.getName() << " has different calories. " << endl;
	}
	cout << endl;

	cout << " 2.Does Meal-2 has fewer calories than Meal-3? " << endl;
	
	if (m2 < m3) {
		cout << " Yes! " << m2.getName() << " has fewer calories than " << m3.getName() << endl;
	}
	else {
		cout << " No! " << endl;
	}
	cout << endl;

	cout << " 3.Does Meal-3 has more calories than Meal-3? " << endl;
	
	if (m2 > m3) {
		cout << " Yes! " << m3.getName() << " has more calories than " << m2.getName() << endl;
	}
	else {
		cout << " No! " << endl;
	}
	cout << endl;
	cout << "------------------------------------------------------------" << endl;

	// Function overloading Demo
	cout << "---------------------------------------------------- " << endl;
	cout << "                    Calorie Check                    " << endl;
	cout << "---------------------------------------------------- " << endl;

	cout << " - " << m2.getName() << " : ";
	m2.checkCalories();
	cout << endl;

	cout << " - " << m3.getName() << " : ";
	m3.checkCalories();
	cout << endl;

	double limit;
	cout << " \n Enter your calorie limit per meal: ";
	cin >> limit;
	cout << endl;

	cout << " - " << m2.getName() << " : ";
	m2.checkCalories(limit);
	cout << endl;

	cout << " - " << m3.getName() << " : ";
	m3.checkCalories(limit);
	cout << endl;

	double min, max;
	cout << " \n Enter minimum calories limit per meal: ";
	cin >> min;

	cout << " Enter maximum calories limit per meal: ";
	cin >> max;
	cout << endl;

	cout << " - " << m2.getName() << " : ";
	m2.checkCalories(min, max);
	cout << endl;

	cout << " - " << m3.getName() << " : ";
	m3.checkCalories(min, max);
	cout << endl;
	cout << "---------------------------------------------------- " << endl;

	cout << "---------------------------------------------------- " << endl;
	cout << "                 Daily Calories Summary              " << endl;
	cout << "---------------------------------------------------- " << endl;
	double dailyGoal ;
	Meal dailyIntake = m1 + m2 + m3;
	double eaten = dailyIntake.getCalories();

	cout << " Enter your daily goal: ";
	cin >> dailyGoal;
	double remaining = dailyGoal - eaten;
	cout << " Total calories consumed today: " << eaten << " kcal. " << endl;
	cout << " Calories remaining to reach your goal: " << remaining << " kcal. " << endl;

	cout << "---------------------------------------------------- " << endl;

	cout << "=================================================================" << endl;

	return 0;
}

