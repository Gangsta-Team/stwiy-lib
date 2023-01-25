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

enum ESkeletonJoint
{
    ESkeletonJoint_Character_Position,  //OK    0
    ESkeletonJoint_Character_Origin,    //OK    1
    ESkeletonJoint_Character_Root,      //OK    2
    ESkeletonJoint_Pelvis,              //OK    3
    ESkeletonJoint_Pelvis_L,            //OK    4
    ESkeletonJoint_Knee_L,              //OK    5
    ESkeletonJoint_Foot_L,              //OK    6
    ESkeletonJoint_Pelvis_R,            //OK    7
    ESkeletonJoint_Knee_R,              //OK    8
    ESkeletonJoint_Foot_R,              //OK    9
    ESkeletonJoint_Spine_1,             //OK    10
    ESkeletonJoint_Spine_2,             //OK    11
    ESkeletonJoint_Neck,                //OK    12
    ESkeletonJoint_Head,                //OK    13
    ESkeletonJoint_Clavicle_L,          //OK    14
    ESkeletonJoint_Shoulder_L,          //OK    15
    ESkeletonJoint_Elbow_L,             //OK    16
    ESkeletonJoint_Forarm_L,            //OK    17
    ESkeletonJoint_Wrist_L,             //OK    18
    ESkeletonJoint_Character_Root1,     //OK    19
    ESkeletonJoint_Clavicle_R,          //OK    20
    ESkeletonJoint_Shoulder_R,          //OK    21
    ESkeletonJoint_Elbow_R,             //OK    22
    ESkeletonJoint_Forarm_R,            //OK    23
    ESkeletonJoint_Wrist_R,             //OK    24
    ESkeletonJoint_Hand_R,              //OK    25
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