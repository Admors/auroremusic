/*
    @author Admors - Admors#5538 L
    @version 1.0
    @description This is a music pack for Arma 3, Please understand that the creation of this code took a long time. Please do not copy or modify it without the author’s permission.
*/

#include ".\defines.cpp"

class cfgPatches
{
    class AMP
    {
        author[] = {"Admors"};
        requiredAddons[] = {};
        requiredVersion = 1.0;
        units[] = {};
        weapons[] = {};
    };
};

class cfgMusicClasses
{
    class AMP_ATMOSPHERE
    {
        displayName = "AM - Atmosphere";
    };

    class AMP_STEALTHY
    {
        displayName = "AM - Stealthy";
    };

    class AMP_EPIC
    {
        displayName = "AM - Epic";
    };

    class AMP_MELODIOUS
    {
        displayName = "AM - Melodious";
    };

    class AMP_OTHERS
    {
        displayName = "AM - Others";
    };
};

class CfgMusic {
    #include ".\configs\atmosphere.cpp"
    #include ".\configs\stealthy.cpp"
    #include ".\configs\epic.cpp"
    #include ".\configs\melodious.cpp"
    #include ".\configs\others.cpp"
};
