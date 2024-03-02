add_executable(flite_main flite_cli.c)
target_link_libraries(flite_main flite::flite)