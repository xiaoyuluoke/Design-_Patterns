cmake_minimum_required (VERSION 2.6)
    project (Sensor C)
    aux_source_directory(. srcs)
    add_executable(Sensor ${srcs})
