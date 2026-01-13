# Anvil C++ Project

This is a C++ project built using [Anvil](https://github.com/AnvilBuild/Anvil), a modern build system for C++.

## Project Structure

*   `build.cpp`: The Anvil build script that defines how the project is built.
*   `src/main/main.cpp`: The main source file for the application.
*   `anvilw` / `anvilw.bat`: The Anvil wrapper scripts for easy execution of Anvil commands.

## Building the Project

To build this project, navigate to the root directory of the repository and run the Anvil wrapper script:

### Unix/Linux/macOS
```bash
./anvilw build
```

### Windows
```cmd
anvilw build
```

## Running the Project

To run the project, you can use the `run` command provided by the wrapper:

### Unix/Linux/macOS
```bash
./anvilw run
```

### Windows
```cmd
anvilw run
```
