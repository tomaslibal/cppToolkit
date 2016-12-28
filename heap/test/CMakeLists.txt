file(GLOB heap
  "./*"
  "../src/*"
)

add_executable(heap ${heap})
TARGET_LINK_LIBRARIES(heap cppunit)
set_target_properties(heap PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/dist/tests)
add_test(heap_test ${PROJECT_SOURCE_DIR}/dist/tests/heap)
