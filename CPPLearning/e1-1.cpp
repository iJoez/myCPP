#include <iostream>
#include <string>

int main()
{
    const std::string hello = "Hello";
    const std::string message = hello + ", world" + "!";

    const std::string exclam = "!";
    const std::string message1 = "Hello" + " *" + exclam;

    std::cout << hello << std::endl;
    std::cout << message << std::endl;

    std::cout << exclam << std::endl;
    std::cout << message1 << std::endl;

    return 0;
}
