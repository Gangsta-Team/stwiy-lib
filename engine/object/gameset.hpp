//GameSet
#ifndef _GAMESET_HPP
#define _GAMESET_HPP

#pragma pack(push, 2)

template < class T > class GameSet {
public:
	char gap0[48];
	T** pSetData;
	int gap34;
	unsigned short mCount;

	T* GetSet(int i) { return pSetData[i]; }
};

#pragma pack(pop)

//static_assert(sizeof(GameSet) == 0x0/* TODO: unknown size*/);

#endif // !_GAMESET_HPP