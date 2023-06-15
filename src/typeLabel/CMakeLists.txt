add_library(libTypeLabel
        TypeLabel.cpp
        )

target_link_libraries(libTypeLabel PRIVATE Qt6::Widgets)

target_include_directories(libTypeLabel PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})