// header file
#include <iostream>
using namespace std;

// define variables;
long first_number;
long second_number;
long celsius;
long fahrenheit;
long vnd;
long usd;
long euro;
long square_side;
long rectangle_length;
long rectangle_width;
long circle_radius;
long circle_diameter;

int user_choice;

// create calculate functions
void add_numbers() {
  cout << "========================" << endl;
  cout << "Enter first number:" << endl;
  cin >> first_number;
  cout << "Enter second number:" << endl;
  cin >> second_number;
  cout << "---------------" << endl;
  cout << "" << first_number << " + " << second_number << " = "
       << first_number + second_number << endl;
  cout << "========================" << endl;
}

void minus_numbers() {
  cout << "========================" << endl;
  cout << "Enter first number:" << endl;
  cin >> first_number;
  cout << "Enter second number:" << endl;
  cin >> second_number;
  cout << "---------------" << endl;
  cout << "" << first_number << " - " << second_number << " = "
       << first_number - second_number << endl;
  cout << "========================" << endl;
}

void multiply_numbers() {
  cout << "========================" << endl;
  cout << "Enter first number:" << endl;
  cin >> first_number;
  cout << "Enter second number:" << endl;
  cin >> second_number;
  cout << "---------------" << endl;
  cout << "" << first_number << " * " << second_number << " = "
       << first_number * second_number << endl;
  cout << "========================" << endl;
}
void divide_numbers() {
  cout << "========================" << endl;
  cout << "Enter first number: \n";
  cin >> first_number;
  cout << "Enter second number: \n";
  cin >> second_number;
  cout << "\n---------------\n";
  cout << "" << first_number << " / " << second_number << " = "
       << first_number / second_number << endl;
  cout << "========================" << endl;
}

void temperature_converter_Celsius_To_Fahrenheit() {
  cout << "========================" << endl;
  cout << "Enter degree Celsius: \n";
  cin >> celsius;
  cout << "" << celsius << " degree Celsius = " << (celsius * 1.8) + 32
       << " degree Fahrenheit" << endl;
  cout << "========================" << endl;
}

void temperature_converter_Fahrenheit_To_Celsius() {
  cout << "========================" << endl;
  cout << "Enter degree Fahrenheit: \n";
  cin >> fahrenheit;
  cout << "" << fahrenheit << " degree Fahrenheit = " << (fahrenheit - 32) / 1.8
       << " degree Celsius" << endl;
  cout << "========================" << endl;
}

void currency_unit_converter_VND_To_USD() {
  cout << "========================" << endl;
  cout << "Enter Vietnamese Dong ( VND ) :" << endl;
  cin >> vnd;
  cout << "" << vnd << " ₫ = $" << vnd / 23000 << " (United States Dollar)"
       << endl;
  cout << "========================" << endl;
}
void currency_unit_converter_USD_To_VND() {
  cout << "========================" << endl;
  cout << "Enter United States Dollar ( USD ) :" << endl;
  cin >> usd;
  cout << "$ " << usd << " = " << usd * 23000 << " ₫ (Vietnamese Dong)" << endl;
  cout << "========================" << endl;
}

void perimeter_and_area_of_square() {
  cout << "========================" << endl;
  cout << "Enter the length of a side:" << endl;
  cin >> square_side;
  cout << "Perimeter: " << square_side * 4 << endl;
  cout << "Area: " << square_side * square_side << endl;
  cout << "========================" << endl;
}

void perimeter_and_area_of_rectangle() {
  cout << "========================" << endl;
  cout << "Enter the length of width: " << endl;
  cin >> rectangle_width;
  cout << "Enter the length of length: " << endl;
  cin >> rectangle_length;
  cout << "Perimeter: " << (rectangle_width + rectangle_length) * 2 << endl;
  cout << "Area: " << rectangle_width * rectangle_length << endl;
  cout << "========================" << endl;
}
void perimeter_and_area_of_circle() {
  cout << "========================" << endl;
  cout << "Enter the radius: " << endl;
  cin >> circle_radius;
  cout << "Enter the diameter: " << endl;
  cin >> circle_diameter;
  cout << "Perimeter: " << circle_diameter * 3.14 << endl;
  cout << "Area: " << (circle_radius * circle_radius) * 3.14 << endl;
  cout << "========================" << endl;
}
// main function
int main() {
  // while loop avoids automatically exiting program after each run (You can
  // exit with Control C)
  while (true) {
    cout << "Enter your choice:\n| [ 1 ] for ADD NUMBERS \n| [ 2 ] for MINUS "
            "NUMBERS \n| [ 3 ] for MULTIPLY NUMBERS \n| [ 4 ] for DIVIDE "
            "NUMBERS \n| [ 5 ] for CELSIUS TO FAHRENHEIT \n| [ 6 ] for "
            "FAHRENHEIT TO CELSIUS \n| [ 7 ] for VND TO USD \n| [ 8 ] for USD "
            "TO VND \n| [ 9 ] for PERIMETER AND AREA OF SQUARE \n| [ 10 ] for "
            "PERIMETER AND AREA OF RECTANGLE \n| [ 11 ] for PERIMETER AND AREA "
            "OF CIRCLE \n| [ CTRL C ] for QUIT \n"
         << endl;
    cout << "--> ";
    cin >> user_choice;
    // use switch() to check and execute user's choice instead of if-else
    // statements
    switch (user_choice) {
    case 1:
      add_numbers();
      break;
    case 2:
      minus_numbers();
      break;

    case 3:
      multiply_numbers();
      break;

    case 4:
      divide_numbers();
      break;

    case 5:
      temperature_converter_Celsius_To_Fahrenheit();
      break;

    case 6:
      temperature_converter_Fahrenheit_To_Celsius();
      break;

    case 7:
      currency_unit_converter_VND_To_USD();
      break;

    case 8:
      currency_unit_converter_USD_To_VND();
      break;

    case 10:
      perimeter_and_area_of_square();
      break;

    case 11:
      perimeter_and_area_of_rectangle();
      break;

    case 12:
      perimeter_and_area_of_circle();
      break;

    default:
      cout << "-----------------" << endl;
      cout << "Invalid choice!!!" << endl;
      cout << "-----------------" << endl;
    }
  }
}
