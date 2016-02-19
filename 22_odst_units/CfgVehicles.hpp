class OPTRE_UNSC_Army_Soldier_WDL;
class B_Soldier_F;
class B_Soldier_base_F;
class SoldierWB;
class CAManBase;
class Man;
class Land;
class AllVehicles;
class All;
class OPTRE_UNSC_Marine_Soldier;

////Units\\\\

class 22nd_odst_base: B_Soldier_F
{
	scope=0;
	scopeCurator=0;
	scopeArsenal = 0;
	displayName="-";
	camouflage = .7;
	sensitivity = 2.5;
	threat[] = {1,1,0.8};
	canDeactivateMines = true;
	engineer = true;
	icon="iconMan";
	faction="22nd_battalion_odst_unit";
	author="kripto202";
	uniformAccessories[]={};
	nakedUniform="U_BasicBody";
	backpack="OPTRE_ILCS_Rucksack_Black_Pouches";
	vehicleClass="22nd_Infantry_class";
	model="\OPTRE_UNSC_Units\ODST\uniform.p3d";
	identityTypes[]=
	{
		"LanguageENG_F",
		"Miller",
		"Kerry",
		"EPA_B_Northgate",
		"EPA_B_Hardy",
		"EPA_B_James",
		"EPA_B_McKay",
		"LanguageGRE_F",
		"Head_Greek",
		"Head_African",
		"Head_Euro",
		"Head_Asian",
		"Head_NATO",
		"G_IRAN_default"
	};
	weapons[]=
	{
		"OPTRE_MA5B_AC",
		"OPTRE_m6G",
		"Throw",
		"Put"
	};
	respawnWeapons[]=
	{
		"OPTRE_MA5B_AC",
		"OPTRE_M6G",
		"Throw",
		"Put"
	};
	magazines[]=
	{
		"OPTRE_60Rnd_762x51_Mag",
		"OPTRE_60Rnd_762x51_Mag",
		"OPTRE_60Rnd_762x51_Mag",
		"OPTRE_60Rnd_762x51_Mag",
		"OPTRE_60Rnd_762x51_Mag",
		"OPTRE_60Rnd_762x51_Mag",
		"OPTRE_M9_Frag",
		"OPTRE_M9_Frag",
		"OPTRE_M9_Frag",
		"OPTRE_M9_Frag",
		"OPTRE_M2_Smoke",
		"OPTRE_M2_Smoke",
		"OPTRE_M2_Smoke",
		"ACE_M84",
		"ACE_M84"
		
	};
	respawnMagazines[]=
	{
		"OPTRE_60Rnd_762x51_Mag",
		"OPTRE_60Rnd_762x51_Mag",
		"OPTRE_60Rnd_762x51_Mag",
		"OPTRE_60Rnd_762x51_Mag",
		"OPTRE_60Rnd_762x51_Mag",
		"OPTRE_60Rnd_762x51_Mag",
		"OPTRE_M9_Frag",
		"OPTRE_M9_Frag",
		"OPTRE_M9_Frag",
		"OPTRE_M9_Frag",
		"OPTRE_M2_Smoke",
		"OPTRE_M2_Smoke",
		"OPTRE_M2_Smoke",
		"ACE_M84",
		"ACE_M84"
	};
	items[]=
	{
		"ACE_CableTie",
		"ACE_CableTie",
		"ACE_CableTie",
		"ACE_CableTie",
		"ACE_MapTools",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_elasticBandage",
		"ACE_elasticBandage",
		"ACE_elasticBandage",
		"ACE_elasticBandage",
		"ACE_elasticBandage",
		"ACE_elasticBandage",
		"ACE_elasticBandage",
		"ACE_elasticBandage",
		"ACE_elasticBandage",
		"ACE_elasticBandage",
		"ACE_quikclot",
		"ACE_quikclot",
		"ACE_quikclot",
		"ACE_quikclot",
		"ACE_quikclot",
		"ACE_quikclot",
		"ACE_quikclot",
		"ACE_quikclot",
		"ACE_quikclot",
		"ACE_quikclot",
		"ACE_epinephrine",
		"ACE_epinephrine",
		"ACE_epinephrine",
		"ACE_epinephrine",
		"ACE_epinephrine",
		"ACE_morphine",
		"ACE_morphine",
		"ACE_morphine",
		"ACE_morphine",
		"ACE_morphine",
		"ACE_packingBandage",
		"ACE_packingBandage",
		"ACE_packingBandage",
		"ACE_packingBandage",
		"ACE_packingBandage",
		"ACE_packingBandage",
		"ACE_packingBandage",
		"ACE_packingBandage",
		"ACE_packingBandage",
		"ACE_packingBandage",
		"ACE_tourniquet",
		"ACE_tourniquet",
		"OPTRE_Biofoam"
	};
	respawnitems[]=
	{
		"ACE_CableTie",
		"ACE_CableTie",
		"ACE_CableTie",
		"ACE_CableTie",
		"ACE_MapTools",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_elasticBandage",
		"ACE_elasticBandage",
		"ACE_elasticBandage",
		"ACE_elasticBandage",
		"ACE_elasticBandage",
		"ACE_elasticBandage",
		"ACE_elasticBandage",
		"ACE_elasticBandage",
		"ACE_elasticBandage",
		"ACE_elasticBandage",
		"ACE_quikclot",
		"ACE_quikclot",
		"ACE_quikclot",
		"ACE_quikclot",
		"ACE_quikclot",
		"ACE_quikclot",
		"ACE_quikclot",
		"ACE_quikclot",
		"ACE_quikclot",
		"ACE_quikclot",
		"ACE_epinephrine",
		"ACE_epinephrine",
		"ACE_epinephrine",
		"ACE_epinephrine",
		"ACE_epinephrine",
		"ACE_morphine",
		"ACE_morphine",
		"ACE_morphine",
		"ACE_morphine",
		"ACE_morphine",
		"ACE_packingBandage",
		"ACE_packingBandage",
		"ACE_packingBandage",
		"ACE_packingBandage",
		"ACE_packingBandage",
		"ACE_packingBandage",
		"ACE_packingBandage",
		"ACE_packingBandage",
		"ACE_packingBandage",
		"ACE_packingBandage",
		"ACE_tourniquet",
		"ACE_tourniquet",
		"OPTRE_Biofoam"
	};
};

