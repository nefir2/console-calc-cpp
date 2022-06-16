#include "calc.h" //подключение файла заголовка для реализации метода класса.
/// <summary>
/// получение ответа от указанных действий в параметрах.
/// </summary>
/// <param name="left">первое число.</param>
/// <param name="sign">знак, действие которое надо произвести над числами.</param>
/// <param name="right">второе число.</param>
/// <returns>ответ типа double.</returns>
double calc::calcit(double left, char sign, double right) //реализация метода класса указанного в файле заголовка.
{
	switch (sign)
	{
		case '+':
			return left + right;
		case '-':
			return left - right;
		case '*':
			return left * right;
		case '/':
			return left / right;
		default:
			return 0.0; //если указанный знак в параметрах не совпал ни с одним, возврат 0.
	}
}