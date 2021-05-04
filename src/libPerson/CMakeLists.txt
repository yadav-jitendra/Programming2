add_library(Person Person.cpp Student.cpp)

target_include_directories(Person PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})