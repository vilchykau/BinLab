file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/input.txt
        DESTINATION ${CMAKE_CURRENT_BINARY_DIR})

file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/input_d.txt
        DESTINATION ${CMAKE_CURRENT_BINARY_DIR})

add_subdirectory(Person)
add_subdirectory(Command)
add_subdirectory(Department)
add_subdirectory(BinaryTools)

add_executable(lab main.cpp)

target_link_libraries(lab PersonLib)
target_link_libraries(lab CommandLib)
target_link_libraries(lab DepartmentLib)
target_link_libraries(lab BinToolsLib)

target_link_libraries(CommandLib PersonLib)
target_link_libraries(CommandLib BinToolsLib)
target_link_libraries(CommandLib DepartmentLib)
