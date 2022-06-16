#include "calc.h" //����������� ����� ��������� ��� ���������� ������ ������.
/// <summary>
/// ��������� ������ �� ��������� �������� � ����������.
/// </summary>
/// <param name="left">������ �����.</param>
/// <param name="sign">����, �������� ������� ���� ���������� ��� �������.</param>
/// <param name="right">������ �����.</param>
/// <returns>����� ���� double.</returns>
double calc::calcit(double left, char sign, double right) //���������� ������ ������ ���������� � ����� ���������.
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
			return 0.0; //���� ��������� ���� � ���������� �� ������ �� � �����, ������� 0.
	}
}