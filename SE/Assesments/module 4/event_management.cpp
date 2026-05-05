#include <iostream>
#include <cmath>
#include <string>

using namespace std;

// Class to manage event details
class EventName {
public:
    // Constructor displays a welcome message
    EventName() {
        cout << "***************WELCOME to R.P. Event Management CO.****************" << endl;
        cout << "***********************************************************" << endl << endl;
    }

    // Method to set the event name
     setEvent() {
        cout << "<-enter event->" << endl;
        cin >> event; // Read event name
       
        getline(cin, event); // Use getline to allow spaces in name
    }

protected:
    string event; // Event name
};

// Class to manage customer details
class Customer {
public:
    // Method to set the customer's name
     setName() {
        cout << "***********************************************************" << endl;
        cout << "<-enter your first & last name->" << endl;
       
        getline(cin, name); // Use getline to allow spaces in name
    }

protected:
    string name; // Customer's name
};

// Class to manage the number of guests
class Guest {
public:
    // Method to set the number of guests
     setGuests() {
        cout << "***********************************************************" << endl;
        cout << "<-enter your number of guests->" << endl;
        cin >> guests; // Read number of guests
        // Validate number of guests
        while (guests <= 0) {
            cout << "<-enter valid number of guests!->" << endl;
            cin >> guests; // Read number of guests again if invalid
        }
    }

public:
    float guests; // Number of guests
};

// Class to manage the event time
class Time {
public:
    // Method to set the time of the event in minutes
    setTime() {
        cout << "***********************************************************" << endl;
        cout << "<-enter the time of event in minutes->" << endl;
        cin >> minutes; // Read time in minutes
        // Validate time in minutes
        while (minutes <= 0) {
            cout << "<-enter valid number of minutes!->" << endl;
            cin >> minutes; // Read time again if invalid
        }
    }

public:
    float minutes; // Time of event in minutes
};

// Class to estimate costs based on the event details
class Estimate {
public:
    // Method to calculate the estimate based on guests, time, and name
     calculateEstimate(float guests, float minutes, const string &name) {
        const float costPerHour = 18.50;   // Cost per hour for a server
        const float costPerMinute = 0.40;  // Cost per minute for a server
        const float costOfDinner = 20.70;  // Cost per dinner

        float T_server = guests / 20;      // Calculate the total number of servers needed
        float cost1 = (minutes / 60) * costPerHour;    // Calculate hourly cost
        float cost2 = (minutes * 0.60) * costPerMinute; // Calculate per-minute cost
        cost_of_one_server = cost1 + cost2; // Total cost per server
        T_foodCost = guests * costOfDinner; // Total cost of dinner
        avgFoodCost = T_foodCost / guests; // Average cost of dinner per person

        // Output the estimate details
        cout << "=============================Event estimate for: " << name << " ===============================" << endl;
        cout << "Number of servers needed: " << ceil(T_server) << endl;
        cout << "Cost of one server: " << cost_of_one_server << endl;
        cout << "Total cost of dinner: " << T_foodCost << endl;
        cout << "Average cost of dinner per person: " << avgFoodCost << endl << endl;
    }

protected:
    float cost_of_one_server, T_foodCost, avgFoodCost; // Cost calculations
};

// Class to calculate the final bill based on the estimate
class Bill : public Estimate {
public:
    // Method to calculate the final bill and deposit amount
     calculateBill(float guests, float T_server) {
        float T_cost = T_foodCost + (cost_of_one_server * ceil(T_server)); // Total cost including server costs
        float D_amount = T_cost * 0.25; // Deposit amount (25% of the total cost)

        // Output the bill details
        cout << "-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_" << endl;
        cout << "Total bill of event: " << T_foodCost << endl << endl;
        cout << "<=-PLEASE deposit 25% of the amount to reserve the event=>" << endl;
        cout << "Deposit needed to reserve: " << D_amount << endl;
    }
};

// Main class that combines all functionalities
class EventManagement : public EventName, public Customer, public Guest, public Time, public Bill {
public:
    // Method to coordinate the whole event management process
     form() {
        setEvent();      // Set event details
        setName();       // Set customer details
        setGuests();     // Set number of guests
        setTime();       // Set event time
        calculateEstimate(guests, minutes, name); // Calculate estimate
        calculateBill(guests, guests / 20);       // Calculate bill
    }
};

 main() {
    EventManagement em; // Create an instance of EventManagement
    em.form();          // Execute the form method to handle the event management
    
}

