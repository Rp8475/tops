// PROGRAM 1 : CRICKETER'S DETAILS - (START) ----------------------------->
#include <iostream>
#include <string>
using namespace std;

// Base class to store cricketer's details
class Cricketer
{
public:
    string name;       // Cricketer's name
    int total_matches; // Total number of matches played

    // Function to input cricketer's details
    details()
    {
        cout << "Enter Cricketer's Name : ";
        cin >> name;
        cin.ignore(); // To clear newline character from the input buffer
        getline(cin, name);
        cout << "Enter number of Matches Played : ";
        cin >> total_matches;
    }
};

// Derived class to store details specific to a Batsman
class Batsman : public Cricketer
{
public:
    int runs, best_performance;
    float avarage;

    // Function to input additional data for the batsman
    inputData()
    {
        cout << "Enter total Runs : ";
        cin >> runs;
        cout << "Enter Best Performance (runs in a single match) : ";
        cin >> best_performance;
    }
    // Function to calculate the average runs per match
    avg()
    {
        avarage = runs / total_matches;
    }
    // Function to display the batsman's details
    display()
    {
        cout << "\n----------Display Data----------\n\n";
        cout << "Cricketer's Name : " << name;
        cout << "\nNumber of Matches " << name << " Played : " << total_matches << endl;
        cout << "Total Runs : " << runs;
        cout << "\nAvarage : " << avarage;
        cout << "\nBest Performance : " << best_performance;
    }
};

main()
{
    Batsman obj;     // Create an object of the Batsman class
    obj.details();   // Input cricketer's basic details
    obj.inputData(); // Input additional data for the batsman
    obj.avg();       // Calculate the average runs
    obj.display();   // Display the details
}
// PROGRAM 1 : CRICKETER'S DETAILS - (END) ----------------------------->