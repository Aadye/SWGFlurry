--This is to be used for static spawns that are NOT part of caves, cities, dungeons, poi's, or other large screenplays.
RoriStaticSpawnsScreenPlay = ScreenPlay:new {
	numberOfActs = 1,

	screenplayName = "RoriStaticSpawnsScreenPlay",

	lootContainers = {

	},

	lootLevel = 18,

	lootGroups = {
		{
			groups = {
				{group = "color_crystals", chance = 700000},
				{group = "junk", chance = 7500000},
				{group = "rifles", chance = 600000},
				{group = "pistols", chance = 600000},
				{group = "clothing_attachments", chance = 300000},
				{group = "armor_attachments", chance = 300000}
			},
			lootChance = 8000000
		},
		{
			groups = {
				{group = "armor_all", chance = 3700000},
				{group = "junk", chance = 3500000},
				{group = "carbines", chance = 600000},
				{group = "melee_weapons", chance = 600000},
				{group = "crystals_poor", chance = 300000},
				{group = "loot_kit_parts", chance = 1300000}
			},
			lootChance = 8000000
		}
	},

	lootContainerRespawn = 1800 -- 30 minutes
}

registerScreenPlay("RoriStaticSpawnsScreenPlay", true)

function RoriStaticSpawnsScreenPlay:start()
	if (isZoneEnabled("rori")) then
		self:spawnMobiles()
		self:initializeLootContainers()
	end
end

