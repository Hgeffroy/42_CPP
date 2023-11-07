#ifndef INTERN_HPP
# define INTERN_HPP

# include "AForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class   Intern
{

public:
    Intern();
    ~Intern();
    Intern(Intern const& cpyFrom);

    Intern& operator=(Intern const& rightValue);

    AForm*    makeForm(std::string form, std::string target);

};

#endif