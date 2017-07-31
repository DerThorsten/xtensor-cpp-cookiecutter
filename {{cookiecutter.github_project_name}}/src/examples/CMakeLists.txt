file(GLOB files "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp")
#set(validator ${CMAKE_CURRENT_SOURCE_DIR}/validator)
#set(i 0)
foreach(example_filename_with_dir ${files})

    get_filename_component(example_filename ${example_filename_with_dir} NAME)

    # file to 
    string(REGEX REPLACE "\\.[^.]*$" "" example_target_name ${example_filename})

    add_executable(${example_target_name} ${example_filename})

    # add dependencies 
    add_dependencies(${example_target_name} 
        externl_headers 
    )

    #math(EXPR i "${i} + 1")
endforeach()