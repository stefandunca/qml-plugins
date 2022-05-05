target_sources(${PROJECT_NAME}
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/ChatModule.h

    PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/ChatPlugin.h
        ${CMAKE_CURRENT_SOURCE_DIR}/ChatPlugin.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/ChatModule.cpp

        ${CMAKE_CURRENT_SOURCE_DIR}/CMakeLists.txt
)
