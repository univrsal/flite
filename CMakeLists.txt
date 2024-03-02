cmake_minimum_required(VERSION 3.20)
project(flite VERSION 2.2.0)

option(FLITE_WITH_OSS "Enable OSS audio support" OFF)
option(FLITE_WITH_ALSA "Enable ALSA audio support" OFF)
option(FLITE_WITH_PULSEAUDIO "Enable PulseAudio audio support" OFF)

add_library(flite STATIC)
add_library(flite::flite ALIAS flite)

target_link_libraries(flite PUBLIC m)

target_include_directories(flite PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
)

add_subdirectory(src)
add_subdirectory(example)
add_subdirectory(lang)

# create timestamp variable
string(TIMESTAMP BUILD_TIMESTAMP "%Y-%m-%d %H:%M:%S")
configure_file(src/flite_version.h.in ${CMAKE_SOURCE_DIR}/include/flite_version.h @ONLY)