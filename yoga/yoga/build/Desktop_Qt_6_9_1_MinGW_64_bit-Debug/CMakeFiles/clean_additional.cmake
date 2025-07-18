# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\periodcarefinal_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\periodcarefinal_autogen.dir\\ParseCache.txt"
  "periodcarefinal_autogen"
  )
endif()
