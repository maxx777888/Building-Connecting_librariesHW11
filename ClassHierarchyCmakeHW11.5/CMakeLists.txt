cmake_minimum_required (VERSION 3.22.0)
set(PROJECT_NAME classHierarchyCmakeHW11.5main)
project (${PROJECT_NAME})
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON) 
set(LIBS_CPP EquilateralTriangle.cpp 
Figure.cpp 
IsoscelesTriangle.cpp 
Parallelogram.cpp 
Quadrangle.cpp 
RectangleF.cpp 
RectangleF.cpp 
Rhomb.cpp 
RightTriangle.cpp 
Square.cpp 
Triangle.cpp)
set(LIBS_HEADERS EquilateralTriangle.h 
Figure.h 
IsoscelesTriangle.h 
Parallelogram.h
Quadrangle.h 
RectangleF.h 
RectangleF.h
Rhomb.h 
RightTriangle.h
Square.h
Triangle.h)

add_library(figures SHARED ${LIBS_CPP} ${LIBS_HEADERS})

add_executable (${PROJECT_NAME} classHierarchyCmakeHW11.5main.cpp)
target_link_libraries(${PROJECT_NAME} figures)


