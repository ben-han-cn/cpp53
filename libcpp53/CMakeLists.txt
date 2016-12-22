include_directories(../include)

file(GLOB_RECURSE CPP53_HEADERS ../*.h)

set(CPP53_SOURCES
  exceptions.cpp
  name.cpp
  labelsequence.cpp
)

add_library(cpp53 SHARED
    ${CPP53_HEADERS}
    ${CPP53_SOURCES}
)
