#include <iostream>
using namespace std;

string numberToText(int number)
string belowTwenty,tens,result;
 belowTwenty[] = {
        "", "One", "Two", "Three", "Four", "Five", 
        "Six", "Seven", "Eight", "Nine", "Ten", 
        "Eleven", "Twelve", "Thirteen", "Fourteen", 
        "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
 tens[] = {
        "", "", "Twenty", "Thirty", "Forty", 
        "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
 result;
if (number < 20) {
        result = belowTwenty[number];
} else {
   result = tens[number / 10]; 
   if (number % 10 != 0) {
        result += " " + belowTwenty[number % 10]; 
        }
    }

    return result;
}

int main() {
    int number;
    cout << "Enter a number between 1 and 99: ";
    cin >> number;

    string textRepresentation = numberToText(number);
    cout << "The number in text is: " << textRepresentation << std::endl;

    return 0;
}
