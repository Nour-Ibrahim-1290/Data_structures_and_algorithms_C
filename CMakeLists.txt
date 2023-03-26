cmake_minimum_required(VERSION 3.24)
project(Data_structures_and_algorithms_C C)

set(CMAKE_C_STANDARD 11)

include_directories(Strings)

add_executable(Data_structures_and_algorithms_C
        Data_Structures/1-Linked_Lists/linked_lists.c
        Data_Structures/1-Linked_Lists/test.c
        printf_project/implementation_3/conversion_specifier.c
        Recursion/Factorial_of_a_number.c
        Recursion/nth_number_Fibonacci.c
        Strings/1-memchr.c
        Strings/1-test.c
        Strings/2-memcmp.c
        Strings/2-test.c
        Strings/3-memcpy.c
        Strings/3-test.c
        Strings/4-memmove.c
        Strings/4-test.c
        Strings/5-memset.c
        Strings/5-test.c
        Strings/8-strchr.c
        Strings/8-test.c
        Strings/mystring.h)
