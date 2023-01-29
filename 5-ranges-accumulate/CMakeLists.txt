cmake_minimum_required(VERSION 3.15)

include(FetchContent)

FetchContent_Declare(
  range-v3
  GIT_REPOSITORY https://github.com/ericniebler/range-v3.git
  GIT_TAG 4624c63972c6f2c2871c7b87813c42048ddb80ad)

FetchContent_MakeAvailable(range-v3)

project(5-ranges-accumulate)
add_executable(${PROJECT_NAME})
target_sources(${PROJECT_NAME} PRIVATE main.cpp)
target_compile_features(${PROJECT_NAME} PRIVATE cxx_std_20)
target_link_libraries(${PROJECT_NAME} PRIVATE range-v3)
