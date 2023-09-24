#include "AForm.hpp"

AForm::AForm() : _name("")
{
	_sign = 0;
	_grad_to_sign = 150;
	_grad_to_executed = 150;
}


AForm::AForm(std::string name,int grad_to_sign, int grad_to_executed) : _name(name) 
{
	_sign = 0;
	if (grad_to_sign < 1)
		throw AForm::GradeTooHighException();
	else if (grad_to_sign > 150)
		throw AForm::GradeTooHighException();
	else
		_grad_to_sign = grad_to_sign;
	if (grad_to_executed < 1)
		throw AForm::GradeTooHighException();
	else if (grad_to_executed > 150)
		throw AForm::GradeTooHighException();
	else
	_grad_to_executed = grad_to_executed;
}

AForm::AForm(const AForm& ref) : _name(ref._name)
{
	this->_grad_to_sign = ref._grad_to_sign;
	this->_grad_to_executed = ref._grad_to_executed;
}


AForm& AForm::operator=(const AForm& ref)
{
	this->_grad_to_sign = ref._grad_to_sign;
	this->_grad_to_executed = ref._grad_to_executed;
	this->_sign = ref._sign;

	return (*this);
}


const std::string	AForm::getName()
{
	return _name;
}
bool				AForm::getSign()
{
	return _sign;
}
int					AForm::getGradToSign()
{
	return _grad_to_sign;
}
int					AForm::getGradToExecuted()
{
	return _grad_to_executed;
}

AForm::~AForm()
{

}

void	AForm::beSigned(BURECURAT &tmp)
{
	if(_grad_to_sign > tmp.getGrade())
		throw AForm::GradeTooLowException();
	else if(this->_sign == true)
		std::cout << "alredy signed\n";
	else
	{
		this->_sign = true;
	}
}

void				AForm::setSign(bool x)
{
	this->_sign = x;
}

std::ostream &operator<<(std::ostream& out, AForm& ref)
{
	out << "name: "<< ref.getName() << " sign: " << ref.getSign() << " GradToSign: " << ref.getGradToSign() << " GradToExecuted: " << ref.getGradToExecuted() << std::endl;
	return out; 
}

