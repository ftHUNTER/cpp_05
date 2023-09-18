#include "Bureaucrat.hpp"

BURECURAT::BURECURAT() : name("reda")
{
    grade = 10;
}

BURECURAT::BURECURAT(int number)
{
    try
    {
        if (number < 1 || number > 150)
            throw (number);
        else
            this->grade = number;
    }
    catch(int num)
    {
        std::cout << "Access denied \n";
        std::cout << "error number : " << num << std::endl;
        std::cout << "the valu of grade now is 150" << std::endl;
        this->grade = 150;

    }
}

std::string BURECURAT::getName()
{
    return name;
}

int BURECURAT::getGrade()
{
    return grade;
}

void BURECURAT::GradeTooHighException()
{
    try
    {
        if (grade - 1 < 1)
            throw(grade);
    }
    catch (int nb)
    {
        std::cout << "Access denied \n";
        std::cout << "error number : " << nb - 1 << std::endl;
    }
}

void BURECURAT::GradeTooLowException()
{
    myexception ex;
    try
    {
        if (this->grade + 1 > 150)
            throw(ex);
        else
            this->grade += 1; 

    }
    catch (myexception& except) 
    { 
        std::cout << except.what() << std::endl; 
    } 
}