target_sources(${PROJECT_NAME}
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/Transaction.h

    PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/TransactionsPlugin.h
        ${CMAKE_CURRENT_SOURCE_DIR}/TransactionsPlugin.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/Transaction.cpp

        ${CMAKE_CURRENT_SOURCE_DIR}/CMakeLists.txt
)
