#include "file_utils.hpp"
#include <fstream>

bool file_exists(const std::string& filename) {
    std::ifstream file(filename);
    return file.good();
}
