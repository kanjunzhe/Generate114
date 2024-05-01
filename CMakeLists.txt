cmake_minimum_required(VERSION 3.10)

project(Generate114)

set(CMAKE_CXX_STANDARD 17)

# debug
set(CMAKE_BUILD_TYPE Debug)

include_directories(include)

file(GLOB_RECURSE SOURCES ${PROJECT_SOURCE_DIR}/src/*.cpp)

# generate shared library
add_library(${PROJECT_NAME} SHARED ${SOURCES})

# install
set(CMAKE_INSTALL_PREFIX ${PROJECT_SOURCE_DIR}/install)
install(TARGETS ${PROJECT_NAME} DESTINATION lib)
install(FILES ${PROJECT_SOURCE_DIR}/include/Generate114.h DESTINATION include)
install(FILES ${PROJECT_SOURCE_DIR}/include/transform.h DESTINATION include)
install(FILES ${PROJECT_SOURCE_DIR}/include/visit.h DESTINATION include)

# generate executable
add_executable(Generater114 ${PROJECT_SOURCE_DIR}/main.cpp)

# link
target_link_libraries(Generater114 ${PROJECT_NAME})