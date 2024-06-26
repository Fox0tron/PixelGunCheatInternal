﻿#pragma once
#include <cstdint>

class Offsets
{
public:
    // Functions
    static inline uint64_t PlayerMoveCUpdate = 0x1bb57c0;
    static inline uint64_t WeaponSoundsUpdate = 0x812ed0;
    static inline uint64_t SetNextCriticalHit = 0x80bf60;
    static inline uint64_t MakeInvisibleForSeconds = 0x1b12dc0;
    static inline uint64_t InfiniteGemClaim = 0x4bc210;
    static inline uint64_t RapidFire = 0x114fc00;
    static inline uint64_t TextMeshGetText = 0x4498b70;
    static inline uint64_t BehaviourGetEnabled = 0x43ae960;
    static inline uint64_t OnPreRender = 0x4322780;
    static inline uint64_t TextMeshGetColor = 0x4498910;
    static inline uint64_t WorldToScreenPoint = 0x438e0e0;
    static inline uint64_t ComponentGetTransform = 0x43af980;
    static inline uint64_t TransformGetRotation = 0x43c4900;
    static inline uint64_t TransformGetPosition = 0x43c4790;
    static inline uint64_t TransformLookAt = 0x43c2900;
    static inline uint64_t PhysicsRayCast = 0x4422080;
    static inline uint64_t ObjectGetInstanceID = 0x43b6fe0;
    static inline uint64_t OnSceneUnload = 0x419e460;
    static inline uint64_t PriceModifier = 0x7a6560;
    static inline uint64_t PlayerMoveCFixedUpdate = 0x1b12580;
    static inline uint64_t RewardMultiplier = 0xc81870;
    static inline uint64_t DoubleRewards = 0xc80ea0;
    static inline uint64_t PremiumPass = 0x18fec70;
    static inline uint64_t GetItemRecordDict = 0x7bf930;
    static inline uint64_t AddWeapon = 0x661e30;
    static inline uint64_t ItemRecordGetShopId = 0x5920c0;
    static inline uint64_t GetDamageMultiplier = 0x114eb80;
    static inline uint64_t GetPlayerSpeed = 0x1153020;
    static inline uint64_t GetAmmoInClip = 0x1158f50;
    static inline uint64_t GetAmmo = 0x1160c70;
    static inline uint64_t PlayerGetImmortality = 0x1b301e0;
    static inline uint64_t GiveWear = 0x2066cd0;
    static inline uint64_t GiveWeapon = 0x2064c40;
    static inline uint64_t GivePets = 0x2063140;
    static inline uint64_t AddGems = 0x2059040;
    static inline uint64_t AddCoins = 0x2058a60;
    static inline uint64_t AddSomeCurrency = 0x2055e80;
    static inline uint64_t AddCoupons = 0x2057cc0;
    static inline uint64_t AddClanChestPoints = 0x2057470;
    static inline uint64_t ProgressUpdaterGetInstance = 0xa32e20;
    static inline uint64_t ProgressAddCurrency = 0xa0a5d0;
    
