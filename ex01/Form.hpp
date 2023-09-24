#ifndef FA
#define FA

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class BURECURAT;

class Form
{
	private :
		const std::string _name;
		bool _sign;
		int _grad_to_sign;
		int _grad_to_executed;
	public :
		Form();
		Form(std::string name,int grad_to_sign, int grad_to_executed);
		Form(const Form& ref);
		~Form();
		Form				&operator=(const Form& ref);
		const std::string	getName();
		bool				getSign();
		int					getGradToSign();
		int					getGradToExecuted();
		void				setSign(bool x);
		class GradeTooHighException : public std::exception
		{
			public:
				const char * what () const throw () 
				{
					return "High Exception";
				}
		};
		class GradeTooLowException : public std::exception
		{
			public:
				const char * what () const throw () 
				{
					return "Low Exception";
				}
		};

		void	beSigned(BURECURAT &tmp);
};

std::ostream &operator<<(std::ostream& out, Form& ref);

#endif