# CMake generated Testfile for 
# Source directory: C:/Users/Lorventon/CLionProjects/second_lab_AP/tests
# Build directory: C:/Users/Lorventon/CLionProjects/second_lab_AP/build/tests
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
if(CTEST_CONFIGURATION_TYPE MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
  add_test([=[RunAllTests]=] "C:/Users/Lorventon/CLionProjects/second_lab_AP/build/tests/Debug/run_tests.exe")
  set_tests_properties([=[RunAllTests]=] PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/Lorventon/CLionProjects/second_lab_AP/tests/CMakeLists.txt;18;add_test;C:/Users/Lorventon/CLionProjects/second_lab_AP/tests/CMakeLists.txt;0;")
elseif(CTEST_CONFIGURATION_TYPE MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
  add_test([=[RunAllTests]=] "C:/Users/Lorventon/CLionProjects/second_lab_AP/build/tests/Release/run_tests.exe")
  set_tests_properties([=[RunAllTests]=] PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/Lorventon/CLionProjects/second_lab_AP/tests/CMakeLists.txt;18;add_test;C:/Users/Lorventon/CLionProjects/second_lab_AP/tests/CMakeLists.txt;0;")
elseif(CTEST_CONFIGURATION_TYPE MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
  add_test([=[RunAllTests]=] "C:/Users/Lorventon/CLionProjects/second_lab_AP/build/tests/MinSizeRel/run_tests.exe")
  set_tests_properties([=[RunAllTests]=] PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/Lorventon/CLionProjects/second_lab_AP/tests/CMakeLists.txt;18;add_test;C:/Users/Lorventon/CLionProjects/second_lab_AP/tests/CMakeLists.txt;0;")
elseif(CTEST_CONFIGURATION_TYPE MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
  add_test([=[RunAllTests]=] "C:/Users/Lorventon/CLionProjects/second_lab_AP/build/tests/RelWithDebInfo/run_tests.exe")
  set_tests_properties([=[RunAllTests]=] PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/Lorventon/CLionProjects/second_lab_AP/tests/CMakeLists.txt;18;add_test;C:/Users/Lorventon/CLionProjects/second_lab_AP/tests/CMakeLists.txt;0;")
else()
  add_test([=[RunAllTests]=] NOT_AVAILABLE)
endif()
