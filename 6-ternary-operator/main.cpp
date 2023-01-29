#include "stdio.h"
#include <ranges>
#include <numeric>
#include <range/v3/all.hpp>

namespace rv = std::views;

int calculate(int bottom, int top) {
    return top <= bottom ? 0 :
        ranges::accumulate(
            rv::iota(bottom, top + 1) |
            rv::filter([](auto e) { return e % 2 == 0; }), 0);
}

int main() {
    printf("%i\n", calculate(5, 12));  // 36
    printf("%i\n", calculate(5, 3));   // 0
    return 0;
}
