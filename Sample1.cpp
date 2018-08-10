// Functions with horror movie references
#include <iostream>
using namespace std;

void candyman ()
    {
        cout << "Candyman\n";
    }

void bloodyMary ()
    {
        cout << "Bloody Mary.\n";
    }

void freddy ()
    {
        cout << "One, Two, Freddy's coming for you.....\n\n";
        cout << "Three, Four, better lock your door....\n\n";
    }

int main ()

{
    cout << "What scary movie is this from...?\n\n";
    for (int count=0; count <4; count++)
        candyman();
    cout << "Did you guess right?\n";

    cout << "\nOkay here's another one....\n\n";
    for (int count = 0; count <4; count++)
        bloodyMary();
    cout << "Ouch!\n";

    cout << "\nOkay here's the last one...\n\n";
            freddy();
    cout << "That was fun right?\n";
    cout << "Okay back to work\n\n\n\n";

    return 0;
}

