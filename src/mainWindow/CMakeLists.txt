add_library(libMainWindow
        MainWindow.cpp
        )

target_link_libraries(libMainWindow PRIVATE Qt6::Widgets)

target_include_directories(libMainWindow PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})