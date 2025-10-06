#include <print>
#include <string>
#include <tuple>

std::tuple<int, int, int> getInts()
{
	return {1, 2, 3};
}

int main()
{
	std::pair<int, std::string> p{42, "HELLO"};
	std::println("{} {}", p.first, p.second);

	std::tuple<int, std::string, float> t{42, "HEKI", 1.12};
	
	std::println("{} {} {}", std::get<0>(t), std::get<1>(t), std::get<2>(t));

	// get value from tuple	
	auto [x, s, y] = t;
	auto t2 = getInts();	
	
	auto t3 = std::tuple_cat(t, t2);
	return 0;
}
