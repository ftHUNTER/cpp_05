#ifndef RO
#define RO
#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
    public :
       void execute(BURECURAT const & executor) const;
};

#endif