
set(TEST_SOURCES Tests.cpp
        Tests.h)


add_executable(run_tests ${TEST_SOURCES})


target_include_directories(run_tests PRIVATE ${CMAKE_SOURCE_DIR}/tests)


target_link_libraries(run_tests gtest gtest_main)

# Включаем поддержку тестирования
enable_testing()

# Регистрируем тесты
add_test(NAME RunAllTests COMMAND run_tests)
