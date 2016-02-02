class ItemCore;
	class U_B_CombatUniform_mcam;
	class UniformItem;
	class V_PlateCarrier1_rgr;
	class VestItem;
	class HeadgearItem;
	class H_HelmetB;
	class H_Cap_oli;
	class Binocular;

//vests to use: Carrier GL Rig (V_PlateCarrierGL_blk), Carrier Speical Rig (V_PlateCarrierSpec_blk), Carrier Rig (v_PlateCarrier2_blk), CTRG Plate Carrier Rig Mk2 (V_PlateCarrierH_CTRG), Carrier Lite (V_PlateCarrier1_blk), Chest Rig (V_Chestrig_blk), tactical vest (V_TacVest_blk), 

//uniforms\\
	
	class Uniform_Base: ItemCore
	{
		class ItemInfo;
	};
	
	
///kripto202\\\	
	
	class 22nd_ODST_kripto202_uniform: U_B_CombatUniform_mcam
	{
		scope=2;
		scopeArsenal=2;
		allowedSlots[] = {901};
	displayName = "[22ndODST] M.Kripto";
		picture = "\OPTRE_UNSC_Units\ODST\icons\odst_uniform_left.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformClass = "22nd_odst_kripto202";
			uniformtype = "Neopren";
			containerClass = "Supply50";
			mass = 10;
			author = "kripto202";
			modelSides[]={6};
		};
	};
	
	class 22nd_ODST_kripto202_winter_uniform: U_B_CombatUniform_mcam
	{
		scope=2;
		scopeArsenal=2;
		allowedSlots[] = {901};
	displayName = "(winter) [22ndODST] M.Kripto";
		picture = "\OPTRE_UNSC_Units\ODST\icons\odst_uniform_left.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformClass = "22nd_odst_winter_kripto202";
			containerClass = "Supply50";
			uniformtype = "Neopren";
			mass = 10;
			author = "kripto202";
			modelSides[]={6};
		};
	};

///garrus\\\

	class 22nd_ODST_garrus_uniform: U_B_CombatUniform_mcam
	{
		scope=2;
		scopeArsenal=2;
		allowedSlots[] = {901};
	displayName = "[22ndODST] M.Steros";
		picture = "\OPTRE_UNSC_Units\ODST\icons\odst_uniform_left.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformClass = "22nd_odst_garrus";
			containerClass = "Supply50";
			uniformtype = "Neopren";
			mass = 10;
			author = "kripto202";
			modelSides[]={6};
		};
	};
	
	class 22nd_ODST_garrus_winter_uniform: U_B_CombatUniform_mcam
	{
		scope=2;
		scopeArsenal=2;
		allowedSlots[] = {901};
	displayName = "(winter) [22ndODST] M.Steros";
		picture = "\OPTRE_UNSC_Units\ODST\icons\odst_uniform_left.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformClass = "22nd_odst_winter_garrus";
			containerClass = "Supply50";
			uniformtype = "Neopren";
			mass = 10;
			author = "kripto202";
			modelSides[]={6};
		};
	};

///darren\\\

	class 22nd_ODST_darren_uniform: U_B_CombatUniform_mcam
	{
		scope=2;
		scopeArsenal=2;
		allowedSlots[] = {901};
	displayName = "[22ndODST] D.Darren";
		picture = "\OPTRE_UNSC_Units\ODST\icons\odst_uniform_left.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformClass = "22nd_odst_darren";
			containerClass = "Supply50";
			uniformtype = "Neopren";
			mass = 10;
			author = "kripto202";
			modelSides[]={6};
		};
	};
	
	class 22nd_ODST_darren_winter_uniform: U_B_CombatUniform_mcam
	{
		scope=2;
		scopeArsenal=2;
		allowedSlots[] = {901};
	displayName = "(winter) [22ndODST] D.Darren";
		picture = "\OPTRE_UNSC_Units\ODST\icons\odst_uniform_left.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformClass = "22nd_odst_winter_darren";
			containerClass = "Supply50";
			uniformtype = "Neopren";
			mass = 10;
			author = "kripto202";
			modelSides[]={6};
		};
	};

///barkhorn\\\

	class 22nd_ODST_barkhorn_uniform: U_B_CombatUniform_mcam
	{
		scope=2;
		scopeArsenal=2;
		allowedSlots[] = {901};
	displayName = "[22ndODST] G.Barkhorn";
		picture = "\OPTRE_UNSC_Units\ODST\icons\odst_uniform_left.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformClass = "22nd_odst_barkhorn";
			containerClass = "Supply50";
			uniformtype = "Neopren";
			mass = 10;
			author = "kripto202";
			modelSides[]={6};
		};
	};
	
	class 22nd_ODST_barkhorn_winter_uniform: U_B_CombatUniform_mcam
	{
		scope=2;
		scopeArsenal=2;
		allowedSlots[] = {901};
	displayName = "(winter) [22ndODST] G.Barkhorn";
		picture = "\OPTRE_UNSC_Units\ODST\icons\odst_uniform_left.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformClass = "22nd_odst_winter_barkhorn";
			containerClass = "Supply50";
			uniformtype = "Neopren";
			mass = 10;
			author = "kripto202";
			modelSides[]={6};
		};
	};

///litch\\\

	class 22nd_ODST_litch_uniform: U_B_CombatUniform_mcam
	{
		scope=2;
		scopeArsenal=2;
		allowedSlots[] = {901};
	displayName = "[22ndODST] J.Litch";
		picture = "\OPTRE_UNSC_Units\ODST\icons\odst_uniform_left.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformClass = "22nd_odst_litch";
			containerClass = "Supply50";
			uniformtype = "Neopren";
			mass = 10;
			author = "kripto202";
			modelSides[]={6};
		};
	};
	
	class 22nd_ODST_litch_winter_uniform: U_B_CombatUniform_mcam
	{
		scope=2;
		scopeArsenal=2;
		allowedSlots[] = {901};
	displayName = "(winter) [22ndODST] J.Litch";
		picture = "\OPTRE_UNSC_Units\ODST\icons\odst_uniform_left.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformClass = "22nd_odst_winter_litch";
			containerClass = "Supply50";
			uniformtype = "Neopren";
			mass = 10;
			author = "kripto202";
			modelSides[]={6};
		};
	};

///dobson\\\

	class 22nd_ODST_dobson_uniform: U_B_CombatUniform_mcam
	{
		scope=2;
		scopeArsenal=2;
		allowedSlots[] = {901};
	displayName = "[22ndODST] O.Dobson";
		picture = "\OPTRE_UNSC_Units\ODST\icons\odst_uniform_left.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformClass = "22nd_odst_dobson";
			containerClass = "Supply50";
			uniformtype = "Neopren";
			mass = 10;
			author = "kripto202";
			modelSides[]={6};
		};
	};
	
	class 22nd_ODST_dobson_winter_uniform: U_B_CombatUniform_mcam
	{
		scope=2;
		scopeArsenal=2;
		allowedSlots[] = {901};
	displayName = "(winter) [22ndODST] O.Dobson";
		picture = "\OPTRE_UNSC_Units\ODST\icons\odst_uniform_left.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformClass = "22nd_odst_winter_dobson";
			containerClass = "Supply50";
			uniformtype = "Neopren";
			mass = 10;
			author = "kripto202";
			modelSides[]={6};
		};
	};
	
///ginger\\\

	class 22nd_ODST_ginger_uniform: U_B_CombatUniform_mcam
	{
		scope=2;
		scopeArsenal=2;
		allowedSlots[] = {901};
	displayName = "[22ndODST] J.Ginger";
		picture = "\OPTRE_UNSC_Units\ODST\icons\odst_uniform_left.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformClass = "22nd_odst_ginger";
			containerClass = "Supply50";
			uniformtype = "Neopren";
			mass = 10;
			author = "kripto202";
			modelSides[]={6};
		};
	};
	
	class 22nd_ODST_ginger_winter_uniform: U_B_CombatUniform_mcam
	{
		scope=2;
		scopeArsenal=2;
		allowedSlots[] = {901};
	displayName = "(winter) [22ndODST] J.Ginger";
		picture = "\OPTRE_UNSC_Units\ODST\icons\odst_uniform_left.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformClass = "22nd_odst_winter_ginger";
			containerClass = "Supply50";
			uniformtype = "Neopren";
			mass = 10;
			author = "kripto202";
			modelSides[]={6};
		};
	};

