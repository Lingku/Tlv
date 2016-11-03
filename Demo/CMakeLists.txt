set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS}")
add_executable (coreDemo main.c)

# Link the executable to the Hello library. Since the Hello library has
# public include directories we will use those link directories when building
# helloDemo
target_link_libraries (coreDemo LINK_PUBLIC LibCore)