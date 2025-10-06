#include <print>
#include <optional>

int maybe_square(int x)
{
	if (x % 2 == 0)
	{
		return x*x;
	}
	else
	{
		return -1;
	}
}

std::optional<int> maybe_square2(int x)
{
        if (x % 2 == 0)
        {
                return x*x;
        }
        else
        {
		return std::nullopt;
        }
}
int main()
{
	int foo = maybe_square(4);
	std::println("foo={}", foo);
	
	auto foo2 = maybe_square2(3);
	if (foo2.has_value())
		std::println("foo={}", foo2.value());
	else
		std::println("no value");
	// value_or(55)
	// auto foo = bar.transform([](int x){return -x;});
	// auto foo = bar.and_then([](int x){return std::optional {-x};});
	// auto foo = bar.or_else([]{return std::optional{42};});
	return 0;
}
