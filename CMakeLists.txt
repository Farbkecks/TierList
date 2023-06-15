cmake_minimum_required(VERSION 3.24)
project(TierList)
set(CMAKE_PREFIX_PATH C:/Qt/6.5.0/mingw_64/lib/cmake)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)


find_package(Qt6 COMPONENTS
        Core
        Gui
        Widgets
        REQUIRED)

add_subdirectory(src)

target_link_libraries(TierList
        Qt::Core
        Qt::Gui
        Qt::Widgets
        )
