class cfgVehicles {
    #include "CfgVehicles.hpp"
};
class cfgWeapons {
    #include "CfgWeapons.hpp"
};

class cfgFactionClasses
{
	class 22nd_battalion_odst_unit
	{
		displayName="22nd ODST Battalion";
		author="kripto202";
		priority=1;
		side=1;
		icon="\22_odst_units\odst_emblem.paa";
		primaryLanguage="EN";
	};
};
class cfgVehicleClasses
{
	class 22nd_Infantry_class
	{
		displayName="Infantry";
		author="kripto202";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
};
class cfgPatches
{
	class 22nd_odst_units
	{
		weapons[]=
		{
			"22nd_ODST_kripto202_uniform",
			"22nd_ODST_garrus_uniform",
			"22nd_ODST_lopez_uniform",
			"22nd_ODST_darren_uniform",
			"22nd_ODST_barkhorn_uniform",
			"22nd_ODST_litch_uniform",
			"22nd_ODST_dobson_uniform",
			"22nd_ODST_ginger_uniform",
			"22nd_ODST_default_uniform",
			"22nd_ODST_yunker_uniform",
			"OPTRE_UNSC_ODST_Helmet_22nd_kripto202_sniper",
			"OPTRE_UNSC_ODST_Helmet_22nd_garrus_comms",
			"OPTRE_UNSC_ODST_Helmet_22nd_lopez",
			"OPTRE_UNSC_ODST_Helmet_22nd_darren",
			"OPTRE_UNSC_ODST_Helmet_22nd_barkhorn",
			"OPTRE_UNSC_ODST_Helmet_22nd_litch",
			"OPTRE_UNSC_ODST_Helmet_22nd_dobson",
			"OPTRE_UNSC_ODST_Helmet_22nd_ginger",
			"OPTRE_UNSC_ODST_Helmet_22nd_default",
			"OPTRE_UNSC_ODST_Helmet_22nd_yunker",
			"OPTRE_UNSC_ODST_Helmet_22nd_kripto202_sniper_dp",
			"OPTRE_UNSC_ODST_Helmet_22nd_garrus_comms_dp",
			"OPTRE_UNSC_ODST_Helmet_22nd_lopez_dp",
			"OPTRE_UNSC_ODST_Helmet_22nd_darren_dp",
			"OPTRE_UNSC_ODST_Helmet_22nd_barkhorn_dp",
			"OPTRE_UNSC_ODST_Helmet_22nd_litch_dp",
			"OPTRE_UNSC_ODST_Helmet_22nd_dobson_dp",
			"OPTRE_UNSC_ODST_Helmet_22nd_ginger_dp",
			"OPTRE_UNSC_ODST_Helmet_22nd_default_dp",
			"OPTRE_UNSC_ODST_Helmet_22nd_yunker_dp",
			"22nd_odst_vest_kripto202",
			"22nd_odst_vest_garrus",
			"22nd_odst_vest_lopez",
			"22nd_odst_vest_darren",
			"22nd_odst_vest_barkhorn",
			"22nd_odst_vest_litch",
			"22nd_odst_vest_dobson",
			"22nd_odst_vest_ginger",
			"22nd_odst_vest_default",
			"22nd_odst_vest_yunker",
			"22nd_ODST_kripto202_winter_uniform",
			"22nd_ODST_garrus_winter_uniform",
			"22nd_ODST_lopez_winter_uniform",
			"22nd_ODST_darren_winter_uniform",
			"22nd_ODST_barkhorn_winter_uniform",
			"22nd_ODST_litch_winter_uniform",
			"22nd_ODST_dobson_winter_uniform",
			"22nd_ODST_ginger_winter_uniform",
			"22nd_ODST_default_winter_uniform",
			"22nd_ODST_yunker_winter_uniform",
			"22nd_ODST_default_red_uniform",
			"22nd_ODST_default_blue_uniform",
			"OPTRE_UNSC_ODST_Helmet_22nd_kripto202_sniper_winter",
			"OPTRE_UNSC_ODST_Helmet_22nd_garrus_comms_winter",
			"OPTRE_UNSC_ODST_Helmet_22nd_lopez_winter",
			"OPTRE_UNSC_ODST_Helmet_22nd_darren_winter",
			"OPTRE_UNSC_ODST_Helmet_22nd_barkhorn_winter",
			"OPTRE_UNSC_ODST_Helmet_22nd_litch_winter",
			"OPTRE_UNSC_ODST_Helmet_22nd_dobson_winter",
			"OPTRE_UNSC_ODST_Helmet_22nd_ginger_winter",
			"OPTRE_UNSC_ODST_Helmet_22nd_default_winter",
			"OPTRE_UNSC_ODST_Helmet_22nd_yunker_winter",
			"OPTRE_UNSC_ODST_Helmet_22nd_kripto202_sniper_winter_dp",
			"OPTRE_UNSC_ODST_Helmet_22nd_garrus_comms_winter_dp",
			"OPTRE_UNSC_ODST_Helmet_22nd_lopez_winter_dp",
			"OPTRE_UNSC_ODST_Helmet_22nd_darren_winter_dp",
			"OPTRE_UNSC_ODST_Helmet_22nd_barkhorn_winter_dp",
			"OPTRE_UNSC_ODST_Helmet_22nd_litch_winter_dp",
			"OPTRE_UNSC_ODST_Helmet_22nd_dobson_winter_dp",
			"OPTRE_UNSC_ODST_Helmet_22nd_ginger_winter_dp",
			"OPTRE_UNSC_ODST_Helmet_22nd_default_winter_dp",
			"OPTRE_UNSC_ODST_Helmet_22nd_yunker_winter_dp",
			"22nd_odst_vest_kripto202_winter",
			"22nd_odst_vest_garrus_winter",
			"22nd_odst_vest_lopez_winter",
			"22nd_odst_vest_darren_winter",
			"22nd_odst_vest_barkhorn_winter",
			"22nd_odst_vest_litch_winter",
			"22nd_odst_vest_dobson_winter",
			"22nd_odst_vest_ginger_winter",
			"22nd_odst_vest_default_winter",
			"22nd_odst_vest_yunker_winter"
		};
		units[]=
		{
			"OPTRE_UNSC_ODST_Soldier",
			"22nd_ODST_Soldier_Sniper",
			"22nd_odst_kripto202",
			"22nd_odst_garrus",
			"22nd_odst_lopez",
			"22nd_odst_darren",
			"22nd_odst_barkhorn",
			"22nd_odst_litch",
			"22nd_odst_dobson",
			"22nd_odst_ginger",
			"22nd_odst_default",
			"22nd_odst_yunker",
			"22nd_odst_red_default",
			"22nd_odst_blue_default",
			"22nd_odst_winter_kripto202",
			"22nd_odst_winter_garrus",
			"22nd_odst_winter_lopez",
			"22nd_odst_winter_darren",
			"22nd_odst_winter_barkhorn",
			"22nd_odst_winter_litch",
			"22nd_odst_winter_dobson",
			"22nd_odst_winter_ginger",
			"22nd_odst_winter_default",
			"22nd_odst_red_winter_default",
			"22nd_odst_blue_winter_default",
			"22nd_odst_winter_yunker"
		};
	};
};
class CfgGlasses
{
	class G_Diving;
	class ODST_helmet_goggles: G_Diving
	{
		scope=2;
		scopeArsenal=2;
		author="kripto202";
		displayName="[22ODST] Helmet Goggles";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"22_odst_units\data\shades_ca.paa"
		};
		model="\A3\characters_f\Heads\glasses\g_shades_black";
		picture="\A3\characters_f\data\ui\icon_g_shades_black_ca.paa";
		mass=0;
		mode=1;
		ACE_Overlay="-";
		ACE_OverlayCracked="-";
		ACE_Protection=1;
		ACE_Resistance=2;
		descriptionUSE="Used for ODST helmets only";
	};
};
class cfgMods
{
	author="kripto202";
	timepacked="1452292830";
};
class CfgWeaponHandling
{
	class SwayDistortion
	{
		decay = .1;
		gunnerCoef = .1;
		maximum = .1;
		rate = .1;
	};
	class sightAlignment
	{
		decay = 0.1;
		gunnerCoef = 0.2;
		maximum = 0.1;
		rate = 0.1;
	};
};