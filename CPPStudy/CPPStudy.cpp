#include <iostream>
#include <vector>

#include "solution.h"

int main()
{
    solutions sol;

    std::vector<int> params = {2,7,11,15};

    const std::vector<int> result = sol.two_sum(params, 18);

    std::cout << "[" << result[0] << ", " << result[1] << "]" << '\n';
    
    return 0;
}

