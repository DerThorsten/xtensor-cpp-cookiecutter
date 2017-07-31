#-------------------------------------------------------------------------------------------------------------------
# Documentation
#-------------------------------------------------------------------------------------------------------------------
if(BUILD_DOCS)
    add_custom_target(doc )
    add_subdirectory(doxygen_doc)

    # install the documentation
    install(DIRECTORY "${CMAKE_BINARY_DIR}/docs"
        DESTINATION share/doc/{{cookiecutter.package_name}}
        PATTERN ".git" EXCLUDE PATTERN ".cmake" EXCLUDE
    )

endif()


