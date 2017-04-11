#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.AudioSource
struct AudioSource_t1135106623;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;
// CandyHolder
struct CandyHolder_t426836535;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Shooter
struct  Shooter_t3051933708  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 Shooter::sampleCandyCount
	int32_t ___sampleCandyCount_5;
	// System.Int32 Shooter::shotPower
	int32_t ___shotPower_6;
	// UnityEngine.AudioSource Shooter::shotSound
	AudioSource_t1135106623 * ___shotSound_7;
	// UnityEngine.GameObject[] Shooter::candyPrefabs
	GameObjectU5BU5D_t3057952154* ___candyPrefabs_8;
	// UnityEngine.GameObject[] Shooter::candySquarePrefabs
	GameObjectU5BU5D_t3057952154* ___candySquarePrefabs_9;
	// CandyHolder Shooter::candyHolder
	CandyHolder_t426836535 * ___candyHolder_10;
	// System.Single Shooter::shotSpeed
	float ___shotSpeed_11;
	// System.Single Shooter::shotTorque
	float ___shotTorque_12;
	// System.Single Shooter::baseWidth
	float ___baseWidth_13;

public:
	inline static int32_t get_offset_of_sampleCandyCount_5() { return static_cast<int32_t>(offsetof(Shooter_t3051933708, ___sampleCandyCount_5)); }
	inline int32_t get_sampleCandyCount_5() const { return ___sampleCandyCount_5; }
	inline int32_t* get_address_of_sampleCandyCount_5() { return &___sampleCandyCount_5; }
	inline void set_sampleCandyCount_5(int32_t value)
	{
		___sampleCandyCount_5 = value;
	}

	inline static int32_t get_offset_of_shotPower_6() { return static_cast<int32_t>(offsetof(Shooter_t3051933708, ___shotPower_6)); }
	inline int32_t get_shotPower_6() const { return ___shotPower_6; }
	inline int32_t* get_address_of_shotPower_6() { return &___shotPower_6; }
	inline void set_shotPower_6(int32_t value)
	{
		___shotPower_6 = value;
	}

	inline static int32_t get_offset_of_shotSound_7() { return static_cast<int32_t>(offsetof(Shooter_t3051933708, ___shotSound_7)); }
	inline AudioSource_t1135106623 * get_shotSound_7() const { return ___shotSound_7; }
	inline AudioSource_t1135106623 ** get_address_of_shotSound_7() { return &___shotSound_7; }
	inline void set_shotSound_7(AudioSource_t1135106623 * value)
	{
		___shotSound_7 = value;
		Il2CppCodeGenWriteBarrier(&___shotSound_7, value);
	}

	inline static int32_t get_offset_of_candyPrefabs_8() { return static_cast<int32_t>(offsetof(Shooter_t3051933708, ___candyPrefabs_8)); }
	inline GameObjectU5BU5D_t3057952154* get_candyPrefabs_8() const { return ___candyPrefabs_8; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_candyPrefabs_8() { return &___candyPrefabs_8; }
	inline void set_candyPrefabs_8(GameObjectU5BU5D_t3057952154* value)
	{
		___candyPrefabs_8 = value;
		Il2CppCodeGenWriteBarrier(&___candyPrefabs_8, value);
	}

	inline static int32_t get_offset_of_candySquarePrefabs_9() { return static_cast<int32_t>(offsetof(Shooter_t3051933708, ___candySquarePrefabs_9)); }
	inline GameObjectU5BU5D_t3057952154* get_candySquarePrefabs_9() const { return ___candySquarePrefabs_9; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_candySquarePrefabs_9() { return &___candySquarePrefabs_9; }
	inline void set_candySquarePrefabs_9(GameObjectU5BU5D_t3057952154* value)
	{
		___candySquarePrefabs_9 = value;
		Il2CppCodeGenWriteBarrier(&___candySquarePrefabs_9, value);
	}

	inline static int32_t get_offset_of_candyHolder_10() { return static_cast<int32_t>(offsetof(Shooter_t3051933708, ___candyHolder_10)); }
	inline CandyHolder_t426836535 * get_candyHolder_10() const { return ___candyHolder_10; }
	inline CandyHolder_t426836535 ** get_address_of_candyHolder_10() { return &___candyHolder_10; }
	inline void set_candyHolder_10(CandyHolder_t426836535 * value)
	{
		___candyHolder_10 = value;
		Il2CppCodeGenWriteBarrier(&___candyHolder_10, value);
	}

	inline static int32_t get_offset_of_shotSpeed_11() { return static_cast<int32_t>(offsetof(Shooter_t3051933708, ___shotSpeed_11)); }
	inline float get_shotSpeed_11() const { return ___shotSpeed_11; }
	inline float* get_address_of_shotSpeed_11() { return &___shotSpeed_11; }
	inline void set_shotSpeed_11(float value)
	{
		___shotSpeed_11 = value;
	}

	inline static int32_t get_offset_of_shotTorque_12() { return static_cast<int32_t>(offsetof(Shooter_t3051933708, ___shotTorque_12)); }
	inline float get_shotTorque_12() const { return ___shotTorque_12; }
	inline float* get_address_of_shotTorque_12() { return &___shotTorque_12; }
	inline void set_shotTorque_12(float value)
	{
		___shotTorque_12 = value;
	}

	inline static int32_t get_offset_of_baseWidth_13() { return static_cast<int32_t>(offsetof(Shooter_t3051933708, ___baseWidth_13)); }
	inline float get_baseWidth_13() const { return ___baseWidth_13; }
	inline float* get_address_of_baseWidth_13() { return &___baseWidth_13; }
	inline void set_baseWidth_13(float value)
	{
		___baseWidth_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
