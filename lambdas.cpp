#include <print>
#include <algorithm>
#include <vector>
#include <numeric>

// fancy name for anon funcs passed on stack.
int main()
{
	int foo = 42;
	auto f = [&foo](int y){
		return 32 + y + foo;
	};

        auto f2 = [&](int y){
                return y + foo;
        };

	int x = f(4);
	std::println("x={}", x);
	
	// copy everything in scope =, via references &
	int y = f2(6);
	std::println("x={}", y);


	std::vector xs{1, 2, 3, 4};
	std::transform(xs.begin(), xs.end(), xs.begin(), [](int x){return x*2;});
	
	int res = std::accumulate(xs.begin(), xs.end(), 0, [](int acc, int x){return acc + x;});
	
	for (int x : xs)
	{
		std::print("{}\n", x);
	}
	
	std::print("{}\n", res);
	return 0;
}