    // Fields
    static inline uint64_t scopeSpeed = 0x100;
    static inline uint64_t zoomXray = 0xCE;
    static inline uint64_t shootDelay = 0x1B8;
    static inline uint64_t bulletDelay = 0x1B4;
    static inline uint64_t delayInBurstShooting = 0x5E8;
    static inline uint64_t isSectorsAOE = 0x3CC;
    static inline uint64_t flamethrower = 0x354;
    static inline uint64_t railgun = 0x1C4;
    static inline uint64_t bazooka = 0x133;
    static inline uint64_t harpoon = 0x2C0;
    static inline uint64_t sectorsAOEAngleBack = 0x3D4;
    static inline uint64_t sectorsAOEAngleFront = 0x3D0;
    static inline uint64_t sectorsAOEDamageMultiplierBack = 0x3E0;
    static inline uint64_t sectorsAOEDamageMultiplierFront = 0x3D8;
    static inline uint64_t sectorsAOEDamageMultiplierSide = 0x3DC;
    static inline uint64_t sectorsAOERadiusSectorsAoE = 0x3E4;
    static inline uint64_t isCharm = 0x27C;
    static inline uint64_t isCursing = 0x21C;
    static inline uint64_t curseTime = 0x220;
    static inline uint64_t curseDamageMultiplier = 0x224;
    static inline uint64_t isLightning = 0x15D;
    static inline uint64_t isPoisoning = 0x200;
    static inline uint64_t poisonCount = 0x204;
    static inline uint64_t isStun = 0x240;
    static inline uint64_t stunCoeff = 0x244;
    static inline uint64_t stunTime = 0x248;
    static inline uint64_t stunRadius = 0x24C;
    static inline uint64_t isBlindEffect = 0x270;
    static inline uint64_t isBlindEffectTime = 0x278;
    static inline uint64_t isSlowdown = 0x22C;
    static inline uint64_t slowdownCoeff = 0x230;
    static inline uint64_t slowdownTime = 0x234;
    static inline uint64_t isSlowdownStack = 0x238;
    static inline uint64_t firstKillCritical = 0x390;
    static inline uint64_t isInvisibleAfterRespawn = 0x391;
    static inline uint64_t invisibleAfterRespawnTime = 0x394;
    static inline uint64_t isFrostSword = 0x371;
    static inline uint64_t isFrostSwordUseAngle = 0x37C;
    static inline uint64_t frostRadius = 0x378;
    static inline uint64_t frostDamageMultiplier = 0x374;
    static inline uint64_t frostSwordAngle = 0x380;
    static inline uint64_t frostSwordnTime = 0x384;
    static inline uint64_t range = 0x668;
    static inline uint64_t recoilCoeff = 0xC8;
    static inline uint64_t recoilCoeffZoom = 0x12C;
    static inline uint64_t moveScatterCoeff = 0xC0;
    static inline uint64_t moveScatterCoeffZoom = 0x124;
    static inline uint64_t fieldOfViewZomm = 0xE0;
    static inline uint64_t scopeCircleRadius = 0xE8;
    static inline uint64_t scopeMovementSpeed = 0xF0;
    static inline uint64_t buffPointsKillDesigner = 0x3AC;
    static inline uint64_t buffPointsAssistDesigner = 0x3B4;
    static inline uint64_t buffPointsRevengeDesigner = 0x3A4;
    static inline uint64_t buffPointsOther = 0x3B8;
    static inline uint64_t buffBonusPointsForKill = 0x3A8;
    static inline uint64_t buffBonusPointsForAssist = 0x3B0;
    static inline uint64_t buffPointsRevenge = 0x3A0;
    static inline uint64_t isBuffPoints = 0x39C;
    static inline uint64_t chargeTime = 0x1EC;
    static inline uint64_t chargeMax = 0x1E8;
    static inline uint64_t chargeLoop = 0x1E0;
    static inline uint64_t isCharging = 0x1D2;
    static inline uint64_t isHeadshotDamageIncreased = 0x28C;
    static inline uint64_t increasedHeadshotDamageMultiplier = 0x290;
    static inline uint64_t isRecudedHeadshotDamage = 0x294;
    static inline uint64_t reducedHeadshotDamageMultiplier = 0x298;
    static inline uint64_t isDoubleJump = 0x487;
    static inline uint64_t playerMoveCPlayerDamageable = 0x650;
    static inline uint64_t nickLabel = 0x3B8;
    static inline uint64_t weaponSoundsPlayerMoveC = 0x510;
    static inline uint64_t myPlayerTransform = 0x3A0;
    static inline uint64_t headCollider = 0x128;
    static inline uint64_t maxKoofZoom = 0x10C;
    static inline uint64_t upKoofFireZoom = 0x110;
    static inline uint64_t downKoofFirstZoom = 0x114;
    static inline uint64_t downKoofZoom = 0x118;
    static inline uint64_t maxKoof = 0x94;
    static inline uint64_t tekKoof = 0x98;
    static inline uint64_t upKoofFire = 0x9C;
    static inline uint64_t downKoofFirst = 0xA0;
    static inline uint64_t downKoof = 0xA4;
    static inline uint64_t poisonDamageMultiplier = 0x208;
    static inline uint64_t poisonTime = 0x20C;
    static inline uint64_t ignoreBarrier = 0x130;
    static inline uint64_t ignoreSlyWolf = 0x131;
    static inline uint64_t ignoreReflector = 0x132;
    static inline uint64_t fireImmunity = 0x250;
    static inline uint64_t bleedingImmunity = 0x251;
    static inline uint64_t toxicImmunity = 0x252;
};
