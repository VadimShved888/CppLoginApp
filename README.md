# CppLoginApp

This is a simple console application that simulates a login request to http://testphp.vulnweb.com/login.php and displays the returned HTML page.

## Requirements

- CMake 3.10 or higher
- A C++17 compatible compiler
- Git

## Build and Run

1. Clone the repository:
    ```bash
    git clone https://github.com/VadimShved888/CppLoginApp
    cd CppLoginApp
    ```

2. Build the application:
    ```bash
    mkdir build
    cd build
    cmake ..
    cmake --build .
    ```

3. Run the application:
    ```bash
	cd Debug
    ./CppLoginApp
    ```

## License

This project is licensed under the MIT License.