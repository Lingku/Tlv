cmake_minimum_required(VERSION 3.6)
project(Tlv)

#include(ExternalProject)
#
#set(EXTERNAL_INSTALL_LOCATION ${CMAKE_BINARY_DIR}/external)
#
#ExternalProject_Add(googletest
#        GIT_REPOSITORY https://github.com/google/googletest
#        CMAKE_ARGS -DCMAKE_INSTALL_PREFIX=${EXTERNAL_INSTALL_LOCATION}
#        )



add_subdirectory (TlvCore)
add_subdirectory (Demo)