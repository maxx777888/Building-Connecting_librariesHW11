cmake_minimum_required (VERSION 3.22.0)

project (dynamicLibCMakeHW11.3main)
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON) 
add_library(leav SHARED Leaver.h Leaver.cpp)

add_executable (DinamicLibCMakeHW11.3 dynamicLibCMakeHW11.3main.cpp)
target_link_libraries(DinamicLibCMakeHW11.3 leav)
