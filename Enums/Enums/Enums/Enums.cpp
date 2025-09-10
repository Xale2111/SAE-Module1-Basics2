
#include <algorithm>
#include <iostream>

using std::cout;
using std::cin;


enum Animal {
    Cow,
    Duck,
    Dog,
    Cat,
};

void MakeAnimalScream(Animal animal);

const int numberOfAnimal = 4;



int main()
{
    std::string userInput = "";
    cout << "Type an animal you want to hear scream : ";
    cin >> userInput;

    MakeAnimalScream(Cow);
}

void MakeAnimalScream(Animal animal)
{
	switch (animal)
	{
	    case Cow:
            cout << "MMEEEEEEEUUUUUUUUHHHHH";
	        break;
        case Duck:
            cout << "Coin Coin";
            break;
        case Dog:
            cout << "Wouaf Wouaf";
            break;
        case Cat:
            cout << "Miaouw Miaouw";
            break;
        case CW_DEFAULT:
            cout << ".... oooh wait, this animal doesn't make a sound or isn't listed... sorry";
            break;

	} 
}
