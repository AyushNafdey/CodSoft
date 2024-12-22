#include <bits/stdc++.h>
using namespace std;

int get_valid_number() {
    int num;
    while (true) {
        cout << "\nPlease enter any number in the range from 1 to 10: ";
        cin >> num;
        
        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input! Please enter a number." << endl;
            continue;
        }
        
        if (num < 1) {
            cout << "Number is smaller than 1! Enter a number greater than it." << endl;
        }
        else if (num > 10) {
            cout << "Number is greater than 10! Enter a number smaller than it." << endl;
        }
        else {
            return num;
        }
    }
}

void play_game() {
    srand(time(NULL));
    int random_num = (rand() % 10) + 1;
    int attempts = 0;
    
    while (true) {
        int user_num = get_valid_number();
        attempts++;
        
        if (user_num == random_num) {
            cout << "Congratulations!! You guessed it right in " << attempts << " attempts!" << endl;
            break;
        }
        else if (user_num > random_num) {
            cout << "Too high!" << endl;
        }
        else {
            cout << "Too low!" << endl;
        }
    }
}

int main() {
    char play_again;
    
    do {
        cout << "\n=== Number Guessing Game ===" << endl;
        play_game();
        
        cout << "\nWould you like to play again? (y/n): ";
        cin >> play_again;
    } while (tolower(play_again) == 'y');
    
    cout << "\nThanks for playing!" << endl;
    return 0;
}