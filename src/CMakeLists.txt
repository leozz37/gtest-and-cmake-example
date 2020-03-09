add_library(MathExample)

target_sources(MathExample
    PRIVATE
        Math.cpp
    PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}/Math.hpp
    )

target_include_directories(MathExample
    PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}
    )
