
function(make_test name)
    add_executable(${name} ${name}.cpp)
    add_test(NAME ${name} COMMAND ${name})
    target_include_directories(${name} PRIVATE "${CMAKE_SOURCE_DIR}/include")
    target_link_libraries(${name} PRIVATE Catch2::Catch2)
endfunction()

make_test(test_exercise1)
make_test(test_exercise2)
make_test(test_exercise3)
target_link_libraries(test_exercise3 PRIVATE ais1002_lib)