///kripto202\\\

class 22nd_odst_kripto202: 22nd_odst_base
{
	scope=2;
	scopeCurator=0;
	scopeArsenal = 2;
	displayName="[ODST] kripto202";
	author="kripto202";
	uniformClass="22nd_ODST_kripto202_uniform";
	model="\OPTRE_UNSC_Units\ODST\uniform.p3d";
	linkedItems[] = 
	{
		"OPTRE_UNSC_ODST_Helmet_22nd_kripto202_sniper",
		"22nd_odst_vest_kripto202",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"tf_anprc152",
		"ItemGPS",
		"ODST_helmet_goggles",
		"OPTRE_NVG"
	};
	respawnLinkedItems[] =
	{
		"OPTRE_UNSC_ODST_Helmet_22nd_kripto202_sniper",
		"22nd_odst_vest_kripto202",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"tf_anprc152",
		"ItemGPS",
		"ODST_helmet_goggles",
		"OPTRE_NVG"
	};
	hiddenSelections[]=
	{
		"camo1",
		"insignia",
		"clan",
		"attach_rightshoulder"
	};
	hiddenSelectionsTextures[]=
	{
		"22_odst_units\data\uniform\odst_kripto202_l0_armor.paa"
	};
};

class 22nd_odst_winter_kripto202: 22nd_odst_base
{
	scope=2;
	scopeCurator=0;
	scopeArsenal = 2;
	displayName="(winter) [ODST] kripto202";
	author="kripto202";
	uniformClass="22nd_ODST_kripto202_winter_uniform";
	model="\OPTRE_UNSC_Units\ODST\uniform.p3d";
	linkedItems[] = 
	{
		"OPTRE_UNSC_ODST_Helmet_22nd_kripto202_sniper_winter",
		"22nd_odst_vest_kripto202_winter",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"tf_anprc152",
		"ItemGPS",
		"ODST_helmet_goggles",
		"OPTRE_NVG"
	};
	respawnLinkedItems[] =
	{
		"OPTRE_UNSC_ODST_Helmet_22nd_kripto202_sniper_winter",
		"22nd_odst_vest_winter_kripto202",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"tf_anprc152",
		"ItemGPS",
		"ODST_helmet_goggles",
		"OPTRE_NVG"
	};
	hiddenSelections[]=
	{
		"camo1",
		"insignia",
		"clan",
		"attach_rightshoulder"
	};
	hiddenSelectionsTextures[]=
	{
		"22_odst_units\data\uniform\odst_kripto202_l0_winter_armor.paa"
	};
};

///Garrus\\\

class 22nd_odst_garrus: 22nd_odst_base
{
	scope=2;
	scopeCurator=0;
	scopeArsenal = 2;
	displayName="[ODST] Garrus";
	author="kripto202";
	uniformAccessories[]={};
	nakedUniform="U_BasicBody";
	uniformClass="22nd_ODST_garrus_uniform";
	model="\OPTRE_UNSC_Units\ODST\uniform.p3d";
	linkedItems[] = 
	{
		"OPTRE_UNSC_ODST_Helmet_22nd_garrus_comms",
		"22nd_odst_vest_garrus",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"tf_anprc152",
		"ItemGPS",
		"ODST_helmet_goggles",
		"OPTRE_NVG"
	};
	respawnLinkedItems[] =
	{
		"OPTRE_UNSC_ODST_Helmet_22nd_garrus_comms",
		"22nd_odst_vest_garrus",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"tf_anprc152",
		"ItemGPS",
		"ODST_helmet_goggles",
		"OPTRE_NVG"
	};
	hiddenSelections[]=
	{
		"camo1",
		"insignia",
		"clan"
	};
	hiddenSelectionsTextures[]=
	{
		"22_odst_units\data\uniform\odst_garrus_l0_armor.paa"
	};
};

