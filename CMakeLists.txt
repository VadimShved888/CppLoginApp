cmake_minimum_required(VERSION 3.10)
project(CppLoginApp)

set(CMAKE_CXX_STANDARD 17)

add_executable(CppLoginApp src/main.cpp)

# Add external libraries
include(FetchContent)
FetchContent_Declare(
  cpr
  GIT_REPOSITORY https://github.com/whoshuu/cpr.git
  GIT_TAG 1.9.0 # Use a stable release tag
)
FetchContent_MakeAvailable(cpr)

target_link_libraries(CppLoginApp PRIVATE cpr::cpr)

# Find and copy cpr.dll and libcurl-d.dll to the output directory
if(WIN32)
  # Set the variables for the paths to the DLLs
  set(CPR_DLL "${CMAKE_BINARY_DIR}/_deps/cpr-build/cpr/Debug/cpr.dll")
  set(CURL_DLL "${CMAKE_BINARY_DIR}/_deps/curl-build/lib/Debug/libcurl-d.dll")

  add_custom_command(TARGET CppLoginApp POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_if_different
    "${CPR_DLL}" "${CURL_DLL}"
    $<TARGET_FILE_DIR:CppLoginApp>
  )
endif()