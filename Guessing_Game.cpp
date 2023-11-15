#include <bits/stdc++.h>
using namespace std;
#define fast_io()                 \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl '\n'
#define pb push_back
#define fi first
#define se second
#define lb lower_bound
#define ub upper_bound
#define all(vec) vec.begin(), vec.end()
#define ins insert
#define ld long double
#define ll long long
#define ull unsigned long long
#define MAX_NUMBER 100

int main()
{
    // Seeding the random number generator with the current time Section
    srand(time(0));

    // Game loop
    while (true)
    {
        // Generating a random number between 1 and 100 Section
        ll secretNumber = rand() % MAX_NUMBER + 1;

        ll guess;
        ll attempts = 0;

        cout << "Welcome to the Number Guessing Game!" << endl;
        cout << "Can you guess the number between 1 and 100?" << endl;

        do
        {
            // Get user's guess Section
            cout << "Enter your guess: ";
            cin >> guess;

            // Increment the number of attempts Section
            attempts++;

            // Provide feedback Section
            if (guess > secretNumber)
            {
                cout << "Too high! Try again." << endl;
            }
            else if (guess < secretNumber)
            {
                cout << "Too low! Try again." << endl;
            }
            else
            {
                cout << "Congratulations! You guessed the number in " << attempts << " attempts." << endl;
            }

        } while (guess != secretNumber);

        // Asking the user if they want to play again Section
        cout << "Do you want to play again? (yes/no): ";
        string playAgain;
        cin >> playAgain;

        if (playAgain != "yes")
        {
            break; // Exiting the game loop if the user doesn't want to play again
        }
    }

    return 0;
}
