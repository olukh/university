project(lab1_asd)
cmake_minimum_required(VERSION 3.12)   
option(BUILD_TESTS "Build test" ON)

add_executable(main main.cpp generator.cpp generator.h catch.hpp) 
# компилируем main.exe из cpp и h файлов (h,hpp для проверки изменений по дате файлов)

if(BUILD_TESTS)
  enable_testing()
  add_executable(test1 test.cpp generator.cpp generator.h catch.hpp) 
  # компилируем test1.exe
  add_test(test1 test1) 
#запускаем test1.exe как тестовую программу. Тест пройден, если она возвращает код 0.
endif()
