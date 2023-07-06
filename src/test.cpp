#include"log.h"
#include<iostream>
int main(){
    Logger::ptr logger(new Logger);
    logger->addAppender(LogAppender::ptr(new FileLogAppender("./test_log.log")));
    /*
    std::shared_ptr<Logger> logger, LogLevel::Level level
            ,const char* file, int32_t line, uint32_t elapse
            ,uint32_t thread_id, uint32_t fiber_id, uint64_t time
            ,const std::string& thread_name
    */

    LogEvent::ptr event(new LogEvent(__FILE__,__LINE__,0,1,2,time(0)));
    //event->format("sb up主啊");
    event->getSS()<<"sb up主啊";
    logger->log(LogLevel::DEBUG,event);

    event->getSS()<<"Second";
    logger->log(LogLevel::DEBUG,event);
    //std::cout<<"sb up主"<<std::endl;
    return  0;
}