file(GLOB bfs
  "./*"
  "../src/*"
  "../../depthfirstsearch/src/node.cpp"
)

add_executable(bfs ${bfs})
TARGET_LINK_LIBRARIES(bfs cppunit)
set_target_properties(bfs PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/dist/tests)
add_test(bfs_test ${PROJECT_SOURCE_DIR}/dist/tests/bfs)
