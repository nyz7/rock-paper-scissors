#include <iostream>
#include <string>
using namespace std;
#include <random>

int main()
{
    string listObjects[3] = {"Rock", "Paper", "Scissor"};
    string choicePlayer = "";
    bool choiceVerified = false;

    for (int i = 0; i <= 2; i++)
    {
        cout << listObjects[i] + "\n";
    }
    cout << "Choose one of the options above: ";
    cin >> choicePlayer;

    for (int i = 0; i < 2; i++)
    {
        if (listObjects[i] == choicePlayer)
        {
            choiceVerified = true;
            break;
        }
    }

    if (!choiceVerified)
    {
        cout << "Incorrect option!";
    }

    random_device seed;
    mt19937 generator(seed());
    uniform_int_distribution<> distribution(0, 2);

    int choiceCPU = distribution(generator);

    return 0;
}