function RoriStaticSpawnsScreenPlay:spawnMobiles()

	--NORTH

	--Spice Collective Tent (5510,1007)
	local pNpc = spawnMobile("rori", "spice_collective_courier", 300, 5514.9, 77.3, 1009.3, -97, 0)
	self:setMoodString(pNpc, "neutral")
	spawnMobile("rori", "spice_collective_sentry", 300, 5506.4, 75.6, 1003.4, -97, 0)
	spawnMobile("rori", "spice_collective_courier", 300, 5510.2, 76.2, 1009.3, 83, 0)
	spawnMobile("rori", "spice_collective_heavy_guard", 300, 5506.4, 75.4, 1006.7, -97, 0)
	spawnMobile("rori", "spice_collective_sentry", 300, 5507.9, 75.0, 1018.4, -63, 0)
	spawnMobile("rori", "spice_collective_sentry", 300, 5526.8, 78.8, 1008.8, 0, 0)

	--Narmle Militia Commanders Estate (5194,1024)
	spawnMobile("rori", "narmle_militia_commander", 300, 5212.9, 76.4, 1019.6, 112, 0)
	spawnMobile("rori", "narmle_militia_ensign", 300, 5206.6, 76.4, 1022.2, 112, 0)
	spawnMobile("rori", "narmle_militia_ensign", 300, 3.8, 0.7, -1.2, -3, 9715729)

	--RorGungan Ruins (3593,345)
	spawnMobile("rori", "rorgungan_scout", 300, 3593.2, 79.3, 345.0, 129, 0)

	--Ruins in Lake (1871,1761)
	spawnMobile("rori", "young_borgle_gruntling", 300, 1873.2, 74.4, 1761.6, -66, 0)

	--RorGungan Gravestones (1163,698)
	pNpc = spawnMobile("rori", "rorgungan_warrior", 300, 1162.5, 90.2, 699.7, 102, 0)
	self:setMoodString(pNpc, "sad")

	--RorGungan Ruins (-1494,1683)
	pNpc = spawnMobile("rori", "rorgungan_scout", 300, -1483.0, 75.6, 1699.6, -173, 0)
	self:setMoodString(pNpc, "happy")

	--Statue head (-2140,614)
	pNpc = spawnMobile("rori", "rorgungan_scout", 300, -2150.7, 75.5, 617.1, -131, 0)
	self:setMoodString(pNpc, "worried")

	--Debris (-4493,1085)
	spawnMobile("rori", "gundark_rogue", 300, -4487.1, 75.6, 1087.3, 12, 0)
	spawnMobile("rori", "gundark_rogue", 300, -4489.1, 75.7, 1091.9, 102, 0)
	spawnMobile("rori", "gundark_rogue", 300, -4498.3, 75.4, 1085.7, 174, 0)
	spawnMobile("rori", "gundark_rogue", 300, -4496.5, 75.7, 1081.6, 124, 0)

	--Ruins (-6717,1094)
	spawnMobile("rori", "scavenger", 300, -6717.0, 77.7, 1094.3, -90, 0)
	spawnMobile("rori", "scavenger", 300, -6717.4, 77.3, 1087.4, 140, 0)

	--RorGungan Shield Gen + Gravestone (-5507,2096)
	pNpc = spawnMobile("rori", "rorgungan_warchief", 300, -5506.9, 75.4, 2098.4, -75, 0)
	self:setMoodString(pNpc, "sad")

	--Ruins (-4706,3580)
	spawnMobile("rori", "sickle_rasp", 300, -4705.8, 74.2, 3579.3, -101, 0)

	--Statue (-2902,2588)
	spawnMobile("rori", "male_squall", 300, -2901.5, 76.2, 2591.1, 147, 0)

	--4 columns (-432,3264)
	pNpc = spawnMobile("rori", "rorgungan_boss", 300, -432.1, 76.2, 3266.7, 40, 0)
	self:setMoodString(pNpc, "npc_use_terminal_high")

	--Buried Fountains (952,2558)
	--Dark Circle on the Ground (923,2906)
	--Buried Debris (947,3478)

	--Statue Head (1116,3833)
	pNpc = spawnMobile("rori", "rorgungan_scout", 300, 1114.8, 86.7, 3828.6, 64, 0)
	self:setMoodString(pNpc, "happy")

	--Crashed Escape Pod (4272,2509)
	spawnMobile("rori", "blood_thirsty_borgle", 300, 4273.1, 84.3, 2511.8, 106, 0)

	--Ruins (5584,2436)
	pNpc = spawnMobile("rori", "rorgungan_warrior", 300, 5576.9, 75.2, 2431.9, 87, 0)
	self:setMoodString(pNpc, "angry")

	--Stream Trees & Arches (6779,3016)
	--Ruined Outpost (5083,4676)
	spawnMobile("rori", "juvenile_pygmy_torton", 300, 5086.0, 76.2, 4677.2, -134, 0)

	--RorGungan Ruins (3379,5861)
	spawnMobile("rori", "rorgungan_scout", 300, 3380.7, 90.0, 5863.3, 0, 0)
	spawnMobile("rori", "rorgungan_scout", 300, 3374.7, 90.0, 5863.3, 0, 0)

	--Buried Statue (2031,5884)
	--Rorgungan Ruins (956,4049)
	pNpc = spawnMobile("rori", "gundark_hooligan", 300, 952.7, 77.5, 4043.4, 29, 0)
	self:setMoodString(pNpc, "happy")
	--Statue Head (961,4493)
	--Wall (959,5080)
	--Partially Buried Gazebo (1001,5360)
	--RorGungan Monument (-70,5229)
	spawnMobile("rori", "rorgungan_scout", 300, -8.1, 75.4, 5282.6, 75, 0)
	spawnMobile("rori", "rorgungan_scout", 300, -8.1, 76.6, 5171.6, 105, 0)
	spawnMobile("rori", "rorgungan_scout", 300, -74.6, 76.0, 5136.9, 180, 0)
	spawnMobile("rori", "rorgungan_scout", 300, -141.7, 91.9, 5215.6, -90, 0)
	spawnMobile("rori", "rorgungan_warrior", 300, -53.2, 76.7, 5220.5, 115, 0)
	spawnMobile("rori", "rorgungan_warrior", 300, -53.2, 77.0, 5240.5, 65, 0)
	spawnMobile("rori", "rorgungan_warchief", 300, -69.7, 92.9, 5229.8, 90, 0)
	spawnMobile("rori", "rorgungan_boss", 360, -80.5, 92.9, 5224.7, 45, 0)
	spawnMobile("rori", "nudfuh", 300, 208.4, 75.4, 5143.3, 75, 0)
	spawnMobile("rori", "nudfuh", 300, 211.0, 76.0, 5132.8, 75, 0)
	spawnMobile("rori", "nudfuh", 300, 211.0, 76.1, 5121.8, 75, 0)
	--Ruins (-2713,4486)
	--Bounty Hunter Camp (-3650,5531)
	spawnMobile("rori", "bounty_hunter_thug", 300, -3649.6, 79.1, 5528.6, 155, 0)

	--RorGungan Monument (-5819,5826)
	spawnMobile("rori", "rorgungan_warchief", 300, -5818.7, 79.0, 5816.3, 55, 0)
	spawnMobile("rori", "rorgungan_warchief", 300, -5828.0, 79.0, 5832.7, 55, 0)
	spawnMobile("rori", "rorgungan_warchief", 300, -5822.7, 75.6, 5791.2, 175, 0)
	spawnMobile("rori", "rorgungan_warrior", 300, -5815.5, 75.6, 5794.2, 155, 0)
	spawnMobile("rori", "rorgungan_warrior", 300, -5809.5, 75.6, 5804.4, 75, 0)
	spawnMobile("rori", "rorgungan_warrior", 300, -5811.5, 75.5, 5820.4, 60, 0)
	spawnMobile("rori", "rorgungan_warrior", 300, -5819.9, 75.6, 5833.7, 60, 0)
	spawnMobile("rori", "rorgungan_warrior", 300, -5829.0, 75.9, 5844.8, 10, 0)
	spawnMobile("rori", "rorgungan_warrior", 300, -5844.0, 76.7, 5842.7, -60, 0)
	spawnMobile("rori", "rorgungan_warchief", 300, -5851.9, 76.0, 5836.8, -70, 0)

	--Graveyard (-1710,6144)
	pNpc = spawnMobile("rori", "commoner_naboo", 60, -1713.3, 75.3, 6144.6, 87, 0)
	self:setMoodString(pNpc, "sad")
	--Ruins (958,6521)
	--Escape pod (959,6899)
	spawnMobile("rori", "kobola_thief", 300, 956.2, 74.6, 6907.1, -166, 0)

	--Campfire & Engine Debris (986,7560)
	pNpc = spawnMobile("rori", "kobola_smuggler", 300, 987.5, 107.8, 7560.4, -54, 0)
	self:setMoodString(pNpc, "npc_use_terminal_low")
	--Flooded Ruins (2528,7260)
	--Ruins (6684,6882)
	pNpc = spawnMobile("rori", "insane_miner", 300, 6691.1, 76.1, 6878.0, -72, 0)
	self:setMoodString(pNpc, "threaten")

	--Crashed Corellian Corvette (0,2012) strong mercenary's, secrets of the syrens quest location
	spawnMobile("rori", "strong_mercenary", 300, 1.2, 75.0, 2003.0, 74, 0)
	spawnMobile("rori", "strong_mercenary", 300, -9.5, 76.5, 1998.8, -135, 0)
	spawnMobile("rori", "strong_mercenary", 300, -25.7, 75.5, 2008.9, 99, 0)
	spawnMobile("rori", "strong_mercenary", 300, -35.2, 75.7, 2031.1, -35, 0)
	spawnMobile("rori", "strong_mercenary", 300, -39.5, 75.5, 2010.4, 170, 0)
	spawnMobile("rori", "strong_mercenary", 300, -46.9, 76.0, 2003.4, 110, 0)
	spawnMobile("rori", "strong_mercenary", 300, -24.1, 77.8, 1995.4, 33, 0)

	spawnMobile("rori", "strong_mercenary", 300,getRandomNumber(40) + -65.7,77.6, getRandomNumber(40) + 2046.8,getRandomNumber(360), 0)
	spawnMobile("rori", "strong_mercenary", 300,getRandomNumber(40) + -65.7,77.6, getRandomNumber(40) + 2046.8,getRandomNumber(360), 0)
	spawnMobile("rori", "strong_mercenary", 300,getRandomNumber(40) + -65.7,77.6, getRandomNumber(40) + 2046.8,getRandomNumber(360), 0)
	spawnMobile("rori", "strong_mercenary", 300,getRandomNumber(40) + -65.7,77.6, getRandomNumber(40) + 2046.8,getRandomNumber(360), 0)
	spawnMobile("rori", "strong_mercenary", 300,getRandomNumber(40) + -65.7,77.6, getRandomNumber(40) + 2046.8,getRandomNumber(360), 0)
	spawnMobile("rori", "strong_mercenary", 300,getRandomNumber(40) + -65.7,77.6, getRandomNumber(40) + 2046.8,getRandomNumber(360), 0)
	spawnMobile("rori", "strong_mercenary", 300,getRandomNumber(40) + -65.7,77.6, getRandomNumber(40) + 2046.8,getRandomNumber(360), 0)
	spawnMobile("rori", "strong_mercenary", 300,getRandomNumber(40) + -65.7,77.6, getRandomNumber(40) + 2046.8,getRandomNumber(360), 0)
	spawnMobile("rori", "strong_mercenary", 300,getRandomNumber(40) + -65.7,77.6, getRandomNumber(40) + 2046.8,getRandomNumber(360), 0)
	spawnMobile("rori", "strong_mercenary", 300,getRandomNumber(40) + -65.7,77.6, getRandomNumber(40) + 2046.8,getRandomNumber(360), 0)
	spawnMobile("rori", "strong_mercenary", 300,getRandomNumber(40) + -65.7,77.6, getRandomNumber(40) + 2046.8,getRandomNumber(360), 0)
	spawnMobile("rori", "strong_mercenary", 300,getRandomNumber(40) + -65.7,77.6, getRandomNumber(40) + 2046.8,getRandomNumber(360), 0)
	spawnMobile("rori", "strong_mercenary", 300,getRandomNumber(40) + -65.7,77.6, getRandomNumber(40) + 2046.8,getRandomNumber(360), 0)

	--SOUTH

	--Cobral Tent (-4972,-670)
	spawnMobile("rori", "cobral_hooligan", 300, -4959.4, 75.3, -673.5, 99, 0)
	spawnMobile("rori", "cobral_hooligan", 300, -4961.3, 75.8, -664.1, -49, 0)
	spawnMobile("rori", "cobral_hooligan", 300, -4978.7, 76.5, -672.6, -75, 0)
	spawnMobile("rori", "cobral_hooligan", 300, -4972.7, 76.5, -669.1, 149, 0)

	--RorGungan Ruins (-2641,-752)
	--Debris (-989,-315)
	pNpc = spawnMobile("rori", "agriculturalist", 60, -986.1, 76.1, -311.6, -84, 0)
	self:setMoodString(pNpc, "npc_use_terminal_low")

	--RorGungan Ruins (6119,-509)
	--Sunken Ruins (5961,-2598)
	--RorGungan Ruins (3462,-2174)
	pNpc = spawnMobile("rori", "kobola_underboss", 300, 3457.9, 77.4, -2145.7, 165, 0)
	self:setMoodString(pNpc, "fishing")
	--Gate (2996,-3668)
	--Wall (-1230,-3207)

	--Camp & Skeleton (-2641,-3209)
	spawnMobile("rori", "deadly_forest_mite_guardian", 300, -2638.9, 81.3, -3211.8, -75, 0)
	--Narmle Spike (-3394,-2097)
	--RorGungan Ruins (-6967,-5642)
	spawnMobile("rori", "rorgungan_boss", 360, -6967.2, 101.0, -5634.1, 105, 0)
	spawnMobile("rori", "rorgungan_boss", 360, -6961.2, 101.0, -5632.2, -153, 0)
	spawnMobile("rori", "rorgungan_warchief", 360, -6960.0, 101.0, -5637.1, -65, 0)
	spawnMobile("rori", "rorgungan_warrior", 300, -6981.2, 86.1, -5650.5, -115, 0)
	spawnMobile("rori", "rorgungan_warrior", 300, -6964.2, 86.5, -5658.7, 150, 0)
	spawnMobile("rori", "rorgungan_scout", 300, -6904.3, 88.0, -5667.3, 115, 0)
	spawnMobile("rori", "rorgungan_warrior", 300, -6976.9, 84.7, -5664.4, 22, 0)
	--Ruins (-760,-4085)
	--Rancher & Pets (-435,-5435)
	spawnMobile("rori", "domestic_bearded_jax", 300,getRandomNumber(8) + -435.7, 75.7,getRandomNumber(15) + -5454.5, 50, 0)
	spawnMobile("rori", "domestic_bearded_jax", 300,getRandomNumber(8) + -435.7, 75.7,getRandomNumber(15) + -5454.5, 90, 0)
	spawnMobile("rori", "domestic_bearded_jax", 300,getRandomNumber(8) + -435.7, 75.7,getRandomNumber(15) + -5454.5, -40, 0)
	spawnMobile("rori", "domestic_bearded_jax", 300,getRandomNumber(8) + -435.7, 75.7,getRandomNumber(15) + -5454.5, 180, 0)
	spawnMobile("rori", "domestic_bearded_jax", 300,getRandomNumber(8) + -435.7, 75.7,getRandomNumber(15) + -5454.5, 75, 0)
	spawnMobile("rori", "domestic_bearded_jax", 300,getRandomNumber(8) + -435.7, 75.7,getRandomNumber(15) + -5454.5, -50, 0)

	spawnMobile("rori", "rancher", 300, -433.7, 75.7, -5441.2, 180, 0)
	spawnMobile("rori", "domestic_tusk_cat", 300, -436.2, 75.7, -5441.2, 180, 0)

	spawnMobile("rori", "nudfuh", 300,getRandomNumber(40) + -419.7, 75.7,getRandomNumber(75) + -5484.5,getRandomNumber(360), 0)
	spawnMobile("rori", "nudfuh", 300,getRandomNumber(40) + -419.7, 75.7,getRandomNumber(75) + -5484.5,getRandomNumber(360), 0)
	spawnMobile("rori", "nudfuh", 300,getRandomNumber(40) + -419.7, 75.7,getRandomNumber(75) + -5484.5,getRandomNumber(360), 0)
	spawnMobile("rori", "nudfuh", 300,getRandomNumber(40) + -419.7, 75.7,getRandomNumber(75) + -5484.5,getRandomNumber(360), 0)
	spawnMobile("rori", "nudfuh", 300,getRandomNumber(40) + -419.7, 75.7,getRandomNumber(75) + -5484.5,getRandomNumber(360), 0)
	spawnMobile("rori", "nudfuh", 300,getRandomNumber(95) + -480, 75.7,getRandomNumber(35) + -5484.5,getRandomNumber(360), 0)
	spawnMobile("rori", "nudfuh", 300,getRandomNumber(95) + -480, 75.7,getRandomNumber(35) + -5484.5,getRandomNumber(360), 0)
	spawnMobile("rori", "nudfuh", 300,getRandomNumber(95) + -480, 75.7,getRandomNumber(35) + -5484.5,getRandomNumber(360), 0)
	spawnMobile("rori", "nudfuh", 300,getRandomNumber(95) + -480, 75.7,getRandomNumber(35) + -5484.5,getRandomNumber(360), 0)
	spawnMobile("rori", "nudfuh", 300,getRandomNumber(95) + -480, 75.7,getRandomNumber(35) + -5484.5,getRandomNumber(360), 0)
	spawnMobile("rori", "nudfuh", 300,getRandomNumber(95) + -480, 75.7,getRandomNumber(35) + -5425,getRandomNumber(360), 0)
	spawnMobile("rori", "nudfuh", 300,getRandomNumber(95) + -480, 75.7,getRandomNumber(35) + -5425,getRandomNumber(360), 0)
	spawnMobile("rori", "nudfuh", 300,getRandomNumber(95) + -480, 75.7,getRandomNumber(35) + -5425,getRandomNumber(360), 0)
	spawnMobile("rori", "nudfuh", 300,getRandomNumber(95) + -480, 75.7,getRandomNumber(35) + -5425,getRandomNumber(360), 0)
	spawnMobile("rori", "nudfuh", 300,getRandomNumber(95) + -480, 75.7,getRandomNumber(35) + -5425,getRandomNumber(360), 0)

	--Gazebo (3783,-4473)
	pNpc = spawnMobile("rori", "rorgungan_commoner", 300, 3783.1, 74.5, -4473.2, -9, 0)
	self:setMoodString(pNpc, "npc_sitting_ground")

	--Small Imperial Base (6530,-4763)
	spawnMobile("rori", "swamp_trooper", 360, 6522.9, 107.1, -4761.1, 105, 0)
	spawnMobile("rori", "imperial_brigadier_general", 360, 6523.9, 106.8, -4767.6, 15, 0)
	spawnMobile("rori", "swamp_trooper", 360, 6528.2, 107.5, -4762.2, 75, 0)
	spawnMobile("rori", "swamp_trooper", 360, 6537.0, 108.0, -4766.6, 0, 0)
	spawnMobile("rori", "swamp_trooper", 360, 6534.2, 108.0, -4757.9, -155, 0)

	--Wookiee vs. Trandoshan Battle
	spawnMobile("rori", "ep3_harwakokok_mighty", 3600, -1440.63, 95.0269, 4423.33, 48, 0)
	spawnMobile("rori", "ep3_blackscale_wookiee_berserker_01", 360, -1441.65, 87.2987, 4429.53, 49, 0)
	spawnMobile("rori", "ep3_blackscale_wookiee_berserker_02", 360, -1444.22, 87.6801, 4429.03, 48, 0)
	spawnMobile("rori", "ep3_blackscale_wookiee_berserker_03", 360, -1445.7, 97.7208, 4429.08, 54, 0)
	spawnMobile("rori", "ep3_blackscale_wookiee_berserker_04", 360, -1447.87, 88.5904, 4428.5, 52, 0)
	spawnMobile("rori", "ep3_blackscale_wookiee_berserker_05", 360, -1440.35, 87.446, 4429.2, 56, 0)
	spawnMobile("rori", "ep3_blackscale_wookiee_berserker_06", 360, -1437.95, 87.4961, 4429.43, 68, 0)
	spawnMobile("rori", "ep3_blackscale_wookiee_berserker_07", 360, -1433.89, 87.9307, 4429.82, 35, 0)
	spawnMobile("rori", "ep3_wke_commando_01", 360, -1433.05, 89.1612, 4428.07, 40, 0)
	spawnMobile("rori", "ep3_wke_commando_02", 360, -1432.67, 89.0591, 4426.15, 50, 0)
	spawnMobile("rori", "ep3_wke_commando_03", 360, -1431.1, 108.0, 4424.92, 57, 0)
	spawnMobile("rori", "ep3_wke_forest_stalker_01", 360, -1433.39, 87.1544, 4423.81, 58, 0)
	spawnMobile("rori", "ep3_wke_forest_stalker_02", 360, -1433.18, 85.8904, 4422.44, 46, 0)
	spawnMobile("rori", "ep3_wke_forest_stalker_03", 360, -1434.84, 84.706, 4420.24, 44, 0)
	spawnMobile("rori", "ep3_rryatt_feral_wookiee_01", 360, -1427.04, 88.0929, 4428.39, 40, 0)
	spawnMobile("rori", "ep3_rryatt_feral_wookiee_02", 360, -1430.08, 89.4983, 4428.19, 42, 0)
	spawnMobile("rori", "ep3_rryatt_feral_wookiee_03", 360, -1431.69, 85.5005, 4407.03, 43, 0)
	spawnMobile("rori", "ep3_rryatt_feral_wookiee_04", 360, -1436.62, 84.9591, 4438.34, 48, 0)
	spawnMobile("rori", "ep3_mad_wookiee_01", 360, -1427.73, 86.9701, 4435.27, 42, 0)
	spawnMobile("rori", "ep3_mad_wookiee_02", 360, -1424.26, 89.2034, 4431.93, 39, 0)
	spawnMobile("rori", "ep3_mad_wookiee_03", 360, -1430.59, 84.7747, 4442.35, 48, 0)
	spawnMobile("rori", "ep3_mad_wookiee_04", 360, -1425.58, 86.1326, 4440.37, 49, 0)
	spawnMobile("rori", "ep3_blackscale_captain_beshk", 1800, -1415.35, 100.568, 4453.77, -137, 0)
	spawnMobile("rori", "ep3_blackscale_warden_tosk", 1800, -1413.94, 99.4788, 4452.35, -143, 0)
	spawnMobile("rori", "ep3_broodmaster_hsskas", 1800, -1413.35, 98.4598, 4450.65, -146, 0)
	spawnMobile("rori", "ep3_blackscale_scaleguard", 360, -1417.1, 97.8214, 4451.79, -142, 0)
	spawnMobile("rori", "ep3_blackscale_scaleguard", 360, -1418.88, 96.1751, 4452.45, -150, 0)
	spawnMobile("rori", "ep3_blackscale_scaleguard", 360, -1421.34, 93.5795, 4452.37, -147, 0)
	spawnMobile("rori", "ep3_blackscale_scaleguard", 360, -1423.1, 93.3955, 4454.92, -148, 0)
	spawnMobile("rori", "ep3_blackscale_scaleguard", 360, -1413.64, 94.7061, 4444.2, -129, 0)
	spawnMobile("rori", "ep3_blackscale_trooper_m_01", 360, -1417.88, 95.1226, 4445.09, -128, 0)
	spawnMobile("rori", "ep3_blackscale_trooper_m_01", 360, -1423.82, 85.6319, 4447.59, -125, 0)
	spawnMobile("rori", "ep3_blackscale_trooper_m_02", 360, -1425.26, 87.1851, 4436.75, -124, 0)
	spawnMobile("rori", "ep3_blackscale_trooper_m_02", 360, -1430.51, 84.9601, 4453.93, -154, 0)
	spawnMobile("rori", "ep3_blackscale_trooper_m_03", 360, -1430.06, 84.6194, 4445.34, -155, 0)
	spawnMobile("rori", "ep3_blackscale_trooper_m_03", 360, -1429.06, 85.2938, 4440.35, -140, 0)
	spawnMobile("rori", "ep3_slavemaster_klesk", 1800, -1412.68, 96.5388, 4448.39, -138, 0)
	spawnMobile("rori", "ep3_trando_slavemaster_01", 360, -1421.58, 88.9866, 4436.61, -132, 0)
	spawnMobile("rori", "ep3_trando_slavemaster_01", 360, -1422.6, 89.3438, 4433.58, -119, 0)
	spawnMobile("rori", "ep3_trando_slavemaster_02", 360, -1434.67, 84.8857, 4438.98, -157, 0)
	spawnMobile("rori", "ep3_trando_slavemaster_02", 360, -1413.59, 84.7177, 4450.4, -174, 0)
	spawnMobile("rori", "ep3_trando_slaver_01", 360, -1443.27, 85.2149, 4447.63, -176, 0)
	spawnMobile("rori", "ep3_trando_slaver_01", 360, -1435.23, 84.5413, 4452.57, -163, 0)
	spawnMobile("rori", "ep3_trando_slaver_02", 360, -1433.8, 84.2843, 4447.93, -163, 0)
	spawnMobile("rori", "ep3_trando_slaver_02", 360, -1422.29, 89.3072, 4442.68, -127, 0)
	spawnMobile("rori", "ep3_trando_slaver_03", 360, -1420.12, 92.6542, 4442.21, -127, 0)
	spawnMobile("rori", "ep3_trando_slaver_03", 360, -1416.3, 94.4314, 4441.06, -107, 0)
	spawnMobile("rori", "ep3_trando_slaver_04", 360, -1419.44, 87.787, 4434.45, -113, 0)
	spawnMobile("rori", "ep3_trando_slaver_04", 360, -1420.5, 88.301, 4439.77, -124, 0)
	spawnMobile("rori", "ep3_trando_slaver_05", 360, -1413.31, 86.1069, 4435.09, -132, 0)
	spawnMobile("rori", "ep3_trando_slaver_05", 360, -1438.4, 84.4819, 4443.96, -171, 0)
end