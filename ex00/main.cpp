#include "ScalarConverte.hpp"

int main(int argc, char **argv) {
    if (argc == 2) {
        ScalarConverte::convert(argv[1]);
    } else {
        std::cout << "bad arguments" << std::endl;
    }
}