#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include "Data.hpp"
# include <stdint.h>
# include <iostream>

class	Serializer
{

public:

	static uintptr_t	serialize(struct Data* ptr);
	static Data*		deserialize(uintptr_t raw);

};

#endif