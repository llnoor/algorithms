#include <iostream>

class Figure
{
public:
    virtual void draw() 
    {
        std::cout << "Figure base " << std::endl;
    }
    virtual ~Figure() = default;

};

class Circle : public Figure
{
public:
    void draw(){
        std::cout << "Circle base " << std::endl;
    }
};