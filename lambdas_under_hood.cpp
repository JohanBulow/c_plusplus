#include <print>

int main()
{
	int a = 42;
	auto foo =[a]{
		std::println("{} hello from foo", a);
	};

	foo();
	
	class barLambda{
	public: 	
		void operator()() const { std::println("hello from bar");}
	};

	barLambda bar;
	bar();
	return 0;
}
