#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;
int main()

{
    int count = 0;
    int guess;
    srand(time(0));
    int num = rand() % 100 + 20;
    do
    {   count++;
        cout << "Guess the number : ";
        cin >> guess;
        if (guess > num)
        {
            cout << "Guessed number is too large. So guess a smaller number " << endl;
        }
        else if (guess < num)
        {
            cout << "Guessed number is too small. So guess a larger number " << endl;
        }
    } while (num != guess);
    cout << "Number Matched...You have guessed it !!"<<endl<<endl;
    cout<<" You tried "<<count<<" times for guessing that number";
    return 0;
}