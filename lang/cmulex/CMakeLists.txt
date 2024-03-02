target_sources(flite PRIVATE
     cmu_lts_model.h
     cmu_lex.h
     cmu_lts_rules.c
     cmu_lts_model.c
     cmu_lex.c
     cmu_lex_entries.c
     cmu_lex_data.c cmu_postlex.c
     #cmu_lex_data_raw.c
     #cmu_lex_num_bytes.c
     #cmu_lex_phones_huff_table.c
     #cmu_lex_entries_huff_table.c
)

target_include_directories(flite PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR})