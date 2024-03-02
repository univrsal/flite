target_sources(flite PRIVATE
    usenglish.h
    us_int_accent_cart.h
    us_int_tone_cart.h
    us_durz_cart.h
    us_ffeatures.h
    us_phrasing_cart.h
    us_text.h
    us_f0.h
    us_nums_cart.h
    us_regexes.h
    us_pos_cart.h
    us_int_accent_cart.c
    us_int_tone_cart.c
    us_f0_model.c
    us_dur_stats.c
    us_durz_cart.c
    us_f0lr.c
    us_phoneset.c
    us_ffeatures.c
    us_phrasing_cart.c
    us_gpos.c
    us_text.c
    us_expand.c
    us_nums_cart.c
    us_aswd.c
    usenglish.c
    us_pos_cart.c
)


target_include_directories(flite PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR})