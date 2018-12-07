file(GLOB globedist
  "./*"
  "../src/*"
)

add_executable(globedist ${globedist})
TARGET_LINK_LIBRARIES(globedist cppunit)
set_target_properties(globedist PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/dist/tests)
add_test(globedist_test ${PROJECT_SOURCE_DIR}/dist/tests/globedist)