///default\\\

	class 22nd_ODST_default_uniform: U_B_CombatUniform_mcam
	{
		scope=2;
		scopeArsenal=2;
		allowedSlots[] = {901};
	displayName = "[22ndODST] Uniform";
		picture = "\OPTRE_UNSC_Units\ODST\icons\odst_uniform_left.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformClass = "22nd_odst_default";
			containerClass = "Supply50";
			uniformtype = "Neopren";
			mass = 10;
			author = "kripto202";
			modelSides[]={6};
		};
	};
	
	class 22nd_ODST_default_winter_uniform: U_B_CombatUniform_mcam
	{
		scope=2;
		scopeArsenal=2;
		allowedSlots[] = {901};
	displayName = "(winter) [22ndODST] Uniform";
		picture = "\OPTRE_UNSC_Units\ODST\icons\odst_uniform_left.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformClass = "22nd_odst_winter_default";
			containerClass = "Supply50";
			uniformtype = "Neopren";
			mass = 10;
			author = "kripto202";
			modelSides[]={6};
		};
	};
	
	class 22nd_ODST_default_red_uniform: U_B_CombatUniform_mcam
	{
		scope=2;
		scopeArsenal=2;
		allowedSlots[] = {901};
	displayName = "[22ndODST] Red Team";
		picture = "\OPTRE_UNSC_Units\ODST\icons\odst_uniform_left.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformClass = "22nd_odst_red_default";
			containerClass = "Supply50";
			uniformtype = "Neopren";
			mass = 10;
			author = "kripto202";
			modelSides[]={6};
		};
	};
	
	class 22nd_ODST_default_winter_red_uniform: U_B_CombatUniform_mcam
	{
		scope=2;
		scopeArsenal=2;
		allowedSlots[] = {901};
	displayName = "(winter) [22ndODST] Red Team";
		picture = "\OPTRE_UNSC_Units\ODST\icons\odst_uniform_left.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformClass = "22nd_odst_winter_red_default";
			containerClass = "Supply50";
			uniformtype = "Neopren";
			mass = 10;
			author = "kripto202";
			modelSides[]={6};
		};
	};
	
	class 22nd_ODST_default_blue_uniform: U_B_CombatUniform_mcam
	{
		scope=2;
		scopeArsenal=2;
		allowedSlots[] = {901};
	displayName = "[22ndODST] Blue Team";
		picture = "\OPTRE_UNSC_Units\ODST\icons\odst_uniform_left.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformClass = "22nd_odst_blue_default";
			containerClass = "Supply50";
			uniformtype = "Neopren";
			mass = 10;
			author = "kripto202";
			modelSides[]={6};
		};
	};
	
	class 22nd_ODST_default_winter_blue_uniform: U_B_CombatUniform_mcam
	{
		scope=2;
		scopeArsenal=2;
		allowedSlots[] = {901};
	displayName = "(winter) [22ndODST] Blue Team";
		picture = "\OPTRE_UNSC_Units\ODST\icons\odst_uniform_left.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformClass = "22nd_odst_winter_blue_default";
			containerClass = "Supply50";
			uniformtype = "Neopren";
			mass = 10;
			author = "kripto202";
			modelSides[]={6};
		};
	};
	
//lopez\\

	class 22nd_ODST_lopez_uniform: U_B_CombatUniform_mcam
	{
		scope=2;
		scopeArsenal=2;
		allowedSlots[] = {901};
	displayName = "[22ndODST] P.Lopez";
		picture = "\OPTRE_UNSC_Units\ODST\icons\odst_uniform_left.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformClass = "22nd_odst_lopez";
			containerClass = "Supply50";
			uniformtype = "Neopren";
			mass = 10;
			author = "kripto202";
			modelSides[]={6};
		};
	};
	
	class 22nd_ODST_lopez_winter_uniform: U_B_CombatUniform_mcam
	{
		scope=2;
		scopeArsenal=2;
		allowedSlots[] = {901};
	displayName = "(winter) [22ndODST] P.Lopez";
		picture = "\OPTRE_UNSC_Units\ODST\icons\odst_uniform_left.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformClass = "22nd_odst_winter_lopez";
			containerClass = "Supply50";
			uniformtype = "Neopren";
			mass = 10;
			author = "kripto202";
			modelSides[]={6};
		};
	};

//yunker\\

	class 22nd_ODST_yunker_uniform: U_B_CombatUniform_mcam
	{
		scope=2;
		scopeArsenal=2;
		allowedSlots[] = {901};
	displayName = "[22ndODST] J.Yunker";
		picture = "\OPTRE_UNSC_Units\ODST\icons\odst_uniform_left.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformClass = "22nd_odst_yunker";
			uniformtype = "Neopren";
			containerClass = "Supply50";
			mass = 10;
			author = "kripto202";
			modelSides[]={6};
		};
	};
	
	class 22nd_ODST_yunker_winter_uniform: U_B_CombatUniform_mcam
	{
		scope=2;
		scopeArsenal=2;
		allowedSlots[] = {901};
	displayName = "(winter) [22ndODST] J.Yunker";
		picture = "\OPTRE_UNSC_Units\ODST\icons\odst_uniform_left.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformClass = "22nd_odst_winter_yunker";
			containerClass = "Supply50";
			uniformtype = "Neopren";
			mass = 10;
			author = "kripto202";
			modelSides[]={6};
		};
	};
	
//helmets\\
	
	class OPTRE_UNSC_ODST_Helmet_Base: H_HelmetB
	{
		scope=0;
		ace_hearing_lowerVolume = .5;
		ace_hearing_protection = 1;
		author="Article 2 Studios";
		displayName="-";
		picture="\OPTRE_UNSC_Units\ODST\icons\odst_helmet.paa";
		model="\OPTRE_UNSC_Units\ODST\helmet.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"attach_cam",
			"attach_communication",
			"attach_flashlight",
			"attach_laser",
			"attach_mount",
			"attach_rangefinder",
			"attach_rebreather"
		};
		hiddenSelectionsTextures[]=
		{
			"OPTRE_UNSC_Units\ODST\data\helmet_co.paa",
			"OPTRE_UNSC_Units\ODST\data\helmet_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			uniformModel="\OPTRE_UNSC_Units\ODST\helmet.p3d";
			armor=50;
			mass=20;
			modelSides[]={6};
			passThrough=0.1;
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"attach_cam",
				"attach_communication",
				"attach_flashlight",
				"attach_laser",
				"attach_mount",
				"attach_rangefinder",
				"attach_rebreather"
			};
			hiddenSelectionsTextures[]=
			{
				"OPTRE_UNSC_Units\ODST\data\helmet_co.paa",
				"OPTRE_UNSC_Units\ODST\data\helmet_co.paa"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=8;
					passThrough=0.5;
				};
			};
		};
	};
	class OPTRE_UNSC_ODST_Helmet: OPTRE_UNSC_ODST_Helmet_Base
	{
		scope=2;
		author="Article 2 Studios";
		displayName="[UNSC] CH253 Helmet [ODST]";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"attach_cam",
			"attach_communication",
			"attach_flashlight",
			"attach_laser",
			"attach_mount",
			"attach_rangefinder",
			"attach_rebreather"
		};
		hiddenSelectionsTextures[]=
		{
			"OPTRE_UNSC_Units\ODST\data\helmet_co.paa",
			"OPTRE_UNSC_Units\ODST\data\helmet_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"attach_cam",
				"attach_communication",
				"attach_flashlight",
				"attach_laser",
				"attach_mount",
				"attach_rangefinder",
				"attach_rebreather"
			};
			hiddenSelectionsTextures[]=
			{
				"OPTRE_UNSC_Units\ODST\data\helmet_co.paa",
				"OPTRE_UNSC_Units\ODST\data\helmet_co.paa"
			};
		};
	};
	
///kripto202\\\ 
	
	class OPTRE_UNSC_ODST_Helmet_22nd_kripto202_sniper: OPTRE_UNSC_ODST_Helmet
	{
		author="kripto202";
		picture="\OPTRE_UNSC_Units\ODST\icons\odst_helmet_sniper.paa";
		displayName="[22ndODST] M.Kripto";
		model="\OPTRE_UNSC_Units\ODST\helmet.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"attach_cam",
			"attach_communication",
			"attach_flashlight",
			"attach_laser",
			"attach_mount"
		};
		hiddenSelectionsTextures[]=
		{
			"22_odst_units\data\helmet\odst_kripto202_l0_helmet.paa",
			"22_odst_units\data\helmet\odst_kripto202_l0_helmet.paa"
		};
		class ItemInfo: HeadgearItem
		{
			uniformModel="\OPTRE_UNSC_Units\ODST\helmet.p3d";
			armor=10;
			mass=20;
			modelSides[]={6};
			passThrough=0.1;
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"attach_cam",
				"attach_communication",
				"attach_flashlight",
				"attach_laser",
				"attach_mount"
			};
			hiddenSelectionsTextures[]=
			{
				"22_odst_units\data\helmet\odst_kripto202_l0_helmet.paa",
				"22_odst_units\data\helmet\odst_kripto202_l0_helmet.paa"
			};
		};
	};
	
	class OPTRE_UNSC_ODST_Helmet_22nd_kripto202_sniper_dp: OPTRE_UNSC_ODST_Helmet_22nd_kripto202_sniper
	{
		author="kripto202";
		scopeArsenal=1;
		scopeCurator=1;
		hiddenSelectionsTextures[]=
		{
			"22_odst_units\data\helmet\odst_kripto202_l0_helmet.paa",
			"optre_vehicles\pelican\data\glass_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"OPTRE_UNSC_Units\ODST\data\helmet.rvmat",
			"optre_vehicles\pelican\data\reflective_glass.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"22_odst_units\data\helmet\odst_kripto202_l0_helmet.paa",
				"optre_vehicles\pelican\data\glass_ca.paa"
			};
			hiddenSelectionsMaterials[]=
			{
				"OPTRE_UNSC_Units\ODST\data\helmet.rvmat",
				"optre_vehicles\pelican\data\reflective_glass.rvmat"
			};
		};
	};
	
	class OPTRE_UNSC_ODST_Helmet_22nd_kripto202_sniper_winter: OPTRE_UNSC_ODST_Helmet
	{
		author="kripto202";
		picture="\OPTRE_UNSC_Units\ODST\icons\odst_helmet_sniper.paa";
		displayName="(winter) [22ndODST] M.Kripto";
		model="\OPTRE_UNSC_Units\ODST\helmet.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"attach_cam",
			"attach_communication",
			"attach_flashlight",
			"attach_laser",
			"attach_mount"
		};
		hiddenSelectionsTextures[]=
		{
			"22_odst_units\data\helmet\odst_kripto202_l0_winter_helmet.paa",
			"22_odst_units\data\helmet\odst_kripto202_l0_winter_helmet.paa"
		};
		class ItemInfo: HeadgearItem
		{
			uniformModel="\OPTRE_UNSC_Units\ODST\helmet.p3d";
			armor=50;
			mass=20;
			modelSides[]={6};
			passThrough=0.1;
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"attach_cam",
				"attach_communication",
				"attach_flashlight",
				"attach_laser",
				"attach_mount"
			};
			hiddenSelectionsTextures[]=
			{
				"22_odst_units\data\helmet\odst_kripto202_l0_winter_helmet.paa",
				"22_odst_units\data\helmet\odst_kripto202_l0_winter_helmet.paa"
			};
		};
	};
	
	class OPTRE_UNSC_ODST_Helmet_22nd_kripto202_sniper_winter_dp: OPTRE_UNSC_ODST_Helmet_22nd_kripto202_sniper_winter
	{
		author="kripto202";
		scopeArsenal=1;
		scopeCurator=1;
		hiddenSelectionsTextures[]=
		{
			"22_odst_units\data\helmet\odst_kripto202_l0_winter_helmet.paa",
			"optre_vehicles\pelican\data\glass_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"OPTRE_UNSC_Units\ODST\data\helmet.rvmat",
			"optre_vehicles\pelican\data\reflective_glass.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"22_odst_units\data\helmet\odst_kripto202_l0_winter_helmet.paa",
				"optre_vehicles\pelican\data\glass_ca.paa"
			};
			hiddenSelectionsMaterials[]=
			{
				"OPTRE_UNSC_Units\ODST\data\helmet.rvmat",
				"optre_vehicles\pelican\data\reflective_glass.rvmat"
			};
		};
	};

///garrus\\\ 

	class OPTRE_UNSC_ODST_Helmet_22nd_garrus_comms: OPTRE_UNSC_ODST_Helmet
	{
		author="kripto202";
		picture="\OPTRE_UNSC_Units\ODST\icons\odst_helmet_como.paa";
		displayName="[22ndODST] M.Steros";
		model="\OPTRE_UNSC_Units\ODST\helmet.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"attach_cam",
			"attach_flashlight",
			"attach_rebreather",
			"attach_rangefinder",
			"attach_laser",
			"attach_mount"
		};
		hiddenSelectionsTextures[]=
		{
			"22_odst_units\data\helmet\odst_garrus_l0_helmet.paa",
			"22_odst_units\data\helmet\odst_garrus_l0_helmet.paa"
		};
		class ItemInfo: HeadgearItem
		{
			uniformModel="\OPTRE_UNSC_Units\ODST\helmet.p3d";
			armor=10;
			mass=20;
			modelSides[]={6};
			passThrough=0.1;
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"attach_cam",
				"attach_flashlight",
				"attach_rebreather",
				"attach_rangefinder",
				"attach_laser",
				"attach_mount"
			};
			hiddenSelectionsTextures[]=
			{
				"22_odst_units\data\helmet\odst_garrus_l0_helmet.paa",
				"22_odst_units\data\helmet\odst_garrus_l0_helmet.paa"
			};
		};
	};
	
	class OPTRE_UNSC_ODST_Helmet_22nd_garrus_comms_dp: OPTRE_UNSC_ODST_Helmet_22nd_garrus_comms
	{
		author="kripto202";
		scopeArsenal=1;
		scopeCurator=1;
		hiddenSelectionsTextures[]=
		{
			"22_odst_units\data\helmet\odst_garrus_l0_helmet.paa",
			"optre_vehicles\pelican\data\glass_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"OPTRE_UNSC_Units\ODST\data\helmet.rvmat",
			"optre_vehicles\pelican\data\reflective_glass.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"22_odst_units\data\helmet\odst_garrus_l0_helmet.paa",
				"optre_vehicles\pelican\data\glass_ca.paa"
			};
			hiddenSelectionsMaterials[]=
			{
				"OPTRE_UNSC_Units\ODST\data\helmet.rvmat",
				"optre_vehicles\pelican\data\reflective_glass.rvmat"
			};
		};
	};
	
	class OPTRE_UNSC_ODST_Helmet_22nd_garrus_comms_winter: OPTRE_UNSC_ODST_Helmet
	{
		author="kripto202";
		picture="\OPTRE_UNSC_Units\ODST\icons\odst_helmet_como.paa";
		displayName="(winter) [22ndODST] M.Steros";
		model="\OPTRE_UNSC_Units\ODST\helmet.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"attach_cam",
			"attach_flashlight",
			"attach_rebreather",
			"attach_rangefinder",
			"attach_laser",
			"attach_mount"
		};
		hiddenSelectionsTextures[]=
		{
			"22_odst_units\data\helmet\odst_garrus_l0_winter_helmet.paa",
			"22_odst_units\data\helmet\odst_garrus_l0_winter_helmet.paa"
		};
		class ItemInfo: HeadgearItem
		{
			uniformModel="\OPTRE_UNSC_Units\ODST\helmet.p3d";
			armor=10;
			mass=20;
			modelSides[]={6};
			passThrough=0.1;
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"attach_cam",
				"attach_flashlight",
				"attach_rebreather",
				"attach_rangefinder",
				"attach_laser",
				"attach_mount"
			};
			hiddenSelectionsTextures[]=
			{
				"22_odst_units\data\helmet\odst_garrus_l0_winter_helmet.paa",
				"22_odst_units\data\helmet\odst_garrus_l0_winter_helmet.paa"
			};
		};
	};
	
	class OPTRE_UNSC_ODST_Helmet_22nd_garrus_comms_winter_dp: OPTRE_UNSC_ODST_Helmet_22nd_garrus_comms_winter
	{
		author="kripto202";
		scopeArsenal=1;
		scopeCurator=1;
		hiddenSelectionsTextures[]=
		{
			"22_odst_units\data\helmet\odst_garrus_l0_winter_helmet.paa",
			"optre_vehicles\pelican\data\glass_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"OPTRE_UNSC_Units\ODST\data\helmet.rvmat",
			"optre_vehicles\pelican\data\reflective_glass.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"22_odst_units\data\helmet\odst_garrus_l0_winter_helmet.paa",
				"optre_vehicles\pelican\data\glass_ca.paa"
			};
			hiddenSelectionsMaterials[]=
			{
				"OPTRE_UNSC_Units\ODST\data\helmet.rvmat",
				"optre_vehicles\pelican\data\reflective_glass.rvmat"
			};
		};
	};

