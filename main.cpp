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

    for (int i = 0; i < 3; i++)
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
        return 0;
    }

    random_device seed;
    mt19937 generator(seed());
    uniform_int_distribution<> distribution(0, 2);

    int choiceCPUIndex = distribution(generator);
    string choiceCPU = listObjects[choiceCPUIndex];

    if (choicePlayer == choiceCPU)
    {
        cout << "\n Draw!";
    }
    else if (choicePlayer == "Rock" && choiceCPU == "Scissor")
    {
        cout << "\n You won!";
    }
    else if (choicePlayer == "Paper" && choiceCPU == "Rock")
    {
        cout << "\n You won!";
    }
    else if (choicePlayer == "Scissor" && choiceCPU == "Paper")
    {
        cout << "\n You won!";
    }
    else
    {
        cout << "\n You lost...";
    }

    cout << "\n" + choicePlayer + " x " + choiceCPU + "\n";

    return 0;
}