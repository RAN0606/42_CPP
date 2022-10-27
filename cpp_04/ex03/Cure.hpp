#ifndef CURE_HPP
# define CURE_HPP
# include "AMateria.hpp"
class Cure : public AMateria{
    protected:

    public:
            Cure(std::string const & type);
            Cure(void);
            Cure(const Cure &copy);
            ~Cure (void);

            Cure &operator= (const Cure &assigne);
            
            AMateria* clone();
             void use(ICharacter& target);
};

#endif