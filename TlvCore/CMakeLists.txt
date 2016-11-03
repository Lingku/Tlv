set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
add_library (LibCore TlvCore.cpp tlv_core_wrapper.h tlv_core_wrapper.cpp)

target_include_directories (LibCore PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})