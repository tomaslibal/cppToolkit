file(GLOB bttraverse
  "../../depthfirstsearch/src/node.*"
  "./*"
  "../src/*"
)

add_executable(bttraverse ${bttraverse})
TARGET_LINK_LIBRARIES(bttraverse cppunit)
set_target_properties(bttraverse PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/dist/tests)
add_test(bttraverse_test ${PROJECT_SOURCE_DIR}/dist/tests/bttraverse)