///darren\\\

	class OPTRE_UNSC_ODST_Helmet_22nd_darren: OPTRE_UNSC_ODST_Helmet
	{
		author="kripto202";
		picture="\OPTRE_UNSC_Units\ODST\icons\odst_helmet_med.paa";
		displayName="[22ndODST] D.Darren (Corpsman)";
		model="\OPTRE_UNSC_Units\ODST\helmet.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"attach_cam",
			"attach_communication",
			"attach_flashlight",
			"attach_laser",
			"attach_mount",
			"attach_rangefinder"
		};
		hiddenSelectionsTextures[]=
		{
			"22_odst_units\data\helmet\odst_darren_l0_helmet.paa",
			"22_odst_units\data\helmet\odst_darren_l0_helmet.paa"
		};
		class ItemInfo: HeadgearItem
		{
			uniformModel="\OPTRE_UNSC_Units\ODST\helmet.p3d";
			armor=10;
			mass=20;
			modelSides[]={6};
			passThrough=0.1;
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"attach_cam",
				"attach_communication",
				"attach_flashlight",
				"attach_laser",
				"attach_mount",
				"attach_rangefinder",
			};
			hiddenSelectionsTextures[]=
			{
				"22_odst_units\data\helmet\odst_darren_l0_helmet.paa",
				"22_odst_units\data\helmet\odst_darren_l0_helmet.paa"
			};
		};
	};
	
	class OPTRE_UNSC_ODST_Helmet_22nd_darren_dp: OPTRE_UNSC_ODST_Helmet_22nd_darren
	{
		author="kripto202";
		scopeArsenal=1;
		scopeCurator=1;
		hiddenSelectionsTextures[]=
		{
			"22_odst_units\data\helmet\odst_darren_l0_helmet.paa",
			"optre_vehicles\pelican\data\glass_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"OPTRE_UNSC_Units\ODST\data\helmet.rvmat",
			"optre_vehicles\pelican\data\reflective_glass.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"22_odst_units\data\helmet\odst_darren_l0_helmet.paa",
				"optre_vehicles\pelican\data\glass_ca.paa"
			};
			hiddenSelectionsMaterials[]=
			{
				"OPTRE_UNSC_Units\ODST\data\helmet.rvmat",
				"optre_vehicles\pelican\data\reflective_glass.rvmat"
			};
		};
	};
	
	class OPTRE_UNSC_ODST_Helmet_22nd_darren_winter: OPTRE_UNSC_ODST_Helmet
	{
		author="kripto202";
		picture="\OPTRE_UNSC_Units\ODST\icons\odst_helmet_med.paa";
		displayName="(winter) [22ndODST] D.Darren (Corpsman)";
		model="\OPTRE_UNSC_Units\ODST\helmet.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"attach_cam",
			"attach_communication",
			"attach_laser",
			"attach_mount",
			"attach_rangefinder"
		};
		hiddenSelectionsTextures[]=
		{
			"22_odst_units\data\helmet\odst_darren_l0_winter_helmet.paa",
			"22_odst_units\data\helmet\odst_darren_l0_winter_helmet.paa"
		};
		class ItemInfo: HeadgearItem
		{
			uniformModel="\OPTRE_UNSC_Units\ODST\helmet.p3d";
			armor=10;
			mass=20;
			modelSides[]={6};
			passThrough=0.1;
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"attach_cam",
				"attach_communication",
				"attach_laser",
				"attach_mount",
				"attach_rangefinder",
			};
			hiddenSelectionsTextures[]=
			{
				"22_odst_units\data\helmet\odst_darren_l0_winter_helmet.paa",
				"22_odst_units\data\helmet\odst_darren_l0_winter_helmet.paa"
			};
		};
	};
	
	class OPTRE_UNSC_ODST_Helmet_22nd_darren_winter_dp: OPTRE_UNSC_ODST_Helmet_22nd_darren_winter
	{
		author="kripto202";
		scopeArsenal=1;
		scopeCurator=1;
		hiddenSelectionsTextures[]=
		{
			"22_odst_units\data\helmet\odst_darren_l0_winter_helmet.paa",
			"optre_vehicles\pelican\data\glass_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"OPTRE_UNSC_Units\ODST\data\helmet.rvmat",
			"optre_vehicles\pelican\data\reflective_glass.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"22_odst_units\data\helmet\odst_darren_l0_winter_helmet.paa",
				"optre_vehicles\pelican\data\glass_ca.paa"
			};
			hiddenSelectionsMaterials[]=
			{
				"OPTRE_UNSC_Units\ODST\data\helmet.rvmat",
				"optre_vehicles\pelican\data\reflective_glass.rvmat"
			};
		};
	};

///barkhorn\\\

	class OPTRE_UNSC_ODST_Helmet_22nd_barkhorn: OPTRE_UNSC_ODST_Helmet
	{
		author="kripto202";
		picture="\OPTRE_UNSC_Units\ODST\icons\odst_helmet.paa";
		displayName="[22ndODST] G.Barkhorn";
		model="\OPTRE_UNSC_Units\ODST\helmet.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"attach_cam",
			"attach_communication",
			"attach_flashlight",
			"attach_rebreather",
			"attach_mount",
			"attach_rangefinder"
		};
		hiddenSelectionsTextures[]=
		{
			"22_odst_units\data\helmet\odst_barkhorn_l0_helmet.paa",
			"22_odst_units\data\helmet\odst_barkhorn_l0_helmet.paa"
		};
		class ItemInfo: HeadgearItem
		{
			uniformModel="\OPTRE_UNSC_Units\ODST\helmet.p3d";
			armor=10;
			mass=20;
			modelSides[]={6};
			passThrough=0.1;
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"attach_cam",
				"attach_communication",
				"attach_flashlight",
				"attach_rebreather",
				"attach_mount",
				"attach_rangefinder"
			};
			hiddenSelectionsTextures[]=
			{
				"22_odst_units\data\helmet\odst_barkhorn_l0_helmet.paa",
				"22_odst_units\data\helmet\odst_barkhorn_l0_helmet.paa"
			};
		};
	};
	
	class OPTRE_UNSC_ODST_Helmet_22nd_barkhorn_dp: OPTRE_UNSC_ODST_Helmet_22nd_barkhorn
	{
		author="kripto202";
		scopeArsenal=1;
		scopeCurator=1;
		hiddenSelectionsTextures[]=
		{
			"22_odst_units\data\helmet\odst_barkhorn_l0_helmet.paa",
			"optre_vehicles\pelican\data\glass_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"OPTRE_UNSC_Units\ODST\data\helmet.rvmat",
			"optre_vehicles\pelican\data\reflective_glass.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"22_odst_units\data\helmet\odst_barkhorn_l0_helmet.paa",
				"optre_vehicles\pelican\data\glass_ca.paa"
			};
			hiddenSelectionsMaterials[]=
			{
				"OPTRE_UNSC_Units\ODST\data\helmet.rvmat",
				"optre_vehicles\pelican\data\reflective_glass.rvmat"
			};
		};
	};
	
	class OPTRE_UNSC_ODST_Helmet_22nd_barkhorn_winter: OPTRE_UNSC_ODST_Helmet
	{
		author="kripto202";
		picture="\OPTRE_UNSC_Units\ODST\icons\odst_helmet.paa";
		displayName="(winter) [22ndODST] G.Barkhorn";
		model="\OPTRE_UNSC_Units\ODST\helmet.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"attach_cam",
			"attach_communication",
			"attach_flashlight",
			"attach_rebreather",
			"attach_mount",
			"attach_rangefinder"
		};
		hiddenSelectionsTextures[]=
		{
			"22_odst_units\data\helmet\odst_barkhorn_l0_winter_helmet.paa",
			"22_odst_units\data\helmet\odst_barkhorn_l0_winter_helmet.paa"
		};
		class ItemInfo: HeadgearItem
		{
			uniformModel="\OPTRE_UNSC_Units\ODST\helmet.p3d";
			armor=10;
			mass=20;
			modelSides[]={6};
			passThrough=0.1;
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"attach_cam",
				"attach_communication",
				"attach_flashlight",
				"attach_rebreather",
				"attach_mount",
				"attach_rangefinder"
			};
			hiddenSelectionsTextures[]=
			{
				"22_odst_units\data\helmet\odst_barkhorn_l0_winter_helmet.paa",
				"22_odst_units\data\helmet\odst_barkhorn_l0_winter_helmet.paa"
			};
		};
	};
	
	class OPTRE_UNSC_ODST_Helmet_22nd_barkhorn_winter_dp: OPTRE_UNSC_ODST_Helmet_22nd_barkhorn_winter
	{
		author="kripto202";
		scopeArsenal=1;
		scopeCurator=1;
		hiddenSelectionsTextures[]=
		{
			"22_odst_units\data\helmet\odst_barkhorn_l0_winter_helmet.paa",
			"optre_vehicles\pelican\data\glass_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"OPTRE_UNSC_Units\ODST\data\helmet.rvmat",
			"optre_vehicles\pelican\data\reflective_glass.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"22_odst_units\data\helmet\odst_barkhorn_l0_winter_helmet.paa",
				"optre_vehicles\pelican\data\glass_ca.paa"
			};
			hiddenSelectionsMaterials[]=
			{
				"OPTRE_UNSC_Units\ODST\data\helmet.rvmat",
				"optre_vehicles\pelican\data\reflective_glass.rvmat"
			};
		};
	};