class 22nd_odst_winter_garrus: 22nd_odst_base
{
	scope=2;
	scopeCurator=0;
	scopeArsenal = 2;
	displayName="(winter) [ODST] Garrus";
	author="kripto202";
	uniformAccessories[]={};
	nakedUniform="U_BasicBody";
	uniformClass="22nd_ODST_garrus_winter_uniform";
	model="\OPTRE_UNSC_Units\ODST\uniform.p3d";
	linkedItems[] = 
	{
		"OPTRE_UNSC_ODST_Helmet_22nd_garrus_comms_winter",
		"22nd_odst_vest_garrus_winter",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"tf_anprc152",
		"ItemGPS",
		"ODST_helmet_goggles",
		"OPTRE_NVG"
	};
	respawnLinkedItems[] =
	{
		"OPTRE_UNSC_ODST_Helmet_22nd_garrus_comms_winter",
		"22nd_odst_vest_garrus_winter",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"tf_anprc152",
		"ItemGPS",
		"ODST_helmet_goggles",
		"OPTRE_NVG"
	};
	hiddenSelections[]=
	{
		"camo1",
		"insignia",
		"clan"
	};
	hiddenSelectionsTextures[]=
	{
		"22_odst_units\data\uniform\odst_garrus_l0_winter_armor.paa"
	};
};

///darren\\\

class 22nd_odst_darren: 22nd_odst_base
{
	scope=2;
	scopeCurator=0;
	scopeArsenal = 2;
	icon="iconManMedic";
	attendant=1;
	displayName="[ODST] Darren";
	author="kripto202";
	uniformClass="22nd_ODST_darren_uniform";
	linkedItems[] = 
	{
		"OPTRE_UNSC_ODST_Helmet_22nd_darren",
		"22nd_odst_vest_darren",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"tf_anprc152",
		"ItemGPS",
		"ODST_helmet_goggles",
		"OPTRE_NVG"
	};
	respawnLinkedItems[] =
	{
		"OPTRE_UNSC_ODST_Helmet_22nd_darren",
		"22nd_odst_vest_darren",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"tf_anprc152",
		"ItemGPS",
		"ODST_helmet_goggles",
		"OPTRE_NVG"
	};
	hiddenSelections[]=
	{
		"camo1",
		"insignia",
		"clan"
	};
	hiddenSelectionsTextures[]=
	{
		"22_odst_units\data\uniform\odst_darren_l0_armor.paa"
	};
};

class 22nd_odst_winter_darren: 22nd_odst_base
{
	scope=2;
	scopeCurator=0;
	scopeArsenal = 2;
	icon="iconManMedic";
	attendant=1;
	displayName="(winter) [ODST] Darren";
	author="kripto202";
	uniformClass="22nd_ODST_darren_winter_uniform";
	linkedItems[] = 
	{
		"OPTRE_UNSC_ODST_Helmet_22nd_darren_winter",
		"22nd_odst_vest_darren_winter",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"tf_anprc152",
		"ItemGPS",
		"ODST_helmet_goggles",
		"OPTRE_NVG"
	};
	respawnLinkedItems[] =
	{
		"OPTRE_UNSC_ODST_Helmet_22nd_darren_winter",
		"22nd_odst_vest_darren_winter",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"tf_anprc152",
		"ItemGPS",
		"ODST_helmet_goggles",
		"OPTRE_NVG"
	};
	hiddenSelections[]=
	{
		"camo1",
		"insignia",
		"clan"
	};
	hiddenSelectionsTextures[]=
	{
		"22_odst_units\data\uniform\odst_darren_l0_winter_armor.paa"
	};
};
	
///barkhorn\\\

class 22nd_odst_barkhorn: 22nd_odst_base
{
	scope=2;
	scopeCurator=0;
	scopeArsenal = 2;
	displayName="[ODST] barkhorn";
	author="kripto202";
	uniformClass="22nd_ODST_barkhorn_uniform";
	linkedItems[] = 
	{
		"OPTRE_UNSC_ODST_Helmet_22nd_barkhorn",
		"22nd_odst_vest_barkhorn",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"tf_anprc152",
		"ItemGPS",
		"ODST_helmet_goggles",
		"OPTRE_NVG"
	};
	respawnLinkedItems[] =
	{
		"OPTRE_UNSC_ODST_Helmet_22nd_barkhorn",
		"22nd_odst_vest_barkhorn",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"tf_anprc152",
		"ItemGPS",
		"ODST_helmet_goggles",
		"OPTRE_NVG"
	};
	hiddenSelections[]=
	{
		"camo1",
		"insignia",
		"clan"
	};
	hiddenSelectionsTextures[]=
	{
		"22_odst_units\data\uniform\odst_barkhorn_l0_armor.paa"
	};
};

class 22nd_odst_winter_barkhorn: 22nd_odst_base
{
	scope=2;
	scopeCurator=0;
	scopeArsenal = 2;
	displayName="(winter) [ODST] barkhorn";
	author="kripto202";
	uniformClass="22nd_ODST_barkhorn_winter_uniform";
	linkedItems[] = 
	{
		"OPTRE_UNSC_ODST_Helmet_22nd_barkhorn_winter",
		"22nd_odst_vest_barkhorn_winter",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"tf_anprc152",
		"ItemGPS",
		"ODST_helmet_goggles",
		"OPTRE_NVG"
	};
	respawnLinkedItems[] =
	{
		"OPTRE_UNSC_ODST_Helmet_22nd_barkhorn_winter",
		"22nd_odst_vest_barkhorn_winter",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"tf_anprc152",
		"ItemGPS",
		"ODST_helmet_goggles",
		"OPTRE_NVG"
	};
	hiddenSelections[]=
	{
		"camo1",
		"insignia",
		"clan"
	};
	hiddenSelectionsTextures[]=
	{
		"22_odst_units\data\uniform\odst_barkhorn_l0_winter_armor.paa"
	};
};

