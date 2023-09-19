add_library(argparse
  EXCLUDE_FROM_ALL
    argument_parser.h
    argument_parser.cc
    argument.h
    argument.cc
)

target_include_directories(argparse PUBLIC ..)
