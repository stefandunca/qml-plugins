set(QML_IMPORT_PATH ${CMAKE_CURRENT_SOURCE_DIR};${QML_IMPORT_PATH} CACHE STRING "Extra qml import paths for QtCreator" FORCE)
list(REMOVE_DUPLICATES QML_IMPORT_PATH)

target_sources(${PROJECT_NAME}
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/Transactions-qml.qrc

    PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/CMakeLists.txt
)
