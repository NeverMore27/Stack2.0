#include "stack.hpp"
#include <iostream>
#include <string>

int main(void)
{

	stack<int> s;

	char operation;
	while (std::cin >> operation)
	{
		std::string val;
		switch (operation)
		{

		case'+':
			bool c_;
			c_ = true;
			std::cin >> val;
			for (int i; i<val.length(); i++) c_ = c_&isdigit(val[i]);
			if (!c_) std::cout << "An error has occurred while reading arguments" << std::endl; else
			{
				int val_ = atoi(val.c_str());;
				s.push(val_);
			}
			break;
		case'?':
			if (!s.count())
			{
				std::cout << "Stack is empty" << std::endl;
			}
			else
			{
				int val_ = 0;
				val_ = s.pop();
				s.push(val_);
				std::cout << val_ << std::endl;
			}
			break;
		case'-':
			if (!s.count()) {
				std::cout << "Stack is empty" << std::endl;
			}
			else {
				std::cout << s.pop() << std::endl;
			}
			break;

		case'=':
			if (!s.count())
			{
				std::cout << "Stack is empty" << std::endl;
			}
			else
			{
				stack<int> s_(s);
				size_t count = s.count();
				for (size_t i = 0; i < count; ++i) {
					std::cout << s.pop() << " ";
				}
				s = s_;
				std::cout << std::endl;
			}
			break;

		default:
			std::cout << "An error has occurred while reading arguments" << std::endl;
		}
	}
return 0;
}
