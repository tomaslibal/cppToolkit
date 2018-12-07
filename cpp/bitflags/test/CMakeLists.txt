file(GLOB bitflags
  "./*"
  "../src/*"
)

add_executable(bitflags ${bitflags})
TARGET_LINK_LIBRARIES(bitflags cppunit)
set_target_properties(bitflags PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/dist/tests)
add_test(bitflags_test ${PROJECT_SOURCE_DIR}/dist/tests/bitflags)