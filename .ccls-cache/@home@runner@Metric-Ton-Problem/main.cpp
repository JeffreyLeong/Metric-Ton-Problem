/*=========================================================================
A metric ton is 35,273.92 ounces. Write a program that will read the weight
of a package of breakfast cereal in ounces and output the weight in metric
tons as well as the number of boxes needed to yield 1 metric ton of cereal.
Your program should allow the user to repeat this calculation as often as
the user wishes.
===========================================================================*/
#include <iostream>
using namespace std;

int main() {
  // Variables
  char ans;
  const double metric_ton_in_ounces = 35273.92;

  double cereal_weight_ounces = 0;
  double total_ounces = 0;
  double weight_in_metric_tons = 0;
  double number_of_boxes = 0;

  // Intro
  cout << "Hello. We are going to compare the weight of your boxed cereal to the metric ton. Plus we are going to find out how many boxes of cereal does it take to get 1 metric ton!\n\n";
  cout << "FYI: A metric ton is equivalent to 35,273.92 ounces.\n\n";

 // Do-While Loop 
  do {
    // User Input, Compute, & Loop
    cout << "Please enter the ounce weight of your cereal: ";
    cin >> cereal_weight_ounces;

    // Compute
    total_ounces = cereal_weight_ounces/metric_ton_in_ounces;
    number_of_boxes = metric_ton_in_ounces/cereal_weight_ounces;

    // Program Output
    cout << endl;
    cout << "Your cereal in metric tons is " << total_ounces << " ounces.\n\n";
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout << "You will need " << number_of_boxes << " boxes of cereal to reach 1 metric ton. ";
    cout << endl;
    cout << endl;

    // Try again?
    cout << "Would you like to try again? Press 'y' for yes. Press any other key to terminate program. ";
    cin >> ans;
    cout << endl;
  } while (ans =='y' || ans == 'Y');
  cout << "Good Bye!";
  return 0;
}