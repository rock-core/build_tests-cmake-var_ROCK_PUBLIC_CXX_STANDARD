rock_library(var_ROCK_PUBLIC_CXX_STANDARD
    SOURCES Dummy.cpp
    HEADERS Dummy.hpp)

rock_executable(var_ROCK_PUBLIC_CXX_STANDARD_bin Main.cpp
    DEPS var_ROCK_PUBLIC_CXX_STANDARD)

