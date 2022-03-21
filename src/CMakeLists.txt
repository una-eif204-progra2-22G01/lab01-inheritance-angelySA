set(BINARY ${CMAKE_PROJECT_NAME})
# add_executable(ExampleProject main.cpp file1.cpp file1.h)
file(GLOB_RECURSE SOURCES LIST_DIRECTORIES true *.h *.cpp) #simplification
set(SOURCES ${SOURCES})
add_executable(${BINARY}_run ${SOURCES})
add_library(${BINARY}_lib STATIC ${SOURCES} Base.cpp Base.h Derived1.cpp Derived1.h Derived2.cpp Derived2.h)