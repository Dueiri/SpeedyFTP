cmake_minimum_required(VERSION 3.10)
project(SpeedyFTP)

# Set C++ standard to C++17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add the executable
add_executable(speedyftp src/main.cpp)

# Find the Asio library
# If you don't have Asio installed, you can get it from asio.dev
# or by using a package manager like vcpkg (vcpkg install asio).
find_package(asio REQUIRED)

# Link Asio to your executable
target_link_libraries(speedyftp PRIVATE asio::asio)
