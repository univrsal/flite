target_sources(flite PRIVATE
    au_command.c
    au_none.c
    au_streaming.c
    auclient.c
    audio.c
    auserver.c
    native_audio.h
)

if(MSVC)
    target_sources(flite PRIVATE
        au_win.c
    )
else()
    # idk if any of these even work
    if (FLITE_WITH_OSS)
        target_sources(flite PRIVATE au_oss.c)
        find_library(OSS_LIBRARY NAMES ossaudio)
        target_link_libraries(flite PRIVATE ossaudio)
    endif()

    if (FLITE_WITH_ALSA)
        target_sources(flite PRIVATE au_alsa.c)
        find_library(ALSA_LIBRARY NAMES asound)
        target_link_libraries(flite PRIVATE asound)
    endif()

    if (FLITE_WITH_PULSEAUDIO)
        target_sources(flite PRIVATE au_pulseaudio.c)
        find_library(PULSEAUDIO_LIBRARY NAMES pulse)
        target_link_libraries(flite PRIVATE pulse)
    endif()

endif()