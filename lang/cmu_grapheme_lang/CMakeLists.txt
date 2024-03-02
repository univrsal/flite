target_sources(flite PRIVATE 
       cmu_grapheme_lang.h
       cmu_grapheme_phrasing_cart.h
       cmu_grapheme_lang.c
       cmu_grapheme_phoneset.c
       cmu_grapheme_phrasing_cart.c
       graph_gpos.c
)
# Update this when Festvox's sampa.table is updated
# phoneset:
# 	./make_grapheme_phoneset

