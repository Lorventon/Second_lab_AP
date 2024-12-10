#include <gtest/gtest.h>
#include "Tests.h"
#include <string>
#include <regex>

// Прототип функции
bool isValidMacAddress(const std::string& mac) {
    // Регулярное выражение для проверки только одного типа разделителя
    std::regex macRegex("^([0-9a-fA-F]{2}(:[0-9a-fA-F]{2}){5}|[0-9a-fA-F]{2}(-[0-9a-fA-F]{2}){5})$");
    return std::regex_match(mac, macRegex);
}

// Тест для проверки корректных MAC-адресов
TEST(MacAddressTest, ValidMacAddresses) {
EXPECT_TRUE(isValidMacAddress("00:14:22:01:23:45")); // Верный MAC-адрес с двоеточиями
EXPECT_TRUE(isValidMacAddress("00-14-22-01-23-45")); // Верный MAC-адрес с дефисами
EXPECT_TRUE(isValidMacAddress("AA:BB:CC:DD:EE:FF")); // Верхний регистр
EXPECT_TRUE(isValidMacAddress("aa:bb:cc:dd:ee:ff")); // Нижний регистр
}

// Тест для проверки некорректных MAC-адресов
TEST(MacAddressTest, InvalidMacAddresses) {
EXPECT_FALSE(isValidMacAddress("00:14:22:01:23"));     // Неполный MAC-адрес
EXPECT_FALSE(isValidMacAddress("00:14:22:01:23:4G"));  // Некорректный символ G
EXPECT_FALSE(isValidMacAddress("001422012345"));       // Без разделителей
EXPECT_FALSE(isValidMacAddress("00:14:22:01:23:45:67")); // Лишняя группа
}

// Тест для проверки граничных случаев
TEST(MacAddressTest, EdgeCases) {
EXPECT_FALSE(isValidMacAddress(""));                 // Пустая строка
EXPECT_FALSE(isValidMacAddress("00:"));              // Только начало
EXPECT_FALSE(isValidMacAddress("invalid"));          // Некорректная строка
EXPECT_FALSE(isValidMacAddress(":00:14:22:01:23:45")); // Лишний символ в начале
EXPECT_FALSE(isValidMacAddress("00-14-22-01:23-45")); // Смешанные разделители
}
