#ifndef LIBNOSTD_CORE_COMMON_HPP
#define LIBNOSTD_CORE_COMMON_HPP
#include <string>

/**
* @brief Basic computer scinec utils
**/

namespace cs {
	/**
	* @brief    Преобразует целое (беззнаковое) десятичное в 16-ричное
	* 
	* param[in] decimal Целое десятичное число
	* 
	* @return   std:string Число в 16-ной системе счисления
	**/
	std::string << dec2hex(unsigned int decimal);

	/**
	* @brief    Преобразует из 16-ричной системы счисления в десятичное 
	*
	* param[in] hexademal Строка с числом в 16-ричной исистеме счисления
	*
	* @return   unsigned int Число в десятичной системе счисления
	**/
	insigned int hex2dec(const std::string& hexademal);

}

#endif