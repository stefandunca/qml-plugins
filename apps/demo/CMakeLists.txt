cmake_minimum_required(VERSION 3.19)

project(test-demo VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 6.3 COMPONENTS Quick REQUIRED)
qt6_standard_project_setup()

qt6_add_executable(${PROJECT_NAME} "")

qt_add_qml_module(${PROJECT_NAME}
    URI demo.App
    VERSION 1.0
    # qt_target_qml_sources doesn't work in Qt6.3
    QML_FILES
        qml/main.qml
        qml/subdir/InAppQmlComponent.qml
        qml/demo/App/AppWindow.qml
)

# TODO: Qml fails importing demo.Chat with these target props
#set_target_properties(${PROJECT_NAME} PROPERTIES
#    MACOSX_BUNDLE_GUI_IDENTIFIER ${PROJECT_NAME}.dunca.dev
#    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
#    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
#    MACOSX_BUNDLE TRUE
#    WIN32_EXECUTABLE TRUE
#)

add_subdirectory(src)
add_subdirectory(qml)

target_link_libraries(${PROJECT_NAME}
    PRIVATE
        Chat
        Transactions

        Qt6::Quick
)