///litch\\\

	class OPTRE_UNSC_ODST_Helmet_22nd_litch: OPTRE_UNSC_ODST_Helmet
	{
		author="kripto202";
		picture="\OPTRE_UNSC_Units\ODST\icons\odst_helmet.paa";
		displayName="[22ndODST] J.Litch";
		model="\OPTRE_UNSC_Units\ODST\helmet.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"attach_cam",
			"attach_communication",
			"attach_laser",
			"attach_mount",
			"attach_rangefinder",
			"attach_flashlight",
			"attach_rebreather"
		};
		hiddenSelectionsTextures[]=
		{
			"22_odst_units\data\helmet\odst_litch_l0_helmet.paa",
			"22_odst_units\data\helmet\odst_litch_l0_helmet.paa"
		};
		class ItemInfo: HeadgearItem
		{
			uniformModel="\OPTRE_UNSC_Units\ODST\helmet.p3d";
			armor=10;
			mass=20;
			modelSides[]={6};
			passThrough=0.1;
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"attach_cam",
				"attach_communication",
				"attach_laser",
				"attach_mount",
				"attach_rangefinder",
				"attach_flashlight",
				"attach_rebreather"
			};
			hiddenSelectionsTextures[]=
			{
				"22_odst_units\data\helmet\odst_litch_l0_helmet.paa",
				"22_odst_units\data\helmet\odst_litch_l0_helmet.paa"
			};
		};
	};
	
	class OPTRE_UNSC_ODST_Helmet_22nd_litch_dp: OPTRE_UNSC_ODST_Helmet_22nd_litch
	{
		author="kripto202";
		scopeArsenal=1;
		scopeCurator=1;
		hiddenSelectionsTextures[]=
		{
			"22_odst_units\data\helmet\odst_litch_l0_helmet.paa",
			"optre_vehicles\pelican\data\glass_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"OPTRE_UNSC_Units\ODST\data\helmet.rvmat",
			"optre_vehicles\pelican\data\reflective_glass.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"22_odst_units\data\helmet\odst_litch_l0_helmet.paa",
				"optre_vehicles\pelican\data\glass_ca.paa"
			};
			hiddenSelectionsMaterials[]=
			{
				"OPTRE_UNSC_Units\ODST\data\helmet.rvmat",
				"optre_vehicles\pelican\data\reflective_glass.rvmat"
			};
		};
	};
	
	class OPTRE_UNSC_ODST_Helmet_22nd_litch_winter: OPTRE_UNSC_ODST_Helmet
	{
		author="kripto202";
		picture="\OPTRE_UNSC_Units\ODST\icons\odst_helmet.paa";
		displayName="(winter) [22ndODST] J.Litch";
		model="\OPTRE_UNSC_Units\ODST\helmet.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"attach_cam",
			"attach_communication",
			"attach_laser",
			"attach_mount",
			"attach_rangefinder",
			"attach_flashlight",
			"attach_rebreather"
		};
		hiddenSelectionsTextures[]=
		{
			"22_odst_units\data\helmet\odst_litch_l0_winter_helmet.paa",
			"22_odst_units\data\helmet\odst_litch_l0_winter_helmet.paa"
		};
		class ItemInfo: HeadgearItem
		{
			uniformModel="\OPTRE_UNSC_Units\ODST\helmet.p3d";
			armor=10;
			mass=20;
			modelSides[]={6};
			passThrough=0.1;
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"attach_cam",
				"attach_communication",
				"attach_laser",
				"attach_mount",
				"attach_rangefinder",
				"attach_flashlight",
				"attach_rebreather"
			};
			hiddenSelectionsTextures[]=
			{
				"22_odst_units\data\helmet\odst_litch_l0_winter_helmet.paa",
				"22_odst_units\data\helmet\odst_litch_l0_winter_helmet.paa"
			};
		};
	};
	
	class OPTRE_UNSC_ODST_Helmet_22nd_litch_winter_dp: OPTRE_UNSC_ODST_Helmet_22nd_litch_winter
	{
		author="kripto202";
		scopeArsenal=1;
		scopeCurator=1;
		hiddenSelectionsTextures[]=
		{
			"22_odst_units\data\helmet\odst_litch_l0_winter_helmet.paa",
			"optre_vehicles\pelican\data\glass_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"OPTRE_UNSC_Units\ODST\data\helmet.rvmat",
			"optre_vehicles\pelican\data\reflective_glass.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"22_odst_units\data\helmet\odst_litch_l0_winter_helmet.paa",
				"optre_vehicles\pelican\data\glass_ca.paa"
			};
			hiddenSelectionsMaterials[]=
			{
				"OPTRE_UNSC_Units\ODST\data\helmet.rvmat",
				"optre_vehicles\pelican\data\reflective_glass.rvmat"
			};
		};
	};

///dobson\\\

	class OPTRE_UNSC_ODST_Helmet_22nd_dobson: OPTRE_UNSC_ODST_Helmet
	{
		author="kripto202";
		picture="\OPTRE_UNSC_Units\ODST\icons\odst_helmet.paa";
		displayName="[22ndODST] O.Dobson";
		model="\OPTRE_UNSC_Units\ODST\helmet.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"attach_cam",
			"attach_communication",
			"attach_flashlight",
			"attach_rebreather",
			"attach_laser",
			"attach_mount"
		};
		hiddenSelectionsTextures[]=
		{
			"22_odst_units\data\helmet\odst_dobson_l0_helmet.paa",
			"22_odst_units\data\helmet\odst_dobson_l0_helmet.paa"
		};
		class ItemInfo: HeadgearItem
		{
			uniformModel="\OPTRE_UNSC_Units\ODST\helmet.p3d";
			armor=10;
			mass=20;
			modelSides[]={6};
			passThrough=0.1;
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"attach_cam",
				"attach_communication",
				"attach_flashlight",
				"attach_rebreather",
				"attach_laser",
				"attach_mount"
			};
			hiddenSelectionsTextures[]=
			{
				"22_odst_units\data\helmet\odst_dobson_l0_helmet.paa",
				"22_odst_units\data\helmet\odst_dobson_l0_helmet.paa"
			};
		};
	};
	
	class OPTRE_UNSC_ODST_Helmet_22nd_dobson_dp: OPTRE_UNSC_ODST_Helmet_22nd_dobson
	{
		author="kripto202";
		scopeArsenal=1;
		scopeCurator=1;
		hiddenSelectionsTextures[]=
		{
			"22_odst_units\data\helmet\odst_dobson_l0_helmet.paa",
			"optre_vehicles\pelican\data\glass_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"OPTRE_UNSC_Units\ODST\data\helmet.rvmat",
			"optre_vehicles\pelican\data\reflective_glass.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"22_odst_units\data\helmet\odst_dobson_l0_helmet.paa",
				"optre_vehicles\pelican\data\glass_ca.paa"
			};
			hiddenSelectionsMaterials[]=
			{
				"OPTRE_UNSC_Units\ODST\data\helmet.rvmat",
				"optre_vehicles\pelican\data\reflective_glass.rvmat"
			};
		};
	};
	
	class OPTRE_UNSC_ODST_Helmet_22nd_dobson_winter: OPTRE_UNSC_ODST_Helmet
	{
		author="kripto202";
		picture="\OPTRE_UNSC_Units\ODST\icons\odst_helmet.paa";
		displayName="(winter) [22ndODST] O.Dobson";
		model="\OPTRE_UNSC_Units\ODST\helmet.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"attach_cam",
			"attach_communication",
			"attach_flashlight",
			"attach_rebreather",
			"attach_laser",
			"attach_mount"
		};
		hiddenSelectionsTextures[]=
		{
			"22_odst_units\data\helmet\odst_dobson_l0_winter_helmet.paa",
			"22_odst_units\data\helmet\odst_dobson_l0_winter_helmet.paa"
		};
		class ItemInfo: HeadgearItem
		{
			uniformModel="\OPTRE_UNSC_Units\ODST\helmet.p3d";
			armor=10;
			mass=20;
			modelSides[]={6};
			passThrough=0.1;
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"attach_cam",
				"attach_communication",
				"attach_flashlight",
				"attach_rebreather",
				"attach_laser",
				"attach_mount"
			};
			hiddenSelectionsTextures[]=
			{
				"22_odst_units\data\helmet\odst_dobson_l0_winter_helmet.paa",
				"22_odst_units\data\helmet\odst_dobson_l0_winter_helmet.paa"
			};
		};
	};
	
	class OPTRE_UNSC_ODST_Helmet_22nd_dobson_winter_dp: OPTRE_UNSC_ODST_Helmet_22nd_dobson_winter
	{
		author="kripto202";
		scopeArsenal=1;
		scopeCurator=1;
		hiddenSelectionsTextures[]=
		{
			"22_odst_units\data\helmet\odst_dobson_l0_winter_helmet.paa",
			"optre_vehicles\pelican\data\glass_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"OPTRE_UNSC_Units\ODST\data\helmet.rvmat",
			"optre_vehicles\pelican\data\reflective_glass.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"22_odst_units\data\helmet\odst_dobson_l0_winter_helmet.paa",
				"optre_vehicles\pelican\data\glass_ca.paa"
			};
			hiddenSelectionsMaterials[]=
			{
				"OPTRE_UNSC_Units\ODST\data\helmet.rvmat",
				"optre_vehicles\pelican\data\reflective_glass.rvmat"
			};
		};
	};

