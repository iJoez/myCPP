#include "singleton.hpp"

// The instance must be initialized in .cpp file.
Singleton* Singleton::_singleton = NULL;

void Singleton::printSingleton(const std::string& str)
{
    std::cout << "Get " << str << std::endl;
}

// If no instance exists, new one ...
Singleton* Singleton::getInstance()
{
    if (_singleton == NULL)
    {
        std::cout << "No instance of Singleton, new one now..." << std::endl;
        _singleton = new Singleton();
    }
    return _singleton;
}



