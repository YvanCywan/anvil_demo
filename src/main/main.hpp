#pragma once

#include <iostream>
#include <vector>
#include <string>

namespace anvil {

class App {
public:
    static int run(int argc, char* argv[]) {
        std::vector<std::string> args(argv, argv + argc);
        if (args.size() > 1) {
            std::cerr << "Unknown command: " << args[1] << std::endl;
            return 1;
        }
        std::cout << "Hello, World!" << std::endl;
        return 0;
    }
};

}
