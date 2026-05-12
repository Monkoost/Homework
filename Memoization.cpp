

#include <iostream>
#include <vector>

long long fib_memo(int n, std::vector<long long>& cache) {
    if (n <= 1) {
        return n;

    }
    if (cache[n] != -1)
    {
        return cache[n];
    }

    cache[n] = fib_memo(n - 1, cache) + fib_memo(n - 2, cache);
    
    return cache[n];
}
int count_paths(int m, int n, std::vector<std::vector<long long>>& paths) {
    if (m == 1 || n == 1) 
    {
		return 1;
    }
    if(paths[m][n] != -1)
    {
        return paths[m][n];
	}
    paths[m][n] = count_paths(m - 1, n, paths) + count_paths(m, n - 1, paths);
	return paths[m][n];

}


int main()
{
    int n = 50; // example
    std::vector<long long> cache(n + 1, -1);

    int m = 5, p = 5;
    std::vector<std::vector<long long>> paths(m+1, std::vector<long long>(p+1, -1));
    std::cout << "fib(" << n << ") = " << fib_memo(n, cache) << std::endl;
	std::cout << "Number of paths in a " << m << "x" << p << " grid: " << count_paths(m, p, paths) << std::endl;
    return 0;
}


