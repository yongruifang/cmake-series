include(AddCatch2)

add_executable(
  unit_tests
  test_calc.cpp
  test_run_app.cpp
)
target_link_libraries(
  unit_tests PRIVATE calculator run_app Catch2::Catch2WithMain
)
include(CTest)
include(Catch) # extras目录中的脚本，用于自动注册，提供catch_discover_tests方法
catch_discover_tests(unit_tests)