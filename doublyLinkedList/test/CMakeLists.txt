file(GLOB dbllink
  "./*"
  "../src/*"
)

add_executable(dbllink ${dbllink})
TARGET_LINK_LIBRARIES(dbllink cppunit)
set_target_properties(dbllink PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/dist/tests)
add_test(dbllink_test ${PROJECT_SOURCE_DIR}/dist/tests/dbllink)