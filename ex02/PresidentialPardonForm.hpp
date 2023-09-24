#ifndef PR
#define PR

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
    public :
        PresidentialPardonForm();
        void execute(BURECURAT const & executor)const;
};

#endif