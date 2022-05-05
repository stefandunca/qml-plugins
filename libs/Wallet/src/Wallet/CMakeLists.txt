target_sources(${PROJECT_NAME}
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/WalletModule.h

    PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/WalletPlugin.h
        ${CMAKE_CURRENT_SOURCE_DIR}/WalletPlugin.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/WalletModule.cpp

        ${CMAKE_CURRENT_SOURCE_DIR}/CMakeLists.txt
)
