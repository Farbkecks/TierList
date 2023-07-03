add_library(libFreeContent
        FreeContent.cpp
        )

target_link_libraries(libFreeContent PRIVATE Qt6::Widgets)

target_include_directories(libFreeContent PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})