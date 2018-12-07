file(GLOB quicksort
  "./*"
  "../src/*"
)

add_executable(quicksort ${quicksort})
TARGET_LINK_LIBRARIES(quicksort cppunit)
set_target_properties(quicksort PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/dist/tests)
add_test(quicksort_test ${PROJECT_SOURCE_DIR}/dist/tests/quicksort)