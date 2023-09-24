#include "Form.hpp"

Form::Form() : _name("")
{
	_sign = 0;
	_grad_to_sign = 150;
	_grad_to_executed = 150;
}


Form::Form(std::string name,int grad_to_sign, int grad_to_executed) : _name(name) 
{
	_sign = 0;
	if (grad_to_sign < 1)
		throw Form::GradeTooHighException();
	else if (grad_to_sign > 150)
		throw Form::GradeTooHighException();
	else
		_grad_to_sign = grad_to_sign;
	if (grad_to_executed < 1)
		throw Form::GradeTooHighException();
	else if (grad_to_executed > 150)
		throw Form::GradeTooHighException();
	else
	_grad_to_executed = grad_to_executed;
}

Form::Form(const Form& ref) : _name(ref._name)
{
	this->_grad_to_sign = ref._grad_to_sign;
	this->_grad_to_executed = ref._grad_to_executed;
}


Form& Form::operator=(const Form& ref)
{
	this->_grad_to_sign = ref._grad_to_sign;
	this->_grad_to_executed = ref._grad_to_executed;
	this->_sign = ref._sign;

	return (*this);
}


const std::string	Form::getName()
{
	return _name;
}
bool				Form::getSign()
{
	return _sign;
}
int					Form::getGradToSign()
{
	return _grad_to_sign;
}
int					Form::getGradToExecuted()
{
	return _grad_to_executed;
}

Form::~Form()
{

}

void	Form::beSigned(BURECURAT &tmp)
{
	if(_grad_to_sign > tmp.getGrade())
		throw Form::GradeTooLowException();
	else if(this->_sign == true)
		std::cout << "alredy signed\n";
	else
	{
		this->_sign = true;
	}
}

void				Form::setSign(bool x)
{
	this->_sign = x;
}

std::ostream &operator<<(std::ostream& out, Form& ref)
{
	out << "name: "<< ref.getName() << " sign: " << ref.getSign() << " GradToSign: " << ref.getGradToSign() << " GradToExecuted: " << ref.getGradToExecuted() << std::endl;
	return out; 
}

