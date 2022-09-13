TeleportMenu::
    lockall
    yesnobox 0, 0
    switch VAR_RESULT
    case 1, TP_Yes
    case 0, TP_No
    release
    end

TP_Yes::
    fadescreen FADE_TO_BLACK
    special SetCB2WhiteOut
    waitstate
    release
    end

TP_No::
    release
    end

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
    setflag FLAG_GOT_HM02
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
    givemon SPECIES_PIDGEOT, 80
    giveitem ITEM_HM02
    release
    end
