#include <iostream>
using namespace std;

int main() {
    int num, guess, tries;

    srand(time(NULL));
    num = (rand() % 100) + 1;

    cout << "****** NUMBER GUESSING GAME *****";

    do {
        cout<<"Enter a guess between (1-100): ";
        cin>>guess;
        tries++;

        if (guess > num) {
            cout<<"Too high!\n";
        } else if (guess < num) {
            cout<<"Too low!\n";
        } else {
            cout<<"Correct! Number of tries: "<<tries<<"\n";
        }
    } while (guess !=num);

    cout << "***********************************\n";
    return 0;
}
