#pragma once

#include <iostream>
#include <string>
using namespace std;

class Meal {
private:
	string name;
	double calories;
	double protien;
	double carbs;
	double fats;

public:
	// Constructor Overloading
	// Default Constructor
	Meal() {
		name = " Unknown";
		calories = 0;
		protien = 0;
		carbs = 0;
		fats = 0;
	}
	// Constructor with name and calories only
	Meal(string mealName, double cal) {
		name = mealName;
		calories = cal;
		protien = 0;
		carbs = 0;
		fats = 0;
	}

	// Constructor with full details (Protien, Carbs, Fats)
	Meal(string mealName, double cal, double prot, double carb, double fat) {
		name = mealName;
		calories = cal;
		protien = prot;
		carbs = carb;
		fats = fat;
	}

	// Getters
	string getName() { return name; }
	double getCalories() { return calories; }
	double getProtien() { return protien; }
	double getCarbs() { return carbs; }
	double getFats() { return fats; }

	// Overloading + operator to combine two meals
	Meal operator+ (const Meal& other) {
		Meal result;
		result.name = name + " + " + other.name;
		result.calories = calories + other.calories;
		result.protien = protien + other.protien;
		result.carbs = carbs + other.carbs;
		result.fats = fats + other.fats;
		return result;
	}

	// Overloading - operator to subtract one meal's calories from another
	Meal operator- (const Meal& other) {
		Meal result;
		result.name = name + " (reduced)";
		result.calories = calories - other.calories;
		result.protien = protien - other.protien;
		result.carbs = carbs - other.carbs;
		result.fats = fats - other.fats;
		return result;
	}

	// Overloading * operator to show double meal
	Meal operator* (double factor) {
		Meal result;
		result.name = name + " (x" + to_string(factor) + ")";
		result.calories = calories * factor;
		result.protien = protien * factor;
		result.carbs = carbs * factor;
		result.fats = fats * factor;
		return result;
	}

	// Overloading == operator to compare two meals based on calories
	bool operator== (const Meal& other) const{
		return calories == other.calories;
	}

	// Overloading < operator to compare two meals based on calories
	bool operator< (const Meal& other) const{
		return calories < other.calories;
	}

	// Overloading > operator to compare two meals based on calories
	bool operator> (const Meal& other) const{
		return calories > other.calories;
	}

	// Overloading << operator for printing meal details
	friend ostream& operator<< (ostream& out, Meal& obj) {
		out << " =========== Meal Details =========== " << endl;
		out << " Name: " << obj.name << endl;
		out << " Calories: " << obj.calories << " kcal" << endl;
		out << " Protien: " << obj.protien << " g" << endl;
		out << " Carbs: " << obj.carbs << " g" << endl;
		out << " Fats: " << obj.fats << " g" << endl;
		out << " ==================================== " << endl;
		return out;
	}

	// Function Overloading
	void checkCalories() {
		if (calories > 0 && calories <= 300) {
			cout << " Low calorie meal ";
		}
		else if (calories > 300 && calories <= 600) {
			cout << " Moderate calorie meal ";
		}
		else {
			cout << " High calorie meal ";

		}

	}

	void checkCalories(double limit) {
		if (calories > 0 && calories <= limit) {
			cout << " Meal is within the calorie limit ";
		}
		else {
			cout << " Meal exceeds the calorie limit ";
		}
	}

	void checkCalories(double min, double max) {
		if (calories > 0 && calories >= min && calories <= max) {
			cout << " Meal fits in your target range. ";
		}
		else {
			cout << " Meal is outside your target range. ";
		}
	}
};
