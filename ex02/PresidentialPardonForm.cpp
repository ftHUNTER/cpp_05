#include "PresidentialPardonForm.hpp"

void PresidentialPardonForm::execute(BURECURAT const & executor) const
{
    if(this->getSign() == false)
        throw AForm::notSign();
    else if (executor.getGrade() <= 145)
        std::cout << "hh";//ppf_fun();
    else    
        throw AForm::GradeTooLowException();
}

PresidentialPardonForm::PresidentialPardonForm() : 
{

}