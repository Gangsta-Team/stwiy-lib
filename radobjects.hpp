#ifndef _RADOBJECT_HPP
#define _RADOBJECT_HPP

#include "radkey.hpp"

namespace math{
    class Vector{
    public:
        float x, y, z;
        Vector(){}
        Vector(float x, float y, float z)
        {
            this->x = x;
            this->y = y;
            this->z = z;
        }
    };
}

namespace core
{

    class IRefCount 
    {
    public:
        virtual void AddRef( void ) = 0;
        virtual void RemoveRef( void ) = 0;
        virtual int GetRefCount( void ) = 0;   
    };

}

namespace pure3d
{

    class Name
    {
        Name(const char* name)
        {
            m_uid = core::stxHashStringLowerCase(name, 0);
        }

        core::Key GetUID()
        {
            return m_uid;
        }
    private:
        core::Key m_uid;
    };

    //int AssignRef(int);

    class VectorCamera{
    public:  
        static VectorCamera* GetInstance(); 
        void WorldToViewport(math::Vector* worldPoint, math::Vector* cpoint);
    };
    
    class Camera
    {

    };
}

#endif // !_RADOBJECT_HPP