file(GLOB rbtree
  "./*"
  "../src/*"
)

add_executable(rbtree ${rbtree})
TARGET_LINK_LIBRARIES(rbtree cppunit)
set_target_properties(rbtree PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/dist/tests)
add_test(rbtree_test ${PROJECT_SOURCE_DIR}/dist/tests/rbtree)
