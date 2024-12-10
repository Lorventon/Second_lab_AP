# Указываем файлы с тестами
set(TEST_SOURCES Tests.cpp
        Tests.h)

# Создаем исполняемый файл для тестов
add_executable(run_tests ${TEST_SOURCES})

# Подключаем заголовочные файлы, если они находятся в отдельной папке
target_include_directories(run_tests PRIVATE ${CMAKE_SOURCE_DIR}/tests)

# Линкуем тесты с Google Test
target_link_libraries(run_tests gtest gtest_main)

# Включаем поддержку тестирования
enable_testing()

# Регистрируем тесты
add_test(NAME RunAllTests COMMAND run_tests)
