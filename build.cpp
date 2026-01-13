#include "anvil/api.hpp"

void configure(anvil::Project& project) {
    project.name = "anvildemo";

    project.add_executable("anvil", [](anvil::CppApplication& app) {
    });

    project.add_test("anvil_tests", [](anvil::CppApplication& app) {
    });
}
