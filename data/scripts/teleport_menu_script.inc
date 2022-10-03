TeleportMenu::
    lockall
    goto TP_Yes
    release
    end

TP_Yes::
    clearflag FLAG_SYS_ON_CYCLING_ROAD
    clearflag FLAG_SYS_RUN_SPEED_SLIDING
    fadescreen FADE_TO_BLACK
    special SetCB2WhiteOutTeleport
    waitstate
    release
    end

TP_No::
    release
    end

TP_NotYet::
    msgbox TP_NoText
    release
    end

TP_NoText::
	.string "You need to beat your\n"
	.string "rival for this to work.$"

DebugMenu::
    lock
    setflag FLAG_BADGE01_GET
    setflag FLAG_BADGE02_GET
    setflag FLAG_BADGE03_GET
    setflag FLAG_BADGE04_GET
    setflag FLAG_BADGE05_GET
    setflag FLAG_BADGE06_GET
    setflag FLAG_BADGE07_GET
    setflag FLAG_BADGE08_GET
    setflag FLAG_GOT_HM01
    setflag FLAG_GOT_HM02
    setflag FLAG_GOT_HM03
    setflag FLAG_GOT_HM04
    setflag FLAG_GOT_HM05
    setflag FLAG_GOT_HM06
    setflag FLAG_SYS_B_DASH
    setflag FLAG_WORLD_MAP_PALLET_TOWN
    setflag FLAG_WORLD_MAP_VIRIDIAN_CITY
    setflag FLAG_WORLD_MAP_PEWTER_CITY
    setflag FLAG_WORLD_MAP_CERULEAN_CITY
    setflag FLAG_WORLD_MAP_LAVENDER_TOWN
    setflag FLAG_WORLD_MAP_VERMILION_CITY
    setflag FLAG_WORLD_MAP_CELADON_CITY
    setflag FLAG_WORLD_MAP_FUCHSIA_CITY
    setflag FLAG_WORLD_MAP_CINNABAR_ISLAND
    setflag FLAG_WORLD_MAP_INDIGO_PLATEAU_EXTERIOR
    setflag FLAG_WORLD_MAP_SAFFRON_CITY
    givemon SPECIES_CHARIZARD, 100
    givemon SPECIES_BLASTOISE, 100
    givemon SPECIES_VENUSAUR, 100
    givemon SPECIES_IVYSAUR, 100
    givemon SPECIES_WARTORTLE, 100
    givemon SPECIES_CHARMELEON, 100
    giveitem ITEM_HM01
    giveitem ITEM_HM02
    giveitem ITEM_HM03
    giveitem ITEM_HM04
    giveitem ITEM_HM05
    giveitem ITEM_HM06
    release
    end
