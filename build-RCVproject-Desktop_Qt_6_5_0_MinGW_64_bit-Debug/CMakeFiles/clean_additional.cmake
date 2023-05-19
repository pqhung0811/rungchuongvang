# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\RCVproject_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\RCVproject_autogen.dir\\ParseCache.txt"
  "RCVproject_autogen"
  )
endif()
