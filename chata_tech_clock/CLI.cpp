
#include <iostream>
#include <string>
#include "TimeClock.cpp"

using namespace std;


class CLI {
public:
    TimeClock clock;
    
    //The main command line interface that the user interacts with.
    void commandLineInterface() {
        int input;
        bool active = true;
        clock.inputTime();
        while (active) {

            //the function that displays the main menu options
            mainMenu();

            //Depending on the input can add Hours, Minutes, Seconds, or close the program
            cin >> input;
            switch (input) {
            case 1:

                if (confirmation(1)) {
                    clock.addHour(clock);
                    break;
                }
                else {
                    clock.displayTime(clock.hour, clock.minute, clock.second, clock.timeOfDay);
                    break;
                }
            case 2:
                if (confirmation(2)) {
                    clock.addMinute(clock);
                    break;
                }
                else {
                    clock.displayTime(clock.hour, clock.minute, clock.second, clock.timeOfDay);
                    break;
                }
            case 3:
                if (confirmation(3)) {
                    clock.addSecond(clock);
                    break;
                }
                else {
                    clock.displayTime(clock.hour, clock.minute, clock.second, clock.timeOfDay);
                    break;
                }
               
            case 4:
                if (confirmation(4)) {
                    active = false;
                }
                else {
                    clock.displayTime(clock.hour, clock.minute, clock.second, clock.timeOfDay);
                    break;
                }
            }
        }

        



    }

    //Handles the logic behind the Y/N confirmation through a switch statement.
    bool confirmation(int response) {
        string input;
        string uppercaseInput;
        char test;

        do {
            switch (response) {
            case 1:
                cout << endl;
                cout << "Add an Hour? Y/N" << endl;
                cout << endl;
                break;
            case 2:
                cout << endl;
                cout << "Add a Minute? Y/N" << endl;
                cout << endl;
                break;
            case 3:
                cout << endl;
                cout << "Add a Second? Y/N" << endl;
                cout << endl;
                break;
            case 4:
                cout << endl;
                cout << "End? Y/N" << endl;
                cout << endl;
                break;
            }
            cin >> input;

            //strcmp compares a c styled string to that comparator, so c_str() get the input to be interpreted as a cstyle string
        } while ( !((strcmp(input.c_str(), "Y") == 0 ) || (strcmp(input.c_str(), "N") == 0)));

        if ((strcmp(input.c_str(), "Y") == 0)) {

            return true;
        }
        else {
            return false;
        }
    }

    // The formatting of the Main Menu
    void mainMenu() {

        cout << setfill('*') << setw(26) << "*" << endl; 
        cout << "* "; 
        cout << "1 - Add One Hour";
        cout << setfill(' ') << setw(6) << " "; 
        cout << " *" << endl; 

        cout << "* "; 
        cout << "2 - Add One Minute";
        cout << setfill(' ') << setw(4) << " "; 
        cout << " *" << endl; 

        cout << "* "; 
        cout << "3 - Add One Second";
        cout << setfill(' ') << setw(4) << " "; 
        cout << " *" << endl; 

        cout << "* "; 
        cout << "4 - Exit Program";
        cout << setfill(' ') << setw(6) << " "; 
        cout << " *" << endl; 
        cout << setfill('*') << setw(26) << "*" << endl; 
        cout << endl;

   


    }


};