///litch\\\

class 22nd_odst_litch: 22nd_odst_base
{
	scope=2;
	scopeCurator=0;
	scopeArsenal = 2;
	displayName="[ODST] litch";
	author="kripto202";
	uniformClass="22nd_ODST_litch_uniform";
	linkedItems[] = 
	{
		"OPTRE_UNSC_ODST_Helmet_22nd_litch",
		"22nd_odst_vest_litch",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"tf_anprc152",
		"ItemGPS",
		"ODST_helmet_goggles",
		"OPTRE_NVG"
	};
	respawnLinkedItems[] =
	{
		"OPTRE_UNSC_ODST_Helmet_22nd_litch",
		"22nd_odst_vest_litch",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"tf_anprc152",
		"ItemGPS",
		"ODST_helmet_goggles",
		"OPTRE_NVG"
	};
	hiddenSelections[]=
	{
		"camo1",
		"insignia",
		"clan"
	};
	hiddenSelectionsTextures[]=
	{
		"22_odst_units\data\uniform\odst_litch_l0_armor.paa"
	};
};

class 22nd_odst_winter_litch: 22nd_odst_base
{
	scope=2;
	scopeCurator=0;
	scopeArsenal = 2;
	displayName="(winter) [ODST] litch";
	author="kripto202";
	uniformClass="22nd_ODST_litch_uniform_winter";
	linkedItems[] = 
	{
		"OPTRE_UNSC_ODST_Helmet_22nd_litch_winter",
		"22nd_odst_vest_litch_winter",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"tf_anprc152",
		"ItemGPS",
		"ODST_helmet_goggles",
		"OPTRE_NVG"
	};
	respawnLinkedItems[] =
	{
		"OPTRE_UNSC_ODST_Helmet_22nd_litch_winter",
		"22nd_odst_vest_litch_winter",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"tf_anprc152",
		"ItemGPS",
		"ODST_helmet_goggles",
		"OPTRE_NVG"
	};
	hiddenSelections[]=
	{
		"camo1",
		"insignia",
		"clan"
	};
	hiddenSelectionsTextures[]=
	{
		"22_odst_units\data\uniform\odst_litch_l0_winter_armor.paa"
	};
};
	
///dobson\\\

class 22nd_odst_dobson: 22nd_odst_base
{
	scope=2;
	scopeCurator=0;
	scopeArsenal = 2;
	displayName="[ODST] O.Dobson";
	author="kripto202";
	uniformClass="22nd_ODST_dobson_uniform";
	linkedItems[] = 
	{
		"OPTRE_UNSC_ODST_Helmet_22nd_dobson",
		"22nd_odst_vest_dobson",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"tf_anprc152",
		"ItemGPS",
		"ODST_helmet_goggles",
		"OPTRE_NVG"
	};
	respawnLinkedItems[] =
	{
		"OPTRE_UNSC_ODST_Helmet_22nd_dobson",
		"22nd_odst_vest_dobson",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"tf_anprc152",
		"ItemGPS",
		"ODST_helmet_goggles",
		"OPTRE_NVG"
	};
	hiddenSelections[]=
	{
		"camo1",
		"insignia",
		"clan",
		"attach_rightshoulder"
	};
	hiddenSelectionsTextures[]=
	{
		"22_odst_units\data\uniform\odst_dobson_l0_armor.paa"
	};
};

class 22nd_odst_winter_dobson: 22nd_odst_base
{
	scope=2;
	scopeCurator=0;
	scopeArsenal = 2;
	displayName="(winter) [ODST] O.Dobson";
	author="kripto202";
	uniformClass="22nd_ODST_dobson_uniform_winter";
	linkedItems[] = 
	{
		"OPTRE_UNSC_ODST_Helmet_22nd_dobson_winter",
		"22nd_odst_vest_dobson_winter",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"tf_anprc152",
		"ItemGPS",
		"ODST_helmet_goggles",
		"OPTRE_NVG"
	};
	respawnLinkedItems[] =
	{
		"OPTRE_UNSC_ODST_Helmet_22nd_dobson_winter",
		"22nd_odst_vest_dobson_winter",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"tf_anprc152",
		"ItemGPS",
		"ODST_helmet_goggles",
		"OPTRE_NVG"
	};
	hiddenSelections[]=
	{
		"camo1",
		"insignia",
		"clan",
		"attach_rightshoulder"
	};
	hiddenSelectionsTextures[]=
	{
		"22_odst_units\data\uniform\odst_dobson_l0_winter_armor.paa"
	};
};

//ginger\\

