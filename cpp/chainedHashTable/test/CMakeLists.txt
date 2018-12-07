file(GLOB hashtbl
  "./*"
  "../src/*"
  "../../doublyLinkedList/src/*"
)

add_executable(hashtbl ${hashtbl})
TARGET_LINK_LIBRARIES(hashtbl cppunit)
set_target_properties(hashtbl PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/dist/tests)
add_test(hashtbl_test ${PROJECT_SOURCE_DIR}/dist/tests/hashtbl)