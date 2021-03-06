#ifndef GUARD_DECORATION_H
#define GUARD_DECORATION_H

enum DecoId {
    /*000*/ DECOR_NONE,
    /*001*/ DECOR_SMALL_DESK,
    /*002*/ DECOR_POKEMON_DESK,
    /*003*/ DECOR_HEAVY_DESK,
    /*004*/ DECOR_RAGGED_DESK,
    /*005*/ DECOR_COMFORT_DESK,
    /*006*/ DECOR_PRETTY_DESK,
    /*007*/ DECOR_BRICK_DESK,
    /*008*/ DECOR_CAMP_DESK,
    /*009*/ DECOR_HARD_DESK,
    /*010*/ DECOR_SMALL_CHAIR,
    /*011*/ DECOR_POKEMON_CHAIR,
    /*012*/ DECOR_HEAVY_CHAIR,
    /*013*/ DECOR_PRETTY_CHAIR,
    /*014*/ DECOR_COMFORT_CHAIR,
    /*015*/ DECOR_RAGGED_CHAIR,
    /*016*/ DECOR_BRICK_CHAIR,
    /*017*/ DECOR_CAMP_CHAIR,
    /*018*/ DECOR_HARD_CHAIR,
    /*019*/ DECOR_RED_PLANT,
    /*020*/ DECOR_TROPICAL_PLANT,
    /*021*/ DECOR_PRETTY_FLOWERS,
    /*022*/ DECOR_COLORFUL_PLANT,
    /*023*/ DECOR_BIG_PLANT,
    /*024*/ DECOR_GORGEOUS_PLANT,
    /*025*/ DECOR_RED_BRICK,
    /*026*/ DECOR_YELLOW_BRICK,
    /*027*/ DECOR_BLUE_BRICK,
    /*028*/ DECOR_RED_BALLOON,
    /*029*/ DECOR_BLUE_BALLOON,
    /*030*/ DECOR_YELLOW_BALLOON,
    /*031*/ DECOR_RED_TENT,
    /*032*/ DECOR_BLUE_TENT,
    /*033*/ DECOR_SOLID_BOARD,
    /*034*/ DECOR_SLIDE,
    /*035*/ DECOR_FENCE_LENGTH,
    /*036*/ DECOR_FENCE_WIDTH,
    /*037*/ DECOR_TIRE,
    /*038*/ DECOR_STAND,
    /*039*/ DECOR_MUD_BALL,
    /*040*/ DECOR_BREAKABLE_DOOR,
    /*041*/ DECOR_SAND_ORNAMENT,
    /*042*/ DECOR_SILVER_SHIELD,
    /*043*/ DECOR_GOLD_SHIELD,
    /*044*/ DECOR_GLASS_ORNAMENT,
    /*045*/ DECOR_TV,
    /*046*/ DECOR_ROUND_TV,
    /*047*/ DECOR_CUTE_TV,
    /*048*/ DECOR_GLITTER_MAT,
    /*049*/ DECOR_JUMP_MAT,
    /*050*/ DECOR_SPIN_MAT,
    /*051*/ DECOR_C_LOW_NOTE_MAT,
    /*052*/ DECOR_D_NOTE_MAT,
    /*053*/ DECOR_E_NOTE_MAT,
    /*054*/ DECOR_F_NOTE_MAT,
    /*055*/ DECOR_G_NOTE_MAT,
    /*056*/ DECOR_A_NOTE_MAT,
    /*057*/ DECOR_B_NOTE_MAT,
    /*058*/ DECOR_C_HIGH_NOTE_MAT,
    /*059*/ DECOR_SURF_MAT,
    /*060*/ DECOR_THUNDER_MAT,
    /*061*/ DECOR_FIRE_BLAST_MAT,
    /*062*/ DECOR_POWDER_SNOW_MAT,
    /*063*/ DECOR_ATTRACT_MAT,
    /*064*/ DECOR_FISSURE_MAT,
    /*065*/ DECOR_SPIKES_MAT,
    /*066*/ DECOR_BALL_POSTER,
    /*067*/ DECOR_GREEN_POSTER,
    /*068*/ DECOR_RED_POSTER,
    /*069*/ DECOR_BLUE_POSTER,
    /*070*/ DECOR_CUTE_POSTER,
    /*071*/ DECOR_PIKA_POSTER,
    /*072*/ DECOR_LONG_POSTER,
    /*073*/ DECOR_SEA_POSTER,
    /*074*/ DECOR_SKY_POSTER,
    /*075*/ DECOR_KISS_POSTER,
    /*076*/ DECOR_PICHU_DOLL,
    /*077*/ DECOR_PIKACHU_DOLL,
    /*078*/ DECOR_MARILL_DOLL,
    /*079*/ DECOR_TOGEPI_DOLL,
    /*080*/ DECOR_CYNDAQUIL_DOLL,
    /*081*/ DECOR_CHIKORITA_DOLL,
    /*082*/ DECOR_TOTODILE_DOLL,
    /*083*/ DECOR_JIGGLYPUFF_DOLL,
    /*084*/ DECOR_MEOWTH_DOLL,
    /*085*/ DECOR_CLEFAIRY_DOLL,
    /*086*/ DECOR_DITTO_DOLL,
    /*087*/ DECOR_SMOOCHUM_DOLL,
    /*088*/ DECOR_TREECKO_DOLL,
    /*089*/ DECOR_TORCHIC_DOLL,
    /*090*/ DECOR_MUDKIP_DOLL,
    /*091*/ DECOR_DUSKULL_DOLL,
    /*092*/ DECOR_WYNAUT_DOLL,
    /*093*/ DECOR_BALTOY_DOLL,
    /*094*/ DECOR_KECLEON_DOLL,
    /*095*/ DECOR_AZURILL_DOLL,
    /*096*/ DECOR_SKITTY_DOLL,
    /*097*/ DECOR_SWABLU_DOLL,
    /*098*/ DECOR_GULPIN_DOLL,
    /*099*/ DECOR_LOTAD_DOLL,
    /*100*/ DECOR_SEEDOT_DOLL,
    /*101*/ DECOR_PIKA_CUSHION,
    /*102*/ DECOR_ROUND_CUSHION,
    /*103*/ DECOR_KISS_CUSHION,
    /*104*/ DECOR_ZIGZAG_CUSHION,
    /*105*/ DECOR_SPIN_CUSHION,
    /*106*/ DECOR_DIAMOND_CUSHION,
    /*107*/ DECOR_BALL_CUSHION,
    /*108*/ DECOR_GRASS_CUSHION,
    /*109*/ DECOR_FIRE_CUSHION,
    /*110*/ DECOR_WATER_CUSHION,
    /*111*/ DECOR_SNORLAX_DOLL,
    /*112*/ DECOR_RHYDON_DOLL,
    /*113*/ DECOR_LAPRAS_DOLL,
    /*114*/ DECOR_VENUSAUR_DOLL,
    /*115*/ DECOR_CHARIZARD_DOLL,
    /*116*/ DECOR_BLASTOISE_DOLL,
    /*117*/ DECOR_WAILMER_DOLL,
    /*118*/ DECOR_REGIROCK_DOLL,
    /*119*/ DECOR_REGICE_DOLL,
    /*120*/ DECOR_REGISTEEL_DOLL
};

struct Decoration
{
    /*0x00*/ u8 id;
    /*0x01*/ u8 name[16];
    /*0x11*/ u8 permission;
    /*0x12*/ u8 shape;
    /*0x13*/ u8 category;
    /*0x14*/ u16 price;
    /*0x18*/ const u8 *description;
    /*0x1c*/ const u16 *tiles;
};

extern const struct Decoration gDecorations[];

#endif //GUARD_DECORATION_H
