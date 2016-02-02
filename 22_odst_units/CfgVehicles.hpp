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
class Hitpoints;
class HitHead;
class HitNeck;
class HitBody;
class HitPelvis;
class HitAbdomen;
class HitDiaphragm;
class HitChest;
class HitHands;
class HitArms;
class HitLegs;

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
		"OPTRE_MA5B",
		"Throw",
		"Put"
	};
	respawnWeapons[]=
	{
		"OPTRE_MA5B",
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
	class HitPoints: HitPoints
		{
			class HitFace: HitHead
			{
				armor=1;
				material=-1;
				name="face_hub";
				passThrough=0.1;
				radius=0.079999998;
				explosionShielding=0.1;
				minimalHit=0.0099999998;
			};
			class HitNeck: HitFace
			{
				armor=1;
				material=-1;
				name="neck";
				passThrough=0.1;
				radius=0.1;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
			};
			class HitHead: HitNeck
			{
				armor=1;
				material=-1;
				name="head";
				passThrough=0.1;
				radius=0.2;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
				depends="HitFace max HitNeck";
			};
			class HitPelvis: HitBody
			{
				armor=1;
				material=-1;
				name="pelvis";
				passThrough=0.1;
				radius=0.2;
				explosionShielding=1;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitAbdomen: HitPelvis
			{
				armor=1;
				material=-1;
				name="spine1";
				passThrough=0.1;
				radius=0.15000001;
				explosionShielding=1;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor=1;
				material=-1;
				name="spine2";
				passThrough=0.1;
				radius=0.15000001;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitChest: HitDiaphragm
			{
				armor=1;
				material=-1;
				name="spine3";
				passThrough=0.1;
				radius=0.15000001;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitBody: HitChest
			{
				armor=1000;
				material=-1;
				name="body";
				passThrough=0.1;
				radius=0.16;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms: HitHands
			{
				armor=1;
				material=-1;
				name="arms";
				passThrough=0.25;
				radius=0.1;
				explosionShielding=1;
				visual="injury_hands";
				minimalHit=0.0099999998;
			};
			class HitHands: HitArms
			{
				armor=1;
				material=-1;
				name="hands";
				passThrough=0.25;
				radius=0.1;
				explosionShielding=1;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="HitArms";
			};
			class HitLegs: HitLegs
			{
				armor=1;
				material=-1;
				name="legs";
				passThrough=0.25;
				radius=0.12;
				explosionShielding=1;
				visual="injury_legs";
				minimalHit=0.0099999998;
			};
		};
		armor=2;
		armorStructural=0.40000001;
		explosionShielding=0.039999999;
		minTotalDamageThreshold=0.001;
		impactDamageMultiplier=0.5;
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
		"22nd_odst_vest_kripto202"
	};
	respawnLinkedItems[] =
	{
		"OPTRE_UNSC_ODST_Helmet_22nd_kripto202_sniper",
		"22nd_odst_vest_kripto202"
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
		"22nd_odst_vest_kripto202_winter"
	};
	respawnLinkedItems[] =
	{
		"OPTRE_UNSC_ODST_Helmet_22nd_kripto202_sniper_winter",
		"22nd_odst_vest_winter_kripto202"
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
		"22nd_odst_vest_garrus"
	};
	respawnLinkedItems[] =
	{
		"OPTRE_UNSC_ODST_Helmet_22nd_garrus_comms",
		"22nd_odst_vest_garrus"
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
		"22nd_odst_vest_garrus_winter"
	};
	respawnLinkedItems[] =
	{
		"OPTRE_UNSC_ODST_Helmet_22nd_garrus_comms_winter",
		"22nd_odst_vest_garrus_winter"
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
		"22nd_odst_vest_darren"
	};
	respawnLinkedItems[] =
	{
		"OPTRE_UNSC_ODST_Helmet_22nd_darren",
		"22nd_odst_vest_darren"
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
		"22nd_odst_vest_darren_winter"
	};
	respawnLinkedItems[] =
	{
		"OPTRE_UNSC_ODST_Helmet_22nd_darren_winter",
		"22nd_odst_vest_darren_winter"
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
		"22nd_odst_vest_barkhorn"
	};
	respawnLinkedItems[] =
	{
		"OPTRE_UNSC_ODST_Helmet_22nd_barkhorn",
		"22nd_odst_vest_barkhorn"
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
		"22nd_odst_vest_barkhorn_winter"
	};
	respawnLinkedItems[] =
	{
		"OPTRE_UNSC_ODST_Helmet_22nd_barkhorn_winter",
		"22nd_odst_vest_barkhorn_winter"
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
		"22nd_odst_vest_litch"
	};
	respawnLinkedItems[] =
	{
		"OPTRE_UNSC_ODST_Helmet_22nd_litch",
		"22nd_odst_vest_litch"
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
		"22nd_odst_vest_litch_winter"
	};
	respawnLinkedItems[] =
	{
		"OPTRE_UNSC_ODST_Helmet_22nd_litch_winter",
		"22nd_odst_vest_litch_winter"
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
		"22nd_odst_vest_dobson"
	};
	respawnLinkedItems[] =
	{
		"OPTRE_UNSC_ODST_Helmet_22nd_dobson",
		"22nd_odst_vest_dobson"
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
		"22nd_odst_vest_dobson_winter"
	};
	respawnLinkedItems[] =
	{
		"OPTRE_UNSC_ODST_Helmet_22nd_dobson_winter",
		"22nd_odst_vest_dobson_winter"
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
		"22nd_odst_vest_ginger"
	};
	respawnLinkedItems[] =
	{
		"OPTRE_UNSC_ODST_Helmet_22nd_ginger",
		"22nd_odst_vest_ginger"
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
		"22nd_odst_vest_ginger_winter"
	};
	respawnLinkedItems[] =
	{
		"OPTRE_UNSC_ODST_Helmet_22nd_ginger_winter",
		"22nd_odst_vest_ginger_winter"
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
		"22nd_odst_vest_default"
	};
	respawnLinkedItems[] =
	{
		"OPTRE_UNSC_ODST_Helmet_22nd_default",
		"22nd_odst_vest_default"
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
		"22nd_odst_vest_default_winter"
	};
	respawnLinkedItems[] =
	{
		"OPTRE_UNSC_ODST_Helmet_22nd_default_winter",
		"22nd_odst_vest_default_winter"
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
		"22nd_odst_vest_default"
	};
	respawnLinkedItems[] =
	{
		"OPTRE_UNSC_ODST_Helmet_22nd_default",
		"22nd_odst_vest_default"
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
		"22nd_odst_vest_default_winter"
	};
	respawnLinkedItems[] =
	{
		"OPTRE_UNSC_ODST_Helmet_22nd_default_winter",
		"22nd_odst_vest_default_winter"
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
		"22nd_odst_vest_default"
	};
	respawnLinkedItems[] =
	{
		"OPTRE_UNSC_ODST_Helmet_22nd_default",
		"22nd_odst_vest_default"
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
		"22nd_odst_vest_default_winter"
	};
	respawnLinkedItems[] =
	{
		"OPTRE_UNSC_ODST_Helmet_22nd_default_winter",
		"22nd_odst_vest_default_winter"
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
		"22nd_odst_vest_lopez"
	};
	respawnLinkedItems[] =
	{
		"OPTRE_UNSC_ODST_Helmet_22nd_lopez",
		"22nd_odst_vest_lopez"
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
		"22nd_odst_vest_lopez_winter"
	};
	respawnLinkedItems[] =
	{
		"OPTRE_UNSC_ODST_Helmet_22nd_lopez_winter",
		"22nd_odst_vest_lopez_winter"
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
		"22nd_odst_vest_yunker"
	};
	respawnLinkedItems[] =
	{
		"OPTRE_UNSC_ODST_Helmet_22nd_yunker",
		"22nd_odst_vest_yunker"
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
		"22nd_odst_vest_ginger_winter"
	};
	respawnLinkedItems[] =
	{
		"OPTRE_UNSC_ODST_Helmet_22nd_yunker_winter",
		"22nd_odst_vest_yunker_winter"
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