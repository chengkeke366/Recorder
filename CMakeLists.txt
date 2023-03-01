cmake_minimum_required(VERSION 3.21)
project(Recorder)

set(CMAKE_CXX_STANDARD 14)
#如果CMAKE_CXX_STANDARD_REQUIRED设置为True，则必须使用CMAKE_CXX_STANDARD指定的版本，
#如果CMAKE_CXX_STANDARD_REQUIRED设置为OFF则CMAKE_CXX_STANDARD指定版本的为首选版本，如果没有会使用上一版本。
set(CMAKE_CXX_STANDARD_REQUIRED ON) 

set(CMAKE_AUTOMOC ON) #自动预处理，生成Moc文件
set(CMAKE_AUTORCC ON) #自动用Rcc把资源文件生成.rcc文件
set(CMAKE_AUTOUIC ON) #自动用uic程序把ui文件转换为.h文件

include_directories(.)

# cmake 使用QT，参考：https://doc.qt.io/qt-5/cmake-get-started.html
find_package(Qt5 COMPONENTS  Widgets REQUIRED)

add_executable(Recorder
main.cpp mainform.cpp mainform.h mainform.ui Interface/ICapture.h Interface/IEventListen.h)
target_link_libraries(Recorder Qt5::Widgets)