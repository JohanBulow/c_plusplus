#include <print>

class Bar
{
public:
	int _x;
	Bar(int x) : _x(x) {
		std::println("Bar {} constructor called", _x);
	}
	~Bar() {
		std::println("Bar {} destructor called", _x);
	};
};

// expects lvalue
void func(Bar &b) {
	std::println("func called with bar&");
}

// overload to use rvalue
void func(Bar &&b) {
        std::println("func called with bar&&");
}

int main()
{
	std::println("=== scope start");
	Bar b(1);
	func(b);
	func(Bar(2));
	std::println("=== scope end");
	return 0;
}
