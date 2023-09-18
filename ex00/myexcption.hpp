#ifndef EX
#define EX

#include <exception> 

class myexception: public std::exception 
{ 
public : 
  virtual const char* what() const throw() 
  { 
    return "Custom Exception"; 
  } 
};

#endif