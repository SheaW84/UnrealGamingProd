#include <iostream>

//This is the start of the triple x program exercise

int main()
{

    //Print welcom messages to the terminal
    std::cout << "You are a demon slayer faced a with demon with set hit points";
    std::cout << std::endl;
    std::cout << "Enter the right hit points to slay the demon...";

    // Declare 3 numbers in the code
    const int CodeA = 4;
    const int CodeB = 8;
    const int CodeC = 7;


/* this is multiline comment*/

    const int CodeSum = CodeA + CodeB + CodeC;

    const int CodeProduct = CodeA * CodeB * CodeC;

    std::cout << std::endl;
    std::cout << "There are 3 numbers in the code" << std::endl;
    std::cout << "The codes add up to " <<CodeSum << std::endl;
    std::cout << "The product of those same numbers equal to "<<CodeProduct <<std::endl;

    int GuessA, GuessB, GuessC;
    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    std::cin >> GuessA;
    std::cin >> GuessB;
    std::cin >> GuessC;

    if(GuessSum == CodeSum && GuessProduct == CodeProduct)
    {

       std::cout << "You Killed the Demon"; 
    }
     
    else 
    {
        std::cout << "The demon killed you";
    }

    return 0;
}