///ginger\\\

	class OPTRE_UNSC_ODST_Helmet_22nd_ginger: OPTRE_UNSC_ODST_Helmet
	{
		author="kripto202";
		picture="\OPTRE_UNSC_Units\ODST\icons\odst_helmet.paa";
		displayName="[22ndODST] J.Ginger";
		model="\OPTRE_UNSC_Units\ODST\helmet.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"attach_mount",
			"attach_rangefinder",
			"attach_rebreather",
			"attach_flashlight",
			"attach_cam"
		};
		hiddenSelectionsTextures[]=
		{
			"22_odst_units\data\helmet\odst_ginger_l0_helmet.paa",
			"22_odst_units\data\helmet\odst_ginger_l0_helmet.paa"
		};
		class ItemInfo: HeadgearItem
		{
			uniformModel="\OPTRE_UNSC_Units\ODST\helmet.p3d";
			armor=10;
			mass=20;
			modelSides[]={6};
			passThrough=0.1;
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"attach_mount",
				"attach_rangefinder",
				"attach_rebreather",
				"attach_flashlight",
				"attach_cam"
			};
			hiddenSelectionsTextures[]=
			{
				"22_odst_units\data\helmet\odst_ginger_l0_helmet.paa",
				"22_odst_units\data\helmet\odst_ginger_l0_helmet.paa"
			};
		};
	};
	
	class OPTRE_UNSC_ODST_Helmet_22nd_ginger_dp: OPTRE_UNSC_ODST_Helmet_22nd_ginger
	{
		author="kripto202";
		scopeArsenal=1;
		scopeCurator=1;
		hiddenSelectionsTextures[]=
		{
			"22_odst_units\data\helmet\odst_ginger_l0_helmet.paa",
			"optre_vehicles\pelican\data\glass_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"OPTRE_UNSC_Units\ODST\data\helmet.rvmat",
			"optre_vehicles\pelican\data\reflective_glass.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"22_odst_units\data\helmet\odst_ginger_l0_helmet.paa",
				"optre_vehicles\pelican\data\glass_ca.paa"
			};
			hiddenSelectionsMaterials[]=
			{
				"OPTRE_UNSC_Units\ODST\data\helmet.rvmat",
				"optre_vehicles\pelican\data\reflective_glass.rvmat"
			};
		};
	};
	
	class OPTRE_UNSC_ODST_Helmet_22nd_ginger_winter: OPTRE_UNSC_ODST_Helmet
	{
		author="kripto202";
		picture="\OPTRE_UNSC_Units\ODST\icons\odst_helmet.paa";
		displayName="(winter) [22ndODST] J.Ginger";
		model="\OPTRE_UNSC_Units\ODST\helmet.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"attach_cam",
			"attach_flashlight",
			"attach_mount",
			"attach_rangefinder",
			"attach_rebreather"
		};
		hiddenSelectionsTextures[]=
		{
			"22_odst_units\data\helmet\odst_ginger_l0_winter_helmet.paa",
			"22_odst_units\data\helmet\odst_ginger_l0_winter_helmet.paa"
		};
		class ItemInfo: HeadgearItem
		{
			uniformModel="\OPTRE_UNSC_Units\ODST\helmet.p3d";
			armor=10;
			mass=20;
			modelSides[]={6};
			passThrough=0.1;
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"attach_cam",
				"attach_flaslight",
				"attach_mount",
				"attach_rangefinder",
				"attach_rebreather"
			};
			hiddenSelectionsTextures[]=
			{
				"22_odst_units\data\helmet\odst_ginger_l0_winter_helmet.paa",
				"22_odst_units\data\helmet\odst_ginger_l0_winter_helmet.paa"
			};
		};
	};
	
	class OPTRE_UNSC_ODST_Helmet_22nd_ginger_winter_dp: OPTRE_UNSC_ODST_Helmet_22nd_ginger_winter
	{
		author="kripto202";
		scopeArsenal=1;
		scopeCurator=1;
		hiddenSelectionsTextures[]=
		{
			"22_odst_units\data\helmet\odst_ginger_l0_winter_helmet.paa",
			"optre_vehicles\pelican\data\glass_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"OPTRE_UNSC_Units\ODST\data\helmet.rvmat",
			"optre_vehicles\pelican\data\reflective_glass.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"22_odst_units\data\helmet\odst_ginger_l0_winter_helmet.paa",
				"optre_vehicles\pelican\data\glass_ca.paa"
			};
			hiddenSelectionsMaterials[]=
			{
				"OPTRE_UNSC_Units\ODST\data\helmet.rvmat",
				"optre_vehicles\pelican\data\reflective_glass.rvmat"
			};
		};
	};

///default\\\

	class OPTRE_UNSC_ODST_Helmet_22nd_default: OPTRE_UNSC_ODST_Helmet
	{
		author="kripto202";
		picture="\OPTRE_UNSC_Units\ODST\icons\odst_helmet.paa";
		displayName="[22ndODST] Default";
		model="\OPTRE_UNSC_Units\ODST\helmet.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"attach_cam",
			"attach_communication",
			"attach_flashlight",
			"attach_laser",
			"attach_mount",
			"attach_rangefinder",
			"attach_rebreather"
		};
		hiddenSelectionsTextures[]=
		{
			"22_odst_units\data\helmet\odst_default_l0_helmet.paa",
			"22_odst_units\data\helmet\odst_default_l0_helmet.paa"
		};
		class ItemInfo: HeadgearItem
		{
			uniformModel="\OPTRE_UNSC_Units\ODST\helmet.p3d";
			armor=10;
			mass=20;
			modelSides[]={6};
			passThrough=0.1;
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"attach_cam",
				"attach_communication",
				"attach_flashlight",
				"attach_laser",
				"attach_mount",
				"attach_rangefinder",
				"attach_rebreather"
			};
			hiddenSelectionsTextures[]=
			{
				"22_odst_units\data\helmet\odst_default_l0_helmet.paa",
				"22_odst_units\data\helmet\odst_default_l0_helmet.paa"
			};
		};
	};
	
	class OPTRE_UNSC_ODST_Helmet_22nd_default_dp: OPTRE_UNSC_ODST_Helmet_22nd_default
	{
		author="kripto202";
		scopeArsenal=1;
		scopeCurator=1;
		hiddenSelectionsTextures[]=
		{
			"22_odst_units\data\helmet\odst_default_l0_helmet.paa",
			"optre_vehicles\pelican\data\glass_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"OPTRE_UNSC_Units\ODST\data\helmet.rvmat",
			"optre_vehicles\pelican\data\reflective_glass.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"22_odst_units\data\helmet\odst_default_l0_helmet.paa",
				"optre_vehicles\pelican\data\glass_ca.paa"
			};
			hiddenSelectionsMaterials[]=
			{
				"OPTRE_UNSC_Units\ODST\data\helmet.rvmat",
				"optre_vehicles\pelican\data\reflective_glass.rvmat"
			};
		};
	};
	
//lopez\\

	class OPTRE_UNSC_ODST_Helmet_22nd_lopez: OPTRE_UNSC_ODST_Helmet
	{
		author="kripto202";
		picture="\OPTRE_UNSC_Units\ODST\icons\odst_helmet.paa";
		displayName="[22ndODST] P.Lopez";
		model="\OPTRE_UNSC_Units\ODST\helmet.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"attach_communication",
			"attach_rebreather",
			"attach_laser",
			"attach_mount",
			"attach_rangefinder"
		};
		hiddenSelectionsTextures[]=
		{
			"22_odst_units\data\helmet\odst_lopez_l0_helmet.paa",
			"22_odst_units\data\helmet\odst_lopez_l0_helmet.paa"
		};
		class ItemInfo: HeadgearItem
		{
			uniformModel="\OPTRE_UNSC_Units\ODST\helmet.p3d";
			armor=10;
			mass=20;
			modelSides[]={6};
			passThrough=0.1;
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"attach_communication",
				"attach_rebreather",
				"attach_laser",
				"attach_mount",
				"attach_rangefinder"
			};
			hiddenSelectionsTextures[]=
			{
				"22_odst_units\data\helmet\odst_lopez_l0_helmet.paa",
				"22_odst_units\data\helmet\odst_lopez_l0_helmet.paa"
			};
		};
	};
	
	class OPTRE_UNSC_ODST_Helmet_22nd_lopez_dp: OPTRE_UNSC_ODST_Helmet_22nd_lopez
	{
		author="kripto202";
		scopeArsenal=1;
		scopeCurator=1;
		hiddenSelectionsTextures[]=
		{
			"22_odst_units\data\helmet\odst_lopez_l0_helmet.paa",
			"optre_vehicles\pelican\data\glass_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"OPTRE_UNSC_Units\ODST\data\helmet.rvmat",
			"optre_vehicles\pelican\data\reflective_glass.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"22_odst_units\data\helmet\odst_lopez_l0_helmet.paa",
				"optre_vehicles\pelican\data\glass_ca.paa"
			};
			hiddenSelectionsMaterials[]=
			{
				"OPTRE_UNSC_Units\ODST\data\helmet.rvmat",
				"optre_vehicles\pelican\data\reflective_glass.rvmat"
			};
		};
	};
	
	class OPTRE_UNSC_ODST_Helmet_22nd_lopez_winter: OPTRE_UNSC_ODST_Helmet
	{
		author="kripto202";
		picture="\OPTRE_UNSC_Units\ODST\icons\odst_helmet.paa";
		displayName="(winter) [22ndODST] P.Lopez";
		model="\OPTRE_UNSC_Units\ODST\helmet.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"attach_communication",
			"attach_rebreather",
			"attach_laser",
			"attach_mount",
			"attach_rangefinder"
		};
		hiddenSelectionsTextures[]=
		{
			"22_odst_units\data\helmet\odst_lopez_l0_winter_helmet.paa",
			"22_odst_units\data\helmet\odst_lopez_l0_winter_helmet.paa"
		};
		class ItemInfo: HeadgearItem
		{
			uniformModel="\OPTRE_UNSC_Units\ODST\helmet.p3d";
			armor=10;
			mass=20;
			modelSides[]={6};
			passThrough=0.1;
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"attach_communication",
				"attach_rebreather",
				"attach_laser",
				"attach_mount",
				"attach_rangefinder"
			};
			hiddenSelectionsTextures[]=
			{
				"22_odst_units\data\helmet\odst_lopez_l0_winter_helmet.paa",
				"22_odst_units\data\helmet\odst_lopez_l0_winter_helmet.paa"
			};
		};
	};
	
	class OPTRE_UNSC_ODST_Helmet_22nd_lopez_winter_dp: OPTRE_UNSC_ODST_Helmet_22nd_lopez_winter
	{
		author="kripto202";
		scopeArsenal=1;
		scopeCurator=1;
		hiddenSelectionsTextures[]=
		{
			"22_odst_units\data\helmet\odst_lopez_l0_winter_helmet.paa",
			"optre_vehicles\pelican\data\glass_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"OPTRE_UNSC_Units\ODST\data\helmet.rvmat",
			"optre_vehicles\pelican\data\reflective_glass.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"22_odst_units\data\helmet\odst_lopez_l0_winter_helmet.paa",
				"optre_vehicles\pelican\data\glass_ca.paa"
			};
			hiddenSelectionsMaterials[]=
			{
				"OPTRE_UNSC_Units\ODST\data\helmet.rvmat",
				"optre_vehicles\pelican\data\reflective_glass.rvmat"
			};
		};
	};
	
