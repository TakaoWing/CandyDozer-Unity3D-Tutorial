#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// CandyHolder
struct CandyHolder_t426836535;
// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CandyDestroyer
struct  CandyDestroyer_t973617882  : public MonoBehaviour_t1158329972
{
public:
	// CandyHolder CandyDestroyer::candyHolder
	CandyHolder_t426836535 * ___candyHolder_2;
	// System.Int32 CandyDestroyer::reward
	int32_t ___reward_3;
	// UnityEngine.GameObject CandyDestroyer::effectPrefab
	GameObject_t1756533147 * ___effectPrefab_4;
	// UnityEngine.Vector3 CandyDestroyer::effectRotation
	Vector3_t2243707580  ___effectRotation_5;

public:
	inline static int32_t get_offset_of_candyHolder_2() { return static_cast<int32_t>(offsetof(CandyDestroyer_t973617882, ___candyHolder_2)); }
	inline CandyHolder_t426836535 * get_candyHolder_2() const { return ___candyHolder_2; }
	inline CandyHolder_t426836535 ** get_address_of_candyHolder_2() { return &___candyHolder_2; }
	inline void set_candyHolder_2(CandyHolder_t426836535 * value)
	{
		___candyHolder_2 = value;
		Il2CppCodeGenWriteBarrier(&___candyHolder_2, value);
	}

	inline static int32_t get_offset_of_reward_3() { return static_cast<int32_t>(offsetof(CandyDestroyer_t973617882, ___reward_3)); }
	inline int32_t get_reward_3() const { return ___reward_3; }
	inline int32_t* get_address_of_reward_3() { return &___reward_3; }
	inline void set_reward_3(int32_t value)
	{
		___reward_3 = value;
	}

	inline static int32_t get_offset_of_effectPrefab_4() { return static_cast<int32_t>(offsetof(CandyDestroyer_t973617882, ___effectPrefab_4)); }
	inline GameObject_t1756533147 * get_effectPrefab_4() const { return ___effectPrefab_4; }
	inline GameObject_t1756533147 ** get_address_of_effectPrefab_4() { return &___effectPrefab_4; }
	inline void set_effectPrefab_4(GameObject_t1756533147 * value)
	{
		___effectPrefab_4 = value;
		Il2CppCodeGenWriteBarrier(&___effectPrefab_4, value);
	}

	inline static int32_t get_offset_of_effectRotation_5() { return static_cast<int32_t>(offsetof(CandyDestroyer_t973617882, ___effectRotation_5)); }
	inline Vector3_t2243707580  get_effectRotation_5() const { return ___effectRotation_5; }
	inline Vector3_t2243707580 * get_address_of_effectRotation_5() { return &___effectRotation_5; }
	inline void set_effectRotation_5(Vector3_t2243707580  value)
	{
		___effectRotation_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
