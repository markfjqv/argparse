add_executable(argparse_unittests
  unittests.cc
)

target_link_libraries(argparse_unittests gtest_main argparse)
