#pragma once

#include <iostream>
#include <string>

#include "argw.hpp"

namespace UC
{
    class input_data
    {
    public:
        input_data(std::istream &inputStream);
        input_data(char **argv, int argc);

        input_data() = delete;
        ~input_data() = default;

        input_data(const input_data&) = delete;

        input_data(input_data&&) = default;

        void get(char &ch);
        int peek();
        void putback(char ch);
        bool eof();

    private:
        std::istream *istr;
        ucargw::argv_wrapper args;
    };
}