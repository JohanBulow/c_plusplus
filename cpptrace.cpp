#include <print>
//#include <cpptrace/cpptrace.hpp>
// no .deb available. Build from source if you wanna try it. 
void bar()
{
	std::println("{}:{}", __FILE__, __LINE__);
}

void foo() {bar();}

int main()
{
	foo();
	return 0;
}