class 22nd_odst_ginger: 22nd_odst_base
{
	scope=2;
	scopeCurator=0;
	scopeArsenal = 2;
	displayName="[ODST] J.Ginger";
	author="kripto202";
	uniformClass="22nd_ODST_ginger_uniform";
	model="\OPTRE_UNSC_Units\ODST\uniform.p3d";
	linkedItems[] = 
	{
		"OPTRE_UNSC_ODST_Helmet_22nd_ginger",
		"22nd_odst_vest_ginger",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"tf_anprc152",
		"ItemGPS",
		"ODST_helmet_goggles",
		"OPTRE_NVG"
	};
	respawnLinkedItems[] =
	{
		"OPTRE_UNSC_ODST_Helmet_22nd_ginger",
		"22nd_odst_vest_ginger",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"tf_anprc152",
		"ItemGPS",
		"ODST_helmet_goggles",
		"OPTRE_NVG"
	};
	hiddenSelections[]=
	{
		"camo1",
		"insignia",
		"clan"
	};
	hiddenSelectionsTextures[]=
	{
		"22_odst_units\data\uniform\odst_ginger_l0_armor.paa"
	};
};

class 22nd_odst_winter_ginger: 22nd_odst_base
{
	scope=2;
	scopeCurator=0;
	scopeArsenal = 2;
	displayName="(winter) [ODST] J.Ginger";
	author="kripto202";
	uniformClass="22nd_ODST_ginger_winter_uniform";
	model="\OPTRE_UNSC_Units\ODST\uniform.p3d";
	linkedItems[] = 
	{
		"OPTRE_UNSC_ODST_Helmet_22nd_ginger_winter",
		"22nd_odst_vest_ginger_winter",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"tf_anprc152",
		"ItemGPS",
		"ODST_helmet_goggles",
		"OPTRE_NVG"
	};
	respawnLinkedItems[] =
	{
		"OPTRE_UNSC_ODST_Helmet_22nd_ginger_winter",
		"22nd_odst_vest_ginger_winter",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"tf_anprc152",
		"ItemGPS",
		"ODST_helmet_goggles",
		"OPTRE_NVG"
	};
	hiddenSelections[]=
	{
		"camo1",
		"insignia",
		"clan"
	};
	hiddenSelectionsTextures[]=
	{
		"22_odst_units\data\uniform\odst_ginger_l0_winter_armor.paa"
	};
};

///default\\\

class 22nd_odst_default: 22nd_odst_base
{
	scope=2;
	scopeCurator=1;
	scopeArsenal = 2;
	displayName="22nd ODST Soldier";
	author="kripto202";
	uniformClass="22nd_ODST_default_uniform";
	linkedItems[] = 
	{
		"OPTRE_UNSC_ODST_Helmet_22nd_default",
		"22nd_odst_vest_default",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"tf_anprc152",
		"ItemGPS",
		"ODST_helmet_goggles",
		"OPTRE_NVG"
	};
	respawnLinkedItems[] =
	{
		"OPTRE_UNSC_ODST_Helmet_22nd_default",
		"22nd_odst_vest_default",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"tf_anprc152",
		"ItemGPS",
		"ODST_helmet_goggles",
		"OPTRE_NVG"
	};
	hiddenSelections[]=
	{
		"camo1",
		"insignia",
		"clan"
	};
	hiddenSelectionsTextures[]=
	{
		"22_odst_units\data\uniform\odst_default_l0_armor.paa"
	};
};

class 22nd_odst_winter_default: 22nd_odst_base
{
	scope=2;
	scopeCurator=1;
	scopeArsenal = 2;
	displayName="(winter) 22nd ODST Soldier";
	author="kripto202";
	uniformClass="22nd_ODST_default_winter_uniform";
	linkedItems[] = 
	{
		"OPTRE_UNSC_ODST_Helmet_22nd_default_winter",
		"22nd_odst_vest_default_winter",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"tf_anprc152",
		"ItemGPS",
		"ODST_helmet_goggles",
		"OPTRE_NVG"
	};
	respawnLinkedItems[] =
	{
		"OPTRE_UNSC_ODST_Helmet_22nd_default_winter",
		"22nd_odst_vest_default_winter",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"tf_anprc152",
		"ItemGPS",
		"ODST_helmet_goggles",
		"OPTRE_NVG"
	};
	hiddenSelections[]=
	{
		"camo1",
		"insignia",
		"clan"
	};
	hiddenSelectionsTextures[]=
	{
		"22_odst_units\data\uniform\odst_default_l0_winter_armor.paa"
	};
};

class 22nd_odst_blue_default: 22nd_odst_base
{
	scope=2;
	scopeCurator=1;
	scopeArsenal = 2;
	displayName="22nd ODST Blue Team";
	author="kripto202";
	uniformClass="22nd_ODST_default_blue_uniform";
	linkedItems[] = 
	{
		"OPTRE_UNSC_ODST_Helmet_22nd_default",
		"22nd_odst_vest_default",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"tf_anprc152",
		"ItemGPS",
		"ODST_helmet_goggles",
		"OPTRE_NVG"
	};
	respawnLinkedItems[] =
	{
		"OPTRE_UNSC_ODST_Helmet_22nd_default",
		"22nd_odst_vest_default",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"tf_anprc152",
		"ItemGPS",
		"ODST_helmet_goggles",
		"OPTRE_NVG"
	};
	hiddenSelections[]=
	{
		"camo1",
		"insignia",
		"clan"
	};
	hiddenSelectionsTextures[]=
	{
		"22_odst_units\data\uniform\odst_default_l0_blue_armor.paa"
	};
};