//yunker\\

	class OPTRE_UNSC_ODST_Helmet_22nd_yunker: OPTRE_UNSC_ODST_Helmet
	{
		author="kripto202";
		picture="\OPTRE_UNSC_Units\ODST\icons\odst_helmet_med.paa";
		displayName="[22ndODST] J.Yunker";
		model="\OPTRE_UNSC_Units\ODST\helmet.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"attach_cam",
			"attach_communication",
			"attach_flashlight",
			"attach_laser",
			"attach_mount",
			"attach_rangefinder",
			"attach_rebreather"
		};
		hiddenSelectionsTextures[]=
		{
			"22_odst_units\data\helmet\odst_yunker_l0_helmet.paa",
			"22_odst_units\data\helmet\odst_yunker_l0_helmet.paa"
		};
		class ItemInfo: HeadgearItem
		{
			uniformModel="\OPTRE_UNSC_Units\ODST\helmet.p3d";
			armor=10;
			mass=20;
			modelSides[]={6};
			passThrough=0.1;
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"attach_cam",
				"attach_communication",
				"attach_flashlight",
				"attach_laser",
				"attach_mount",
				"attach_rangefinder",
				"attach_rebreather"
			};
			hiddenSelectionsTextures[]=
			{
				"22_odst_units\data\helmet\odst_yunker_l0_helmet.paa",
				"22_odst_units\data\helmet\odst_yunker_l0_helmet.paa"
			};
		};
	};
	
	class OPTRE_UNSC_ODST_Helmet_22nd_yunker_dp: OPTRE_UNSC_ODST_Helmet_22nd_yunker
	{
		author="kripto202";
		scopeArsenal=1;
		scopeCurator=1;
		hiddenSelectionsTextures[]=
		{
			"22_odst_units\data\helmet\odst_yunker_l0_helmet.paa",
			"optre_vehicles\pelican\data\glass_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"OPTRE_UNSC_Units\ODST\data\helmet.rvmat",
			"optre_vehicles\pelican\data\reflective_glass.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"22_odst_units\data\helmet\odst_yunker_l0_helmet.paa",
				"optre_vehicles\pelican\data\glass_ca.paa"
			};
			hiddenSelectionsMaterials[]=
			{
				"OPTRE_UNSC_Units\ODST\data\helmet.rvmat",
				"optre_vehicles\pelican\data\reflective_glass.rvmat"
			};
		};
	};
	
	class OPTRE_UNSC_ODST_Helmet_22nd_yunker_winter: OPTRE_UNSC_ODST_Helmet
	{
		author="kripto202";
		picture="\OPTRE_UNSC_Units\ODST\icons\odst_helmet_med.paa";
		displayName="(winter) [22ndODST] J.Yunker";
		model="\OPTRE_UNSC_Units\ODST\helmet.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"attach_cam",
			"attach_communication",
			"attach_laser",
			"attach_mount",
			"attach_rangefinder",
			"attach_rebreather"
		};
		hiddenSelectionsTextures[]=
		{
			"22_odst_units\data\helmet\odst_yunker_l0_winter_helmet.paa",
			"22_odst_units\data\helmet\odst_yunker_l0_winter_helmet.paa"
		};
		class ItemInfo: HeadgearItem
		{
			uniformModel="\OPTRE_UNSC_Units\ODST\helmet.p3d";
			armor=10;
			mass=20;
			modelSides[]={6};
			passThrough=0.1;
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"attach_cam",
				"attach_communication",
				"attach_laser",
				"attach_mount",
				"attach_rangefinder",
				"attach_rebreather"
			};
			hiddenSelectionsTextures[]=
			{
				"22_odst_units\data\helmet\odst_yunker_l0_winter_helmet.paa",
				"22_odst_units\data\helmet\odst_yunker_l0_winter_helmet.paa"
			};
		};
	};
	
	class OPTRE_UNSC_ODST_Helmet_22nd_yunker_winter_dp: OPTRE_UNSC_ODST_Helmet_22nd_yunker_winter
	{
		author="kripto202";
		scopeArsenal=1;
		scopeCurator=1;
		hiddenSelectionsTextures[]=
		{
			"22_odst_units\data\helmet\odst_yunker_l0_winter_helmet.paa",
			"optre_vehicles\pelican\data\glass_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"OPTRE_UNSC_Units\ODST\data\helmet.rvmat",
			"optre_vehicles\pelican\data\reflective_glass.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"22_odst_units\data\helmet\odst_yunker_l0_winter_helmet.paa",
				"optre_vehicles\pelican\data\glass_ca.paa"
			};
			hiddenSelectionsMaterials[]=
			{
				"OPTRE_UNSC_Units\ODST\data\helmet.rvmat",
				"optre_vehicles\pelican\data\reflective_glass.rvmat"
			};
		};
	};

//vests\\

	class OPTRE_UNSC_ODST_Vest_Base: V_PlateCarrier1_rgr
	{
		scope=0;
		author="Article 2 Studios";
		displayName="-";
		picture="\OPTRE_UNSC_Units\ODST\icons\odst_vest.paa";
		model="\OPTRE_UNSC_Units\ODST\vest.p3d";
		class ItemInfo: VestItem
		{
			vesttype= "rebreather";
			uniformModel="\OPTRE_UNSC_Units\ODST\vest.p3d";
			armor=40;
			mass=40;
			containerClass="Supply200";
			passThrough=0.1;
			modelSides[]={6};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=8;
					passThrough=0.5;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=8;
					passThrough=0.5;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=24;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
				};
			};
		};
	};

///kripto202\\\
	
	class 22nd_odst_vest_kripto202: OPTRE_UNSC_ODST_Vest_Base
	{
		scope=2;
		author="kripto202";
		displayName="[22ndODST] M.Kripto";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"attach_nade"
		};
		hiddenSelectionsTextures[]=
		{
			"22_odst_units\data\vest\odst_kripto202_l0_vest.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"attach_nade"
			};
			hiddenSelectionsTextures[]=
			{
				"22_odst_units\data\vest\odst_kripto202_l0_vest.paa",
				""
			};
		};
	};
	
	class 22nd_odst_vest_kripto202_winter: OPTRE_UNSC_ODST_Vest_Base
	{
		scope=2;
		author="kripto202";
		displayName="(winter) [22ndODST] M.Kripto";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"attach_nade"
		};
		hiddenSelectionsTextures[]=
		{
			"22_odst_units\data\vest\odst_kripto202_l0_winter_vest.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"attach_nade"
			};
			hiddenSelectionsTextures[]=
			{
				"22_odst_units\data\vest\odst_kripto202_l0_winter_vest.paa",
				""
			};
		};
	};

///garrus\\\

	class 22nd_odst_vest_garrus: OPTRE_UNSC_ODST_Vest_Base
	{
		scope=2;
		author="kripto202";
		displayName="[22ndODST] M.Steros";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"attach_nade"
		};
		hiddenSelectionsTextures[]=
		{
			"22_odst_units\data\vest\odst_garrus_l0_vest.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"attach_nade"
			};
			hiddenSelectionsTextures[]=
			{
				"22_odst_units\data\vest\odst_garrus_l0_vest.paa",
				""
			};
		};
	};
	
	class 22nd_odst_vest_garrus_winter: OPTRE_UNSC_ODST_Vest_Base
	{
		scope=2;
		author="kripto202";
		displayName="(winter) [22ndODST] M.Steros";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"attach_nade"
		};
		hiddenSelectionsTextures[]=
		{
			"22_odst_units\data\vest\odst_garrus_l0_winter_vest.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"attach_nade"
			};
			hiddenSelectionsTextures[]=
			{
				"22_odst_units\data\vest\odst_garrus_l0_winter_vest.paa",
				""
			};
		};
	};

