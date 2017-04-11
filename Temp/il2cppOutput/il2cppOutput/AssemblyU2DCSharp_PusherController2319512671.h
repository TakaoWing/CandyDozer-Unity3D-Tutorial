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





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PusherController
struct  PusherController_t2319512671  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Vector3 PusherController::startPosition
	Vector3_t2243707580  ___startPosition_2;
	// System.Single PusherController::amplitude
	float ___amplitude_3;
	// System.Single PusherController::speed
	float ___speed_4;

public:
	inline static int32_t get_offset_of_startPosition_2() { return static_cast<int32_t>(offsetof(PusherController_t2319512671, ___startPosition_2)); }
	inline Vector3_t2243707580  get_startPosition_2() const { return ___startPosition_2; }
	inline Vector3_t2243707580 * get_address_of_startPosition_2() { return &___startPosition_2; }
	inline void set_startPosition_2(Vector3_t2243707580  value)
	{
		___startPosition_2 = value;
	}

	inline static int32_t get_offset_of_amplitude_3() { return static_cast<int32_t>(offsetof(PusherController_t2319512671, ___amplitude_3)); }
	inline float get_amplitude_3() const { return ___amplitude_3; }
	inline float* get_address_of_amplitude_3() { return &___amplitude_3; }
	inline void set_amplitude_3(float value)
	{
		___amplitude_3 = value;
	}

	inline static int32_t get_offset_of_speed_4() { return static_cast<int32_t>(offsetof(PusherController_t2319512671, ___speed_4)); }
	inline float get_speed_4() const { return ___speed_4; }
	inline float* get_address_of_speed_4() { return &___speed_4; }
	inline void set_speed_4(float value)
	{
		___speed_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
