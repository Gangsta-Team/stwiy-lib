//CharacterObject
#ifndef _CHARACTEROBJECT_HPP
#define _CHARACTEROBJECT_HPP

#include "inventoryowner.hpp"
#include "../../radobjects.hpp"

#pragma pack(push, 1)

class Damage
{
public:
    enum EDamageMagnitude
    {
        EDamageMagnitude_none,
        EDamageMagnitude_Easy,
        EDamageMagnitude_Meduim,
        EDamageMagnitude_Hard
    };

    enum DamageType
    {
        DAMAGETYPE_Default,
        DAMAGETYPE_Explosion,
        DAMAGETYPE_Twitch,
        DAMAGETYPE_Melee,
        DAMAGETYPE_Vehicle,
        DAMAGETYPE_Bullet,
        DAMAGETYPE_Shotgun,
        DAMAGETYPE_Grenade,
        DAMAGETYPE_NoAnimation,
    };

    DamageType       m_Type;
    math::Vector     m_ExplosionImpulse;
    int              m_Damage;
    EDamageMagnitude m_DamageMagnitude;
    pure3d::Name     m_HitAnim;
    pure3d::Name     m_DeathAnim;
    int              m_HitPriority;
    unsigned int     m_KillerID;
    int              m_WeaponType;
    int              m_WeaponID;
    bool             m_KillMe;
};

//TODO: Wrong order
enum ESkeletonJoint
{
    ESkeletonJoint_Character_Root,
    ESkeletonJoint_Pelvis,
    ESkeletonJoint_Spine_1,
    ESkeletonJoint_Spine_2,
    ESkeletonJoint_Neck,
    ESkeletonJoint_Head,
    ESkeletonJoint_Clavicle_L,
    ESkeletonJoint_Shoulder_L,
    ESkeletonJoint_Elbow_L,
    ESkeletonJoint_Forarm_L,
    ESkeletonJoint_Wrist_L,
    ESkeletonJoint_Clavicle_R,
    ESkeletonJoint_Shoulder_R,
    ESkeletonJoint_Elbow_R,
    ESkeletonJoint_Forarm_R,
    ESkeletonJoint_Wrist_R,
};

class CharacterObject //: public InventoryOwner
{
public:

    //virtual ~CharacterObject();
    CharacterObject(const char* name, /*core::MemoryAllocator*/ void * allocator);


    bool IsCharacterDead();
    int GetHealth();
    math::Vector* GetJointPosition(unsigned int jointIndex);

};

CharacterObject* GetMainCharacter();

#pragma pack(pop)

//static_assert(sizeof(CharacterObject) == 0x0/* TODO: unknown size*/);
//static_assert(sizeof(Damage) == 0x24);

#endif // !_CHARACTEROBJECT_HPP