class 22nd_odst_winter_blue_default: 22nd_odst_base
{
	scope=2;
	scopeCurator=1;
	scopeArsenal = 2;
	displayName="(winter) 22nd ODST Blue Team";
	author="kripto202";
	uniformClass="22nd_ODST_default_winter_blue_uniform";
	linkedItems[] = 
	{
		"OPTRE_UNSC_ODST_Helmet_22nd_default_winter",
		"22nd_odst_vest_default_winter",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"tf_anprc152",
		"ItemGPS",
		"ODST_helmet_goggles",
		"OPTRE_NVG"
	};
	respawnLinkedItems[] =
	{
		"OPTRE_UNSC_ODST_Helmet_22nd_default_winter",
		"22nd_odst_vest_default_winter",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"tf_anprc152",
		"ItemGPS",
		"ODST_helmet_goggles",
		"OPTRE_NVG"
	};
	hiddenSelections[]=
	{
		"camo1",
		"insignia",
		"clan"
	};
	hiddenSelectionsTextures[]=
	{
		"22_odst_units\data\uniform\odst_default_l0_winter_blue_armor.paa"
	};
};

class 22nd_odst_red_default: 22nd_odst_base
{
	scope=2;
	scopeCurator=1;
	scopeArsenal = 2;
	displayName="22nd ODST Red Team";
	author="kripto202";
	uniformClass="22nd_ODST_default_red_uniform";
	linkedItems[] = 
	{
		"OPTRE_UNSC_ODST_Helmet_22nd_default",
		"22nd_odst_vest_default",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"tf_anprc152",
		"ItemGPS",
		"ODST_helmet_goggles",
		"OPTRE_NVG"
	};
	respawnLinkedItems[] =
	{
		"OPTRE_UNSC_ODST_Helmet_22nd_default",
		"22nd_odst_vest_default",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"tf_anprc152",
		"ItemGPS",
		"ODST_helmet_goggles",
		"OPTRE_NVG"
	};
	hiddenSelections[]=
	{
		"camo1",
		"insignia",
		"clan"
	};
	hiddenSelectionsTextures[]=
	{
		"22_odst_units\data\uniform\odst_default_l0_red_armor.paa"
	};
};

class 22nd_odst_winter_red_default: 22nd_odst_base
{
	scope=2;
	scopeCurator=1;
	scopeArsenal = 2;
	displayName="(winter) 22nd ODST Red Team";
	author="kripto202";
	uniformClass="22nd_ODST_default_winter_red_uniform";
	linkedItems[] = 
	{
		"OPTRE_UNSC_ODST_Helmet_22nd_default_winter",
		"22nd_odst_vest_default_winter",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"tf_anprc152",
		"ItemGPS",
		"ODST_helmet_goggles",
		"OPTRE_NVG"
	};
	respawnLinkedItems[] =
	{
		"OPTRE_UNSC_ODST_Helmet_22nd_default_winter",
		"22nd_odst_vest_default_winter",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"tf_anprc152",
		"ItemGPS",
		"ODST_helmet_goggles",
		"OPTRE_NVG"
	};
	hiddenSelections[]=
	{
		"camo1",
		"insignia",
		"clan"
	};
	hiddenSelectionsTextures[]=
	{
		"22_odst_units\data\uniform\odst_default_l0_winter_red_armor.paa"
	};
};

///lopez\\\

class 22nd_odst_lopez: 22nd_odst_base
{
	scope=2;
	scopeCurator=0;
	scopeArsenal = 2;
	displayName="[ODST] P.Lopez";
	author="kripto202";
	uniformClass="22nd_ODST_lopez_uniform";
	model="\OPTRE_UNSC_Units\ODST\uniform.p3d";
	linkedItems[] = 
	{
		"OPTRE_UNSC_ODST_Helmet_22nd_lopez",
		"22nd_odst_vest_lopez",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"tf_anprc152",
		"ItemGPS",
		"ODST_helmet_goggles",
		"OPTRE_NVG"
	};
	respawnLinkedItems[] =
	{
		"OPTRE_UNSC_ODST_Helmet_22nd_lopez",
		"22nd_odst_vest_lopez",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"tf_anprc152",
		"ItemGPS",
		"ODST_helmet_goggles",
		"OPTRE_NVG"
	};
	hiddenSelections[]=
	{
		"camo1",
		"insignia",
		"clan"
	};
	hiddenSelectionsTextures[]=
	{
		"22_odst_units\data\uniform\odst_lopez_l0_armor.paa"
	};
};

