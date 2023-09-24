#ifndef BURECURAT_HHP
#define BURECURAT_HHP

#include <iostream>
#include <exception>
#include "AForm.hpp"

class AForm;

class BURECURAT
{
	private :
    	const std::string	name;
    	int					grade;
    public :
		BURECURAT();
		BURECURAT(int grade, std::string str);
		~BURECURAT();
		BURECURAT(BURECURAT &ref);
		BURECURAT& operator=(BURECURAT &ref);
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
        std::string getName() const;
        int getGrade()const;
		void	increment();
		void	decrement();
		void	signForm(AForm &tmp);
};

std::ostream	&operator<<(std::ostream& out, const BURECURAT& ref);


#endif