project(CppReflection)
cmake_minimum_required(VERSION 3.0.2)

set (CMAKE_CXX_STANDARD 11)

include_directories(
  ${CMAKE_CURRENT_SOURCE_DIR}
  ${CMAKE_CURRENT_SOURCE_DIR}/Model
)

set(hdrs
  ${CMAKE_CURRENT_SOURCE_DIR}/Model/IModel.hpp
  ${CMAKE_CURRENT_SOURCE_DIR}/Model/ModelFactory.hpp
  ${CMAKE_CURRENT_SOURCE_DIR}/Model/ProjectModel.hpp
  ${CMAKE_CURRENT_SOURCE_DIR}/Model/SensorModel.hpp
)

set(srcs
  ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/Model/IModel.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/Model/ModelFactory.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/Model/ProjectModel.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/Model/SensorModel.cpp
)

add_executable(${PROJECT_NAME} ${srcs} ${hdrs})
