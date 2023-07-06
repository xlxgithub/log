#cmake最小版本
cmake_minimum_required(VERSION 3.0)
#项目名称
project(log)

# g++ *.cpp -g -lpthread

#设置编译选项
set(CMAKE_CXX_FLAGS ${CMAKE_CXX_FLAGS} -g)
# 配置最终的可执行文件输出的路径
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

#配置头文件路径
include_directories(${PROJECT_SOURCE_DIR}/include)

#加载子目录
add_subdirectory(src)