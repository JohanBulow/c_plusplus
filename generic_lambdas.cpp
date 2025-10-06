#include <print>
#include <vector>
#include <list>

int main()
{
	int foo = 42;
	float foo_f = 42.42;
	std::optional<float> o = 88.88;	
	auto f = [](auto x){return x.value()*2;};
	std::println("{}", f(o));

	std::vector v{1,2,3};
	std::list s{4, 5, 6};

	// lambdaception 
	auto f2 = [](auto& container)
	{
		std::transform(
			container.begin(),
			container.end(),
			container.begin(),
			[](int x){ return x*2;}		
		);
	};

	f2(v);
	f2(s);

	std::println("vector");
	for (int x : v)
		std::println("{}", x);
	std::println("list");
	for (int x : s)
		std::println("{}", x);

	
	// (lambda + auto) harder to enforce args to have same type
	float fii = 42;
	float fir = 24.24;

	auto f3 = [](auto x, auto y){
		return x + y;
	};

	auto r = f3(fii, fir);
	std::println("r={}", r);


	// can force to have same type at compile time (templates for your lambdas)
	//

        auto f4 = []<typename T>(T x, T y){
                return x + y;
        };

	// will only compile if fii and fir same type
	auto r2 = f4(fii, fir);
        std::println("r={}", r);
	return 0; 
}
