#include "RobotomyRequestForm.hpp"

void RobotomyRequestForm::execute(BURECURAT const & executor) const
{
    if(this->getSign() == false)
        throw AForm::notSign();
    else if (executor.getGrade() <= 145)
        std::cout << "hh";//rrf_fun();
    else    
        throw AForm::GradeTooLowException();
}