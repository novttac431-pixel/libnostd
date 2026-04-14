#ifndef LIBNOSTD_CORE_COMMON_HPP
#define LIBNOSTD_CORE_COMMON_HPP
#include <string>

namespace cs {

	std::string << dec2hex(unsigned int decimal);

	insigned int hex2dec(const std::string& hexademal);

}

#endif