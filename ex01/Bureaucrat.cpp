#include "Bureaucrat.hpp"

BURECURAT::BURECURAT() : name("")
{
    grade = 10;
}

BURECURAT::BURECURAT(int number, std::string str) : name(str)
{
    if (number < 1) 
	{
		throw BURECURAT::GradeTooHighException();
	}
	else if (number > 150)
	{
		throw BURECURAT::GradeTooLowException();
	}
    else
        this->grade = number;
}
std::string BURECURAT::getName() const
{
    return name;
}

int BURECURAT::getGrade() const
{
    return grade;
}

BURECURAT::~BURECURAT()
{

}

BURECURAT::BURECURAT(BURECURAT &ref) : name(ref.name)
{
	this->grade = ref.grade;
}

BURECURAT& BURECURAT::operator=(BURECURAT &ref)
{
	this->grade = ref.grade;
	return(*this);
}
std::ostream	&operator<<(std::ostream& out, const BURECURAT& ref)
{
	out << ref.getName() << ", bureaucrat grade " << ref.getGrade();
	return out;
}

void BURECURAT::increment()
{
	if (grade - 1 < 1)
		throw BURECURAT::GradeTooHighException();
	else 
		grade -= 1;
}

void BURECURAT::decrement()
{
	if (grade + 1 < 1)
		throw BURECURAT::GradeTooHighException();
	else 
		grade += 1;
}
void	BURECURAT::signForm(Form &tmp)
{
	if (this->grade >= tmp.getGradToSign() && tmp.getSign() == false)
	{
		tmp.setSign(true);
		std::cout << this->getName() << " signed " << tmp.getName() << std::endl;
	}
	else if (this->grade < tmp.getGradToSign() && tmp.getSign() == false)
	{
		std::cout << this->getName() << " couldn't sign " << tmp.getName() << " because grade too low" << std::endl;
	}
	else 
		std::cout << this->getName() << " couldn't sign " << tmp.getName() << " because it's already signed" << std::endl;


}