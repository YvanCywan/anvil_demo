#include "anvil/test.hpp"
#include "main/main.hpp"
#include <vector>
#include <string>

class AppTests : public anvil::TestSuite {
public:
    void testNoArgs() {
        const int result = App::run();
        ANVIL_ASSERT_EQUALS(0, result);
    }
};

ANVIL_TEST(AppTests, testNoArgs)
