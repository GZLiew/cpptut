cmake_minimum_required (VERSION 3.5)

project (HelloWorld)

set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Werror -std=c++17")
set (source_dir "${PROJECT_SOURCE_DIR}/src/")
set (headers_dir "${PROJECT_SOURCE_DIR}/headers/")

# tell the complier which files to compile
file (GLOB source_files "${source_dir}/*.cpp")
file (GLOB header_files "${headers_dir}/*.h")

include_directories(${headers_dir})

add_executable (HelloWorld 
  ${source_files}
  ${headers_dir}
)


