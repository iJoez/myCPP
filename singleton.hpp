#include <iostream>
#include <string>


//In software engineering, the singleton pattern is a design pattern 
//that restricts the instantiation of a class to one object. This is 
//useful when exactly one object is needed to coordinate actions across 
//the system.

class Singleton {
private:
    // The reference of instance must:
    // 1. be static so that static getInstance() can access it.
    // 2. private that keep from being accessed outside of the class.
    static Singleton* _singleton;

public:
    // getInstance() must:
    // 1. public to outside.
    // 2. static so that is can be accessed without any instance.
    static Singleton* getInstance();

    void printSingleton(const std::string& arg);

private:
    Singleton(){};
};

