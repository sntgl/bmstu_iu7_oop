#include <set.h>

int main() {
    auto a = set<int>{1, 2, 3, 4, 5};

    auto b = set<int>(a);

    auto c = b;

    c.insert(10);

    return 0;
}
