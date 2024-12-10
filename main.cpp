#include <iostream>
#include <fstream>
#include <string>
#include "tests/Tests.h"  // Подключаем заголовок с функцией isValidMacAddress
#include <gtest/gtest.h>

// Функция для проверки MAC-адресов в файле
void checkMacAddressesInFile(const std::string& filename) {
    std::ifstream file(filename);  // Открываем файл
    if (!file.is_open()) {
        std::cerr << "Error: Unable to open file " << filename << std::endl;
        return;
    }

    std::string line;
    int lineNumber = 1;

    std::cout << "Checking MAC addresses in file: " << filename << std::endl;

    // Читаем файл построчно
    while (std::getline(file, line)) {
        // Пропускаем пустые строки и комментарии
        if (line.empty() || line[0] == '#') {
            ++lineNumber;
            continue;
        }

        // Проверяем строку на валидность
        if (isValidMacAddress(line)) {
            std::cout << "Line " << lineNumber << ": VALID - " << line << std::endl;
        } else {
            std::cout << "Line " << lineNumber << ": INVALID - " << line << std::endl;
        }

        ++lineNumber;
    }

    file.close();  // Закрываем файл
}

int main(int argc, char** argv) {
    // Если передан аргумент "--test", запускаем тесты
    if (argc > 1 && std::string(argv[1]) == "--test") {
        std::cout << "Running tests..." << std::endl;
        ::testing::InitGoogleTest(&argc, argv);  // Инициализируем Google Test
        return RUN_ALL_TESTS();  // Выполняем все тесты
    }

    // Если передано имя файла, проверяем его
    if (argc > 1) {
        std::string filename = argv[1];
        checkMacAddressesInFile(filename);
    } else {
        std::cerr << "Usage:" << std::endl;
        std::cerr << argv[0] << " <filename>    # Check MAC addresses in a file" << std::endl;
        std::cerr << argv[0] << " --test        # Run tests" << std::endl;
    }

    return 0;
}
