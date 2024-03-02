target_sources(flite PRIVATE
    voxdefs.h
    cmu_us_rms_cg_durmodel.h
    cmu_us_rms_cg_single_mcep_trees.h
    cmu_us_rms_cg_f0_trees.h
    cmu_us_rms_spamf0_accent.h
    cmu_us_rms_spamf0_phrase.h
    cmu_us_rms.c
    cmu_us_rms_cg_single_mcep_trees.c
    cmu_us_rms_cg.c
    cmu_us_rms_cg_single_params.c
    cmu_us_rms_cg_durmodel.c
    cmu_us_rms_cg_phonestate.c
    cmu_us_rms_cg_f0_trees.c
    cmu_us_rms_spamf0_accent_params.c
    cmu_us_rms_spamf0_phrase.c
    cmu_us_rms_spamf0_accent.c
)
