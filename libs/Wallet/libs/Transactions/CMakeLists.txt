cmake_minimum_required(VERSION 3.19)

project(Transactions)

set(QT_NO_CREATE_VERSIONLESS_FUNCTIONS true)

find_package(Qt6 6.3 COMPONENTS Quick Qml REQUIRED)
qt6_standard_project_setup()

qt6_add_qml_module(${PROJECT_NAME}
    URI demo.Transactions
    VERSION 1.0
    OUTPUT_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
)

add_subdirectory(src)

target_link_libraries(${PROJECT_NAME}
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