///darren\\\

	class 22nd_odst_vest_darren: OPTRE_UNSC_ODST_Vest_Base
	{
		scope=2;
		author="kripto202";
		displayName="[22ndODST] D.Darren";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"attach_nade"
		};
		hiddenSelectionsTextures[]=
		{
			"22_odst_units\data\vest\odst_darren_l0_vest.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"attach_nade"
			};
			hiddenSelectionsTextures[]=
			{
				"22_odst_units\data\vest\odst_darren_l0_vest.paa",
				""
			};
		};
	};
	
	class 22nd_odst_vest_darren_winter: OPTRE_UNSC_ODST_Vest_Base
	{
		scope=2;
		author="kripto202";
		displayName="(winter) [22ndODST] D.Darren";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"attach_nade"
		};
		hiddenSelectionsTextures[]=
		{
			"22_odst_units\data\vest\odst_darren_l0_winter_vest.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"attach_nade"
			};
			hiddenSelectionsTextures[]=
			{
				"22_odst_units\data\vest\odst_darren_l0_winter_vest.paa",
				""
			};
		};
	};

///barkhorn\\\

	class 22nd_odst_vest_barkhorn: OPTRE_UNSC_ODST_Vest_Base
	{
		scope=2;
		author="kripto202";
		displayName="[22ndODST] G.Barkhorn";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"attach_nade"
		};
		hiddenSelectionsTextures[]=
		{
			"22_odst_units\data\vest\odst_barkhorn_l0_vest.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"attach_nade"
			};
			hiddenSelectionsTextures[]=
			{
				"22_odst_units\data\vest\odst_barkorn_l0_vest.paa",
				""
			};
		};
	};
	
	class 22nd_odst_vest_barkhorn_winter: OPTRE_UNSC_ODST_Vest_Base
	{
		scope=2;
		author="kripto202";
		displayName="(winter) [22ndODST] G.Barkhorn";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"attach_nade"
		};
		hiddenSelectionsTextures[]=
		{
			"22_odst_units\data\vest\odst_barkhorn_l0_winter_vest.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"attach_nade"
			};
			hiddenSelectionsTextures[]=
			{
				"22_odst_units\data\vest\odst_barkorn_l0_winter_vest.paa",
				""
			};
		};
	};

///litch\\\

	class 22nd_odst_vest_litch: OPTRE_UNSC_ODST_Vest_Base
	{
		scope=2;
		author="kripto202";
		displayName="[22ndODST] J.Litch";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
		};
		hiddenSelectionsTextures[]=
		{
			"22_odst_units\data\vest\odst_litch_l0_vest.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
			};
			hiddenSelectionsTextures[]=
			{
				"22_odst_units\data\vest\odst_litch_l0_vest.paa",
				""
			};
		};
	};
	
	class 22nd_odst_vest_litch_winter: OPTRE_UNSC_ODST_Vest_Base
	{
		scope=2;
		author="kripto202";
		displayName="(winter) [22ndODST] J.Litch";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
		};
		hiddenSelectionsTextures[]=
		{
			"22_odst_units\data\vest\odst_litch_l0_winter_vest.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
			};
			hiddenSelectionsTextures[]=
			{
				"22_odst_units\data\vest\odst_litch_l0_winter_vest.paa",
				""
			};
		};
	};

///dobson\\\

	class 22nd_odst_vest_dobson: OPTRE_UNSC_ODST_Vest_Base
	{
		scope=2;
		author="kripto202";
		displayName="[22ndODST] O.Dobson";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"attach_nade"
		};
		hiddenSelectionsTextures[]=
		{
			"22_odst_units\data\vest\odst_dobson_l0_vest.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"attach_nade"
			};
			hiddenSelectionsTextures[]=
			{
				"22_odst_units\data\vest\odst_dobson_l0_vest.paa",
				""
			};
		};
	};
	
	class 22nd_odst_vest_dobson_winter: OPTRE_UNSC_ODST_Vest_Base
	{
		scope=2;
		author="kripto202";
		displayName="(winter) [22ndODST] O.Dobson";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"attach_nade"
		};
		hiddenSelectionsTextures[]=
		{
			"22_odst_units\data\vest\odst_dobson_l0_winter_vest.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"attach_nade"
			};
			hiddenSelectionsTextures[]=
			{
				"22_odst_units\data\vest\odst_dobson_l0_winter_vest.paa",
				""
			};
		};
	};

///ginger\\\

	class 22nd_odst_vest_ginger: OPTRE_UNSC_ODST_Vest_Base
	{
		scope=2;
		author="kripto202";
		displayName="[22ndODST] J.Ginger";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
		};
		hiddenSelectionsTextures[]=
		{
			"22_odst_units\data\vest\odst_ginger_l0_vest.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
			};
			hiddenSelectionsTextures[]=
			{
				"22_odst_units\data\vest\odst_ginger_l0_vest.paa",
				""
			};
		};
	};
	
	class 22nd_odst_vest_ginger_winter: OPTRE_UNSC_ODST_Vest_Base
	{
		scope=2;
		author="kripto202";
		displayName="(winter) [22ndODST] J.Ginger";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
		};
		hiddenSelectionsTextures[]=
		{
			"22_odst_units\data\vest\odst_ginger_l0_winter_vest.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
			};
			hiddenSelectionsTextures[]=
			{
				"22_odst_units\data\vest\odst_ginger_l0_winter_vest.paa",
				""
			};
		};
	};

///default\\\

class 22nd_odst_vest_default: OPTRE_UNSC_ODST_Vest_Base
	{
		scope=2;
		author="kripto202";
		displayName="[22ndODST] Vest";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"attach_nade"
		};
		hiddenSelectionsTextures[]=
		{
			"22_odst_units\data\vest\odst_default_l0_vest.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"attach_nade"
			};
			hiddenSelectionsTextures[]=
			{
				"22_odst_units\data\vest\odst_default_l0_vest.paa",
				""
			};
		};
	};
	
	class 22nd_odst_vest_default_winter: OPTRE_UNSC_ODST_Vest_Base
	{
		scope=2;
		author="kripto202";
		displayName="(winter) [22ndODST] Vest";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"attach_nade"
		};
		hiddenSelectionsTextures[]=
		{
			"22_odst_units\data\vest\odst_default_l0_winter_vest.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"attach_nade"
			};
			hiddenSelectionsTextures[]=
			{
				"22_odst_units\data\vest\odst_default_l0_winter_vest.paa",
				""
			};
		};
	};
	
///lopez\\\

class 22nd_odst_vest_lopez: OPTRE_UNSC_ODST_Vest_Base
	{
		scope=2;
		author="kripto202";
		displayName="[22ndODST] P.Lopez";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"attach_nade"
		};
		hiddenSelectionsTextures[]=
		{
			"22_odst_units\data\vest\odst_lopez_l0_vest.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"attach_nade"
			};
			hiddenSelectionsTextures[]=
			{
				"22_odst_units\data\vest\odst_lopez_l0_vest.paa",
				""
			};
		};
	};
	
	class 22nd_odst_vest_lopez_winter: OPTRE_UNSC_ODST_Vest_Base
	{
		scope=2;
		author="kripto202";
		displayName="(winter) [22ndODST] P.Lopez";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"attach_nade"
		};
		hiddenSelectionsTextures[]=
		{
			"22_odst_units\data\vest\odst_lopez_l0_winter_vest.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"attach_nade"
			};
			hiddenSelectionsTextures[]=
			{
				"22_odst_units\data\vest\odst_lopez_l0_winter_vest.paa",
				""
			};
		};
	};
	
///yunker\\\

class 22nd_odst_vest_yunker: OPTRE_UNSC_ODST_Vest_Base
	{
		scope=2;
		author="kripto202";
		displayName="[22ndODST] J.Yunker";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"attach_nade"
		};
		hiddenSelectionsTextures[]=
		{
			"22_odst_units\data\vest\odst_yunker_l0_vest.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"attach_nade"
			};
			hiddenSelectionsTextures[]=
			{
				"22_odst_units\data\vest\odst_yunker_l0_vest.paa",
				""
			};
		};
	};
	
	class 22nd_odst_vest_yunker_winter: OPTRE_UNSC_ODST_Vest_Base
	{
		scope=2;
		author="kripto202";
		displayName="(winter) [22ndODST] J.Yunker";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"attach_nade"
		};
		hiddenSelectionsTextures[]=
		{
			"22_odst_units\data\vest\odst_yunker_l0_winter_vest.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"attach_nade"
			};
			hiddenSelectionsTextures[]=
			{
				"22_odst_units\data\vest\odst_yunker_l0_winter_vest.paa",
				""
			};
		};
	};