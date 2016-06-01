#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"ace_interact_menu"};
        author = ECSTRING(common,ACETeam);
        authors[] = {"commy2", "KoffeinFlummi", "esteldunedain", "bux578", "dixon13"};
        PBO_URL;
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgVehicles.hpp"
#include "RscTitles.hpp"
#include "ACE_Settings.hpp"
#include "ACE_ZeusActions.hpp"