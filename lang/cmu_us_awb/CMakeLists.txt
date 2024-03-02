target_sources(flite PRIVATE
    voxdefs.h
    cmu_us_awb_cg_durmodel.h
    cmu_us_awb_cg_single_mcep_trees.h
    cmu_us_awb_cg_f0_trees.h
    cmu_us_awb_spamf0_accent.h
    cmu_us_awb_spamf0_phrase.h
    cmu_us_awb.c
    cmu_us_awb_cg_single_mcep_trees.c
    cmu_us_awb_cg.c
    cmu_us_awb_cg_single_params.c
    cmu_us_awb_cg_durmodel.c
    cmu_us_awb_cg_phonestate.c
    cmu_us_awb_cg_f0_trees.c
    cmu_us_awb_spamf0_accent_params.c
    cmu_us_awb_spamf0_phrase.c
    cmu_us_awb_spamf0_accent.c
)