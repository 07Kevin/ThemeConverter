cmake_minimum_required(VERSION 3.20)

# ## Project setup
project(ThemeConverter VERSION 1.0.0  LANGUAGES C CXX )

# ## Global settings
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF) # Use standard C++, not compiler-specific flavors
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# ## Pathing
list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake")

# ## Compiler Specifics
if(MSVC)
    add_compile_definitions(NOMINMAX)
    add_compile_options(/W4 /permissive-) # High warning level + strict C++
else()
    add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# ## Diagnostic Output
message(STATUS "Project: ${PROJECT_NAME} v${PROJECT_VERSION}")
message(STATUS "Compiler ID: ${CMAKE_CXX_COMPILER_ID}")

# ## Subdirectories (Active targets only)
add_subdirectory("tests")
