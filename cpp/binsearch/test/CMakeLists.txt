file(GLOB binsearch
  "./binsearch*"
  "../src/binsearch*"  
)

add_executable(binsearch ${binsearch})
TARGET_LINK_LIBRARIES(binsearch cppunit)
set_target_properties(binsearch PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/dist/tests)
add_test(binsearch_test ${PROJECT_SOURCE_DIR}/dist/tests/binsearch)

file(GLOB findpivot
  "./findpivot*"
  "../src/findpivot*"  
)

add_executable(findpivot ${findpivot})
TARGET_LINK_LIBRARIES(findpivot cppunit)
set_target_properties(findpivot PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/dist/tests)
add_test(findpivot_test ${PROJECT_SOURCE_DIR}/dist/tests/findpivot)
