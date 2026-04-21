#ifndef LIBNOSTD_CORE_COMMON_HPP
#define LIBNOSTD_CORE_COMMON_HPP

/**
* @brief Basic math utils
**/

namespace math {

	/**
	* @brief    ¬ычисление квадрата числа
	* @details  ¬ысление через умнодение на самого себ€
	* param[in] num ¬ещественное число
	* @return   квадрат числа
	**/
	double square(double num);

	/**
	* @brief    Ѕыстрое (бинарное) возведение в целую степень
	* @details  ¬озведене числа в целую степень с абсолютной точностью.
	*			јлгоритм: возводим число в степень 1,2,...,2n, каждый раз пока степень не равно 0, сдвига€ на одн байт вправо.
	*			≈сли последний бит 1 (не равен 0), домножаем результат на base.
	* param[in] base основание. ¬ещественное число
	* param[in] exp. экспонента. неотрицательно длинное целое
	* @return   чилсо, возведенное в степень \f$ {base}^{exp} \f$.
	**/
	double fast_power(double base, insigned long long exp);
	
}


#endif