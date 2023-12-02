#include <fstream>
#include <string>
#include <regex>

int sum_of_numbers(std::string file_path) {
    std::ifstream file(file_path);
    std::string line;
    std::regex e("\\d+");
    int total_sum = 0;

    while (std::getline(file, line)) {
        auto begin = std::sregex_iterator(line.begin(), line.end(), e);
        auto end = std::sregex_iterator();

        if (begin != end) {
            std::string first_digit(1, (*begin).str()[0]);
            std::string last_digit(1, (*(--end)).str().back());
            total_sum += std::stoi(first_digit + last_digit);
        }
    }

    return total_sum;
}
