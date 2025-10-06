#include <print>
#include <thread>

struct Foo{
	std::string s;
	void hello() {std::println("hello {}", s); }
};

int main()
{
	auto f = [](int x, int &y){
		std::println("{} {} hello from thread", x, y);
	};

	int a = 24;
	std::thread t(f, 42, std::ref(a));
	// t.detach(); : if unable to join
	t.join();


	Foo foo{"asdasd"};
	std::thread t2(&Foo::hello, &foo);

	t2.join();
	return 0;
}
