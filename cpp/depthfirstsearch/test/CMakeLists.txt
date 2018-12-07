file(GLOB dfs
  "./*"
  "../src/*"
)

add_executable(dfs ${dfs})
TARGET_LINK_LIBRARIES(dfs cppunit)
set_target_properties(dfs PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/dist/tests)
add_test(dfs_test ${PROJECT_SOURCE_DIR}/dist/tests/dfs)
