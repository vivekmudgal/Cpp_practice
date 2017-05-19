#include <iostream>
 
int main()
{
    std::cout << "Input a keyboard character: "; // assume the user enters "abcd" (without quotes)
 
    char ch;
    std::cin >> ch; // ch = 'a', "bcd" is left queued.
    std::cout << ch << " has ASCII code " << static_cast<int>(ch) << std::endl;
 
    // Note: The following cin doesn't ask the user for input, it grabs queued input!
    std::cin >> ch; // ch = 'b', "cd" is left queued.
    std::cout << ch << " has ASCII code " << static_cast<int>(ch) << std::endl;
    
    return 0;
}