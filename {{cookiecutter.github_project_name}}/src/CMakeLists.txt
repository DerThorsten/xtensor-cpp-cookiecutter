#---------------------------------------
# test folder
#---------------------------------------
if(BUILD_TESTS)
    add_subdirectory(tests)
endif(BUILD_TESTS)

#---------------------------------------
# documentation folder
#---------------------------------------
if(BUILD_DOCS)
    add_subdirectory(docs)
endif(BUILD_DOCS)


#---------------------------------------
# examples folder
#---------------------------------------
if(BUILD_EXAMPLES)
    add_subdirectory(examples)
endif(BUILD_EXAMPLES)