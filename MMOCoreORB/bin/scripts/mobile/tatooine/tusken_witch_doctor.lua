tusken_witch_doctor = Creature:new {
	objectName = "@mob/creature_names:tusken_witch_doctor",
	socialGroup = "tusken_raider",
	faction = "tusken_raider",
	level = 202,
	chanceHit = 16,
	damageMin = 1145,
	damageMax = 2000,
	baseXp = 19201,
	baseHAM = 160000,
	baseHAMmax = 195000,
	armor = 0,
	resists = {65,95,35,100,0,30,45,80,-1},
	meatType = "",
	meatAmount = 0,
	hideType = "",
	hideAmount = 0,
	boneType = "",
	boneAmount = 0,
	milk = 0,
	tamingChance = 0,
	ferocity = 0,
	pvpBitmask = AGGRESSIVE + ATTACKABLE + ENEMY,
	creatureBitmask = PACK + KILLER + HEALER,
	optionsBitmask = AIENABLED,
	diet = HERBIVORE,

	templates = {"object/mobile/tusken_raider.iff"},
	lootGroups = {
		{
			groups = {
				{group = "tusken_common", chance = 2000000},
				{group = "wearables_scarce", chance = 1500000},
				{group = "bone_armor", chance = 750000},
				{group = "chitin_armor", chance = 750000},
				{group = "armor_attachments", chance = 1000000},
				{group = "clothing_attachments", chance = 1500000},
				{group = "color_crystals", chance = 500000},
				{group = "crystals_premium", chance = 500000},
				{group = "g_named_crystals", chance = 750000},
				{group = "g_named_crystals", chance = 750000}
			},
			lootChance = 10000000
		}
	},
	weapons = {"tusken_weapons"},
	conversationTemplate = "",
	attacks = merge(brawlermaster,fencermaster,swordsmanmaster,pikemanmaster,tkamaster)
}

CreatureTemplates:addCreatureTemplate(tusken_witch_doctor, "tusken_witch_doctor")
