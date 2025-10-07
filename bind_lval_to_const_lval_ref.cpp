#include <print>

void foo(const std::string &s)
{
	std::println("The size of s is {}", s.size());
}

int main()
{
	std::string s("hello");
	foo(s);

	// can only do if const & 
	foo("hello2");
	
	return 0;
}
