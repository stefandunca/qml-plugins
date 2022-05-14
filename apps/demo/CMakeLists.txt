cmake_minimum_required(VERSION 3.19)

project(test-demo VERSION 0.1 LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 COMPONENTS Quick REQUIRED)
qt6_standard_project_setup()

add_executable(${PROJECT_NAME} "")

qt_add_qml_module(${PROJECT_NAME}
    URI demo.App
    VERSION 1.0
    # qt_target_qml_sources doesn't work in Qt6.3
    QML_FILES
        qml/main.qml
        qml/subdir/InAppQmlComponent.qml
)

add_subdirectory(src)
add_subdirectory(qml)

target_link_libraries(${PROJECT_NAME}
    PRIVATE
        Chat
        Transactions

        Qt6::Quick
)