class 22nd_odst_winter_lopez: 22nd_odst_base
{
	scope=2;
	scopeCurator=0;
	scopeArsenal = 2;
	displayName="(winter) [ODST] P.Lopez";
	author="kripto202";
	uniformClass="22nd_ODST_lopez_winter_uniform";
	model="\OPTRE_UNSC_Units\ODST\uniform.p3d";
	linkedItems[] = 
	{
		"OPTRE_UNSC_ODST_Helmet_22nd_lopez_winter",
		"22nd_odst_vest_lopez_winter",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"tf_anprc152",
		"ItemGPS",
		"ODST_helmet_goggles",
		"OPTRE_NVG"
	};
	respawnLinkedItems[] =
	{
		"OPTRE_UNSC_ODST_Helmet_22nd_lopez_winter",
		"22nd_odst_vest_lopez_winter",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"tf_anprc152",
		"ItemGPS",
		"ODST_helmet_goggles",
		"OPTRE_NVG"
	};
	hiddenSelections[]=
	{
		"camo1",
		"insignia",
		"clan"
	};
	hiddenSelectionsTextures[]=
	{
		"22_odst_units\data\uniform\odst_lopez_l0_winter_armor.paa"
	};
};

///yunker\\\

class 22nd_odst_yunker: 22nd_odst_base
{
	scope=2;
	scopeCurator=0;
	scopeArsenal = 2;
	displayName="[ODST] J.Yunker";
	author="kripto202";
	uniformClass="22nd_ODST_yunker_uniform";
	model="\OPTRE_UNSC_Units\ODST\uniform.p3d";
	linkedItems[] = 
	{
		"OPTRE_UNSC_ODST_Helmet_22nd_yunker",
		"22nd_odst_vest_yunker",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"tf_anprc152",
		"ItemGPS",
		"ODST_helmet_goggles",
		"OPTRE_NVG"
	};
	respawnLinkedItems[] =
	{
		"OPTRE_UNSC_ODST_Helmet_22nd_yunker",
		"22nd_odst_vest_yunker",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"tf_anprc152",
		"ItemGPS",
		"ODST_helmet_goggles",
		"OPTRE_NVG"
	};
	hiddenSelections[]=
	{
		"camo1",
		"insignia",
		"clan"
	};
	hiddenSelectionsTextures[]=
	{
		"22_odst_units\data\uniform\odst_yunker_l0_armor.paa"
	};
};

class 22nd_odst_winter_yunker: 22nd_odst_base
{
	scope=2;
	scopeCurator=0;
	scopeArsenal = 2;
	displayName="(winter) [ODST] J.Yunker";
	author="kripto202";
	uniformClass="22nd_ODST_yunker_winter_uniform";
	model="\OPTRE_UNSC_Units\ODST\uniform.p3d";
	linkedItems[] = 
	{
		"OPTRE_UNSC_ODST_Helmet_22nd_yunker_winter",
		"22nd_odst_vest_ginger_winter",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"tf_anprc152",
		"ItemGPS",
		"ODST_helmet_goggles",
		"OPTRE_NVG"
	};
	respawnLinkedItems[] =
	{
		"OPTRE_UNSC_ODST_Helmet_22nd_yunker_winter",
		"22nd_odst_vest_yunker_winter",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"tf_anprc152",
		"ItemGPS",
		"ODST_helmet_goggles",
		"OPTRE_NVG"
	};
	hiddenSelections[]=
	{
		"camo1",
		"insignia",
		"clan"
	};
	hiddenSelectionsTextures[]=
	{
		"22_odst_units\data\uniform\odst_yunker_l0_winter_armor.paa"
	};
};

///hazard\\\

class 22nd_odst_hazard: 22nd_odst_base
{
	scope=2;
	scopeCurator=0;
	scopeArsenal = 2;
	displayName="[ODST] D.Hazard";
	author="kripto202";
	uniformClass="22nd_ODST_hazard_uniform";
	model="\OPTRE_UNSC_Units\ODST\uniform.p3d";
	linkedItems[] = 
	{
		"OPTRE_UNSC_ODST_Helmet_22nd_hazard",
		"22nd_odst_vest_hazard",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"tf_anprc152",
		"ItemGPS",
		"ODST_helmet_goggles",
		"OPTRE_NVG"
	};
	respawnLinkedItems[] =
	{
		"OPTRE_UNSC_ODST_Helmet_22nd_hazard",
		"22nd_odst_vest_hazard",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"tf_anprc152",
		"ItemGPS",
		"ODST_helmet_goggles",
		"OPTRE_NVG"
	};
	hiddenSelections[]=
	{
		"camo1",
		"insignia",
		"clan"
	};
	hiddenSelectionsTextures[]=
	{
		"22_odst_units\data\uniform\odst_hazard_l0_armor.paa"
	};
};

class 22nd_odst_winter_hazard: 22nd_odst_base
{
	scope=2;
	scopeCurator=0;
	scopeArsenal = 2;
	displayName="(winter) [ODST] D.Hazard";
	author="kripto202";
	uniformClass="22nd_ODST_hazard_winter_uniform";
	model="\OPTRE_UNSC_Units\ODST\uniform.p3d";
	linkedItems[] = 
	{
		"OPTRE_UNSC_ODST_Helmet_22nd_hazard_winter",
		"22nd_odst_vest_hazard_winter",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"tf_anprc152",
		"ItemGPS",
		"ODST_helmet_goggles",
		"OPTRE_NVG"
	};
	respawnLinkedItems[] =
	{
		"OPTRE_UNSC_ODST_Helmet_22nd_hazard_winter",
		"22nd_odst_vest_hazard_winter",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"tf_anprc152",
		"ItemGPS",
		"ODST_helmet_goggles",
		"OPTRE_NVG"
	};
	hiddenSelections[]=
	{
		"camo1",
		"insignia",
		"clan"
	};
	hiddenSelectionsTextures[]=
	{
		"22_odst_units\data\uniform\odst_hazard_l0_winter_armor.paa"
	};
};

