# Anvil C++ Project

This is a C++ project built using [Anvil](https://github.com/AnvilBuild/Anvil), a modern build system for C++.

## Project Structure

*   `build.cpp`: The Anvil build script that defines how the project is built.
*   `src/main/main.cpp`: The main source file for the application.
*   `anvilw`: The Anvil wrapper script for easy execution of Anvil commands.

## Building the Project

To build this project, navigate to the root directory of the repository and run the Anvil wrapper script:

```bash
./anvilw build
```

This command will compile the `build.cpp` script, then use it to build the C++ application defined within.

## Running the Project

After a successful build, you can run the executable (named `anvil` by default, as defined in `build.cpp`) from the build output directory. The exact path will depend on your Anvil configuration, but typically it would be something like:
