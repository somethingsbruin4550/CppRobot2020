#pragma once

#include <iostream>

namespace Logger
{
    template<typename T>
    void Info(T input)
    {
        std::cout << "[INFO]" << input << '\n';
    }

    template<typename T>
    void Info(T input, bool newLine)
    {
        std::cout << "[INFO]" << input << (newline) :  ? '\n';
    }

    template<typename T>
    void Debug(T input)
    {
        std::cout << "[DEBUG]" << input << '\n';
    }

    template<typename T>
    void Debug(T input, bool newLine)
    {
        std::cout << "[DEBUG]" << input << (newline) :  ? '\n';
    }
}