///drake\\\

class 22nd_odst_drake: 22nd_odst_base
{
	scope=2;
	scopeCurator=0;
	scopeArsenal = 2;
	displayName="[ODST] B.Drake";
	author="kripto202";
	uniformClass="22nd_ODST_drake_uniform";
	model="\OPTRE_UNSC_Units\ODST\uniform.p3d";
	linkedItems[] = 
	{
		"OPTRE_UNSC_ODST_Helmet_22nd_drake",
		"22nd_odst_vest_drake",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"tf_anprc152",
		"ItemGPS",
		"ODST_helmet_goggles",
		"OPTRE_NVG"
	};
	respawnLinkedItems[] =
	{
		"OPTRE_UNSC_ODST_Helmet_22nd_drake",
		"22nd_odst_vest_drake",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"tf_anprc152",
		"ItemGPS",
		"ODST_helmet_goggles",
		"OPTRE_NVG"
	};
	hiddenSelections[]=
	{
		"camo1",
		"insignia",
		"clan"
	};
	hiddenSelectionsTextures[]=
	{
		"22_odst_units\data\uniform\odst_drake_l0_armor.paa"
	};
};

class 22nd_odst_winter_drake: 22nd_odst_base
{
	scope=2;
	scopeCurator=0;
	scopeArsenal = 2;
	displayName="(winter) [ODST] B.Drake";
	author="kripto202";
	uniformClass="22nd_ODST_drake_winter_uniform";
	model="\OPTRE_UNSC_Units\ODST\uniform.p3d";
	linkedItems[] = 
	{
		"OPTRE_UNSC_ODST_Helmet_22nd_drake_winter",
		"22nd_odst_vest_drake_winter",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"tf_anprc152",
		"ItemGPS",
		"ODST_helmet_goggles",
		"OPTRE_NVG"
	};
	respawnLinkedItems[] =
	{
		"OPTRE_UNSC_ODST_Helmet_22nd_drake_winter",
		"22nd_odst_vest_drake_winter",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"tf_anprc152",
		"ItemGPS",
		"ODST_helmet_goggles",
		"OPTRE_NVG"
	};
	hiddenSelections[]=
	{
		"camo1",
		"insignia",
		"clan"
	};
	hiddenSelectionsTextures[]=
	{
		"22_odst_units\data\uniform\odst_drake_l0_winter_armor.paa"
	};
};

///baker\\\

class 22nd_odst_baker: 22nd_odst_base
{
	scope=2;
	scopeCurator=0;
	scopeArsenal = 2;
	displayName="[ODST] J.Baker";
	author="kripto202";
	uniformClass="22nd_ODST_baker_uniform";
	model="\OPTRE_UNSC_Units\ODST\uniform.p3d";
	linkedItems[] = 
	{
		"OPTRE_UNSC_ODST_Helmet_22nd_baker",
		"22nd_odst_vest_baker",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"tf_anprc152",
		"ItemGPS",
		"ODST_helmet_goggles",
		"OPTRE_NVG"
	};
	respawnLinkedItems[] =
	{
		"OPTRE_UNSC_ODST_Helmet_22nd_baker",
		"22nd_odst_vest_baker",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"tf_anprc152",
		"ItemGPS",
		"ODST_helmet_goggles",
		"OPTRE_NVG"
	};
	hiddenSelections[]=
	{
		"camo1",
		"insignia",
		"clan"
	};
	hiddenSelectionsTextures[]=
	{
		"22_odst_units\data\uniform\odst_baker_l0_armor.paa"
	};
};

class 22nd_odst_winter_baker: 22nd_odst_base
{
	scope=2;
	scopeCurator=0;
	scopeArsenal = 2;
	displayName="(winter) [ODST] J.Baker";
	author="kripto202";
	uniformClass="22nd_ODST_baker_winter_uniform";
	model="\OPTRE_UNSC_Units\ODST\uniform.p3d";
	linkedItems[] = 
	{
		"OPTRE_UNSC_ODST_Helmet_22nd_baker_winter",
		"22nd_odst_vest_baker_winter",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"tf_anprc152",
		"ItemGPS",
		"ODST_helmet_goggles",
		"OPTRE_NVG"
	};
	respawnLinkedItems[] =
	{
		"OPTRE_UNSC_ODST_Helmet_22nd_baker_winter",
		"22nd_odst_vest_baker_winter",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"tf_anprc152",
		"ItemGPS",
		"ODST_helmet_goggles",
		"OPTRE_NVG"
	};
	hiddenSelections[]=
	{
		"camo1",
		"insignia",
		"clan"
	};
	hiddenSelectionsTextures[]=
	{
		"22_odst_units\data\uniform\odst_baker_l0_winter_armor.paa"
	};
};