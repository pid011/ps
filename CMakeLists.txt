cmake_minimum_required(VERSION 3.29)
project(process-scheduler LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED true)

file(GLOB APP_SOURCES boj/*.cpp)
foreach (testsourcefile ${APP_SOURCES})
    get_filename_component(testname ${testsourcefile} NAME_WE)
    message("${testname}")
    add_executable(${testname}.out ${testsourcefile})
endforeach (testsourcefile ${APP_SOURCES})