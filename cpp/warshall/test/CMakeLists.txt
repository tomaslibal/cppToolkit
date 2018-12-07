file(GLOB heap
  "./*"
  "../src/*",
  "../../graph/src/adjm.h"
)

add_executable(warshall ${heap})
TARGET_LINK_LIBRARIES(warshall cppunit)
set_target_properties(warshall PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/dist/tests)
add_test(warshall_test ${PROJECT_SOURCE_DIR}/dist/tests/warshall)
