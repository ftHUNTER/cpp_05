#include "Bureaucrat.hpp"

int main()
{
    BURECURAT a(151);
    a.GradeTooLowException();
    std::cout << a.getName() << std::endl;
}