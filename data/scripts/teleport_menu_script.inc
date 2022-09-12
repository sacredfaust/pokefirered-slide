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

