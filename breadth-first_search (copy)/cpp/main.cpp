#include <iostream>
#include <unordered_map>
#include <string>
#include <vector>
#include <queue>
#include <memory>
#include <unordered_set>

#include "function.hxx"

using std::cout;
using std::endl;

class Stat
{
public:
    int c = 7;
    Stat() = default;
    static Stat& instance(){
        std::cout << "Instance singleton" << std::endl;
        static Stat inst;
        return inst;
    }
    ~Stat() = default;
};

// auto st = Stat::instance();
static int a = 5;
int d = 9;
int main() {
    std::cout << "Start main" << a << std::endl;
    // int32_t a = 0;
    auto aptr = std::make_shared<int>();
    // int d = 5;
    {
        {
            *aptr = 55;
            static int c = 4;
            std::cout << c << " - " << aptr << '\n';
            std::cout << Stat::instance().c << std::endl;
        }
    }
    Stat::instance().c = 19;
    std::cout << Stat::instance().c << std::endl;

    Figure fig{};

    Figure *circle = new Circle();
    fig.draw();
    circle->draw();

    return 0;
}