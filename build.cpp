#include "anvil/api.hpp"

void configure(anvil::Project& project) {
    project.name = "anvildemo";

    project.add_executable("anvil", [](anvil::CppApplication& app) {
        app.standard = anvil::CppStandard::CPP_20;

        app.add_source("src/main/main.cpp");
        app.set_compiler(anvil::CompilerId::GCC);

        app.add_include("src");
    });

    project.add_test("anvil_tests", [](anvil::CppApplication& app) {
        app.standard = anvil::CppStandard::CPP_20;
        app.add_source("src/test/test_main.cpp");
        app.add_include("src");
    });
}
