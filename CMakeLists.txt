cmake_minimum_required(VERSION 3.23)
project(c_plus)

set(CMAKE_CXX_STANDARD 14)

add_executable(hello hello_cpp/hello.cpp)
add_executable(number_type data_type/number_type.cpp)
add_executable(type_conversion data_type/type_conversion.cpp)
add_executable(const_point data_type/const_point.cpp)