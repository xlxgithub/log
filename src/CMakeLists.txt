# g++ *.cpp -g -lpthread
#配置需要加载的cpp文件
aux_source_directory(. SRC_LIST)

add_executable(log ${SRC_LIST})

# 指定可执行文件链接时需要依赖的库文件
target_link_libraries(log pthread)
