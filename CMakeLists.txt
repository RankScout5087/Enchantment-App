cmake_minimum_required(VERSION 3.14.0)

project(server)

set(SOURCES
  src/main.c
  src/database.c
)

add_executable(server ${SOURCES})

find_package(SQLite3)
target_include_directories(server PRIVATE inc)
target_link_libraries(server PRIVATE ${SQLite3_LIBRARIES})

set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED ON)