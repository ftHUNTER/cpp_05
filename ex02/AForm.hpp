#ifndef FA
#define FA

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class BURECURAT;

class AForm
{
	private :
		const std::string _name;
		bool _sign;
		int _grad_to_sign;
		int _grad_to_executed;
	public :
		AForm();
		AForm(std::string name,int grad_to_sign, int grad_to_executed);
		AForm(const AForm& ref);
		~AForm();
		AForm				&operator=(const AForm& ref);
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
		class notSign : public std::exception
		{
			public:
				const char * what () const throw () 
				{
					return "not sign Exception";
				}
		};

		void	beSigned(BURECURAT &tmp);
		virtual void execute(BURECURAT const & executor) const = 0;
};

std::ostream &operator<<(std::ostream& out, AForm& ref);

#endif