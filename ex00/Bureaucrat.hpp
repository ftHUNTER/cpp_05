#ifndef BURECURAT_HHP
#define BURECURAT_HHP

#include <iostream>
#include "myexcption.hpp"

class BURECURAT
{
	private :
    	const std::string	name;
    	int					grade;
    public :
		BURECURAT();
		BURECURAT(int grade);
		// ~BURECURAT();
		// BURECURAT& BURECURAT(BURECURAT &ref);
		// BURECURAT& operator=(BURECURAT &ref);
		void GradeTooHighException();
		void GradeTooLowException();
        std::string getName();
        int getGrade();

};


#endif