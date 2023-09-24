#include "ShrubberyCreationForm.hpp"

void ShrubberyCreationForm::execute(BURECURAT const & executor) const
{
    if(this->getSign() == false)
        throw AForm::notSign();
    else if (executor.getGrade() <= 145)
        std::cout << "hh";//scf_fun();
    else    
        throw AForm::GradeTooLowException();
}