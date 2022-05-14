target_include_directories(${PROJECT_NAME}
    #PRIVATE
    # TODO: Qt qt_add_qml_module includes files defined here in the executable linked with the library
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/Transactions

#    PUBLIC
#        ${CMAKE_CURRENT_SOURCE_DIR}
)

add_subdirectory(Transactions)
