add_library(libMainWindow
        MainWindow.cpp
        Constants.h
        ClickableLabel.cpp
        )

target_link_libraries(libMainWindow PRIVATE Qt6::Widgets libTypeLabel libFreeContent)

target_include_directories(libMainWindow PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})