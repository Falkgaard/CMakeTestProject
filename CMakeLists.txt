cmake_minimum_required ( VERSION 3.21 FATAL_ERROR )

project (
	MyProject
	VERSION     1.0
	DESCRIPTION "Just a test."
	LANGUAGES   CXX
)

add_executable ( ${PROJECT_NAME} src/main.cc )

target_compile_features ( ${PROJECT_NAME} PUBLIC cxx_std_20 )

set( CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/cmake" ${CMAKE_MODULE_PATH} )
include ( cmake/CPM.cmake )
CPMAddPackage( "gh:Falkgaard/HeaderOnlyLibTest@0.1"  )
target_link_libraries      ( ${PROJECT_NAME} PUBLIC HeaderOnlyLibTest )
target_include_directories ( ${PROJECT_NAME} PUBLIC "${PROJECT_BINARY_DIR}" )
