cmake_minimum_required(VERSION 3.19)

project(Wallet)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

find_package(Qt6 COMPONENTS Quick Qml REQUIRED)

add_library(${PROJECT_NAME} SHARED "")

add_subdirectory(src)
add_subdirectory(qml)
add_subdirectory(libs)

target_link_libraries(${PROJECT_NAME}
    PUBLIC
        Transactions
    PRIVATE
        Qt6::Quick
        Qt6::Qml
)

# install the shared library
install(TARGETS ${PROJECT_NAME}
    DESTINATION
        ${libDir}
    COMPONENT
        libs
)
