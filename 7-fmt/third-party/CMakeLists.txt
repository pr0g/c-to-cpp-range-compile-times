cmake_minimum_required(VERSION 3.15)

project(third-party)

include(ExternalProject)

ExternalProject_Add(
  fmt
  GIT_REPOSITORY https://github.com/fmtlib/fmt.git
  GIT_TAG 05e3a9233ac1dd0c2d9643e046dbb5f788c39f61
  INSTALL_DIR ${CMAKE_CURRENT_BINARY_DIR}
  CMAKE_ARGS -DCMAKE_INSTALL_PREFIX=<INSTALL_DIR>)
