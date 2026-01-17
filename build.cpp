#include "anvil/api.hpp"

namespace anvil {
    struct CppApplication;
}

void configure(anvil::Project& project) {
    project.name = "anvildemo";

    project.add_executable("anvil_demo", [](anvil::CppApplication& app) {
        app.add_dependency("fmt/12.1.0");
    });

    project.add_test("anvil_demo_test", [](anvil::CppApplication& app) {
    });
}
