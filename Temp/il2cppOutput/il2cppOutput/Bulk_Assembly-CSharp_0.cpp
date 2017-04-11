#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array3829468939.h"
#include "AssemblyU2DCSharp_U3CModuleU3E3783534214.h"
#include "AssemblyU2DCSharp_AutoDestroyEffects3418883871.h"
#include "mscorlib_System_Void1841601450.h"
#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_ParticleSystem3394631041.h"
#include "UnityEngine_UnityEngine_Component3819376471.h"
#include "UnityEngine_UnityEngine_Object1021602117.h"
#include "mscorlib_System_Boolean3825574718.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "AssemblyU2DCSharp_CandyDestroyer973617882.h"
#include "UnityEngine_UnityEngine_Collider3497673348.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"
#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_CandyHolder426836535.h"
#include "mscorlib_System_Int322071877448.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"
#include "mscorlib_System_Single2076509932.h"
#include "UnityEngine_UnityEngine_Coroutine2299508840.h"
#include "AssemblyU2DCSharp_CandyHolder_U3CRecoverCandyU3Ec_2496884478.h"
#include "mscorlib_System_UInt322149682021.h"
#include "UnityEngine_UnityEngine_WaitForSeconds3839502067.h"
#include "mscorlib_System_NotSupportedException1793819818.h"
#include "AssemblyU2DCSharp_PusherController2319512671.h"
#include "AssemblyU2DCSharp_Shooter3051933708.h"
#include "UnityEngine_UnityEngine_AudioSource1135106623.h"
#include "UnityEngine_UnityEngine_Rigidbody4233889191.h"
#include "AssemblyU2DCSharp_Shooter_U3CRecoverPowerU3Ec__Ite3973857827.h"

// AutoDestroyEffects
struct AutoDestroyEffects_t3418883871;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t1158329972;
// UnityEngine.Component
struct Component_t3819376471;
// UnityEngine.ParticleSystem
struct ParticleSystem_t3394631041;
// System.Object
struct Il2CppObject;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Object
struct Object_t1021602117;
// CandyDestroyer
struct CandyDestroyer_t973617882;
// UnityEngine.Collider
struct Collider_t3497673348;
// System.String
struct String_t;
// CandyHolder
struct CandyHolder_t426836535;
// UnityEngine.Transform
struct Transform_t3275118058;
// System.Object[]
struct ObjectU5BU5D_t3614634134;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// UnityEngine.Coroutine
struct Coroutine_t2299508840;
// CandyHolder/<RecoverCandy>c__Iterator0
struct U3CRecoverCandyU3Ec__Iterator0_t2496884478;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t3839502067;
// System.NotSupportedException
struct NotSupportedException_t1793819818;
// PusherController
struct PusherController_t2319512671;
// Shooter
struct Shooter_t3051933708;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;
// UnityEngine.Rigidbody
struct Rigidbody_t4233889191;
// Shooter/<RecoverPower>c__Iterator0
struct U3CRecoverPowerU3Ec__Iterator0_t3973857827;
extern const MethodInfo* Component_GetComponent_TisParticleSystem_t3394631041_m943859897_MethodInfo_var;
extern const uint32_t AutoDestroyEffects_Start_m2707065034_MetadataUsageId;
extern Il2CppClass* Object_t1021602117_il2cpp_TypeInfo_var;
extern const uint32_t AutoDestroyEffects_Update_m3188413799_MetadataUsageId;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* Object_Instantiate_TisGameObject_t1756533147_m3064851704_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral949722705;
extern const uint32_t CandyDestroyer_OnTriggerEnter_m3590527399_MetadataUsageId;
extern Il2CppClass* GUI_t4082743951_il2cpp_TypeInfo_var;
extern Il2CppClass* Int32_t2071877448_il2cpp_TypeInfo_var;
extern Il2CppClass* ObjectU5BU5D_t3614634134_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3685132427;
extern Il2CppCodeGenString* _stringLiteral460756390;
extern Il2CppCodeGenString* _stringLiteral3819919072;
extern const uint32_t CandyHolder_OnGUI_m157689902_MetadataUsageId;
extern Il2CppClass* U3CRecoverCandyU3Ec__Iterator0_t2496884478_il2cpp_TypeInfo_var;
extern const uint32_t CandyHolder_RecoverCandy_m577170583_MetadataUsageId;
extern Il2CppClass* WaitForSeconds_t3839502067_il2cpp_TypeInfo_var;
extern const uint32_t U3CRecoverCandyU3Ec__Iterator0_MoveNext_m1707128743_MetadataUsageId;
extern Il2CppClass* NotSupportedException_t1793819818_il2cpp_TypeInfo_var;
extern const uint32_t U3CRecoverCandyU3Ec__Iterator0_Reset_m654991054_MetadataUsageId;
extern Il2CppClass* Mathf_t2336485820_il2cpp_TypeInfo_var;
extern const uint32_t PusherController_Update_m3804620875_MetadataUsageId;
extern const MethodInfo* Component_GetComponent_TisAudioSource_t1135106623_m3920278003_MethodInfo_var;
extern const uint32_t Shooter_Start_m3434910611_MetadataUsageId;
extern Il2CppClass* Input_t1785128008_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3645101709;
extern const uint32_t Shooter_Update_m3198244586_MetadataUsageId;
extern const uint32_t Shooter_GetInstantiatePosition_m3517179282_MetadataUsageId;
extern const MethodInfo* GameObject_GetComponent_TisRigidbody_t4233889191_m1060888193_MethodInfo_var;
extern const uint32_t Shooter_Shot_m2757777695_MetadataUsageId;
extern Il2CppCodeGenString* _stringLiteral372029319;
extern const uint32_t Shooter_OnGUI_m198682545_MetadataUsageId;
extern Il2CppClass* U3CRecoverPowerU3Ec__Iterator0_t3973857827_il2cpp_TypeInfo_var;
extern const uint32_t Shooter_RecoverPower_m2007727478_MetadataUsageId;
extern const uint32_t U3CRecoverPowerU3Ec__Iterator0_MoveNext_m1568477434_MetadataUsageId;
extern const uint32_t U3CRecoverPowerU3Ec__Iterator0_Reset_m2878993943_MetadataUsageId;

// System.Object[]
struct ObjectU5BU5D_t3614634134  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) Il2CppObject * m_Items[1];

public:
	inline Il2CppObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Il2CppObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) GameObject_t1756533147 * m_Items[1];

public:
	inline GameObject_t1756533147 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t1756533147 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t1756533147 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline GameObject_t1756533147 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t1756533147 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t1756533147 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C"  Il2CppObject * Component_GetComponent_TisIl2CppObject_m4109961936_gshared (Component_t3819376471 * __this, const MethodInfo* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C"  Il2CppObject * Object_Instantiate_TisIl2CppObject_m3829784634_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * p0, Vector3_t2243707580  p1, Quaternion_t4030073918  p2, const MethodInfo* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C"  Il2CppObject * GameObject_GetComponent_TisIl2CppObject_m3347661153_gshared (GameObject_t1756533147 * __this, const MethodInfo* method);

// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C"  void MonoBehaviour__ctor_m2464341955 (MonoBehaviour_t1158329972 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.ParticleSystem>()
#define Component_GetComponent_TisParticleSystem_t3394631041_m943859897(__this, method) ((  ParticleSystem_t3394631041 * (*) (Component_t3819376471 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m4109961936_gshared)(__this, method)
// System.Boolean UnityEngine.ParticleSystem::get_isPlaying()
extern "C"  bool ParticleSystem_get_isPlaying_m1575756079 (ParticleSystem_t3394631041 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C"  GameObject_t1756533147 * Component_get_gameObject_m3105766835 (Component_t3819376471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
extern "C"  void Object_Destroy_m4145850038 (Il2CppObject * __this /* static, unused */, Object_t1021602117 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GameObject::get_tag()
extern "C"  String_t* GameObject_get_tag_m1425941094 (GameObject_t1756533147 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C"  bool String_op_Equality_m1790663636 (Il2CppObject * __this /* static, unused */, String_t* p0, String_t* p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CandyHolder::AddCandy(System.Int32)
extern "C"  void CandyHolder_AddCandy_m557142523 (CandyHolder_t426836535 * __this, int32_t ___amount0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C"  bool Object_op_Inequality_m2402264703 (Il2CppObject * __this /* static, unused */, Object_t1021602117 * p0, Object_t1021602117 * p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C"  Transform_t3275118058 * Component_get_transform_m2697483695 (Component_t3819376471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C"  Vector3_t2243707580  Transform_get_position_m1104419803 (Transform_t3275118058 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
extern "C"  Quaternion_t4030073918  Quaternion_Euler_m3586339259 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
#define Object_Instantiate_TisGameObject_t1756533147_m3064851704(__this /* static, unused */, p0, p1, p2, method) ((  GameObject_t1756533147 * (*) (Il2CppObject * /* static, unused */, GameObject_t1756533147 *, Vector3_t2243707580 , Quaternion_t4030073918 , const MethodInfo*))Object_Instantiate_TisIl2CppObject_m3829784634_gshared)(__this /* static, unused */, p0, p1, p2, method)
// UnityEngine.Color UnityEngine.Color::get_black()
extern "C"  Color_t2020392075  Color_get_black_m2650940523 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_color(UnityEngine.Color)
extern "C"  void GUI_set_color_m3547334264 (Il2CppObject * __this /* static, unused */, Color_t2020392075  p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.Object,System.Object)
extern "C"  String_t* String_Concat_m56707527 (Il2CppObject * __this /* static, unused */, Il2CppObject * p0, Il2CppObject * p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.Object[])
extern "C"  String_t* String_Concat_m3881798623 (Il2CppObject * __this /* static, unused */, ObjectU5BU5D_t3614634134* p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C"  void Rect__ctor_m1220545469 (Rect_t3681755626 * __this, float p0, float p1, float p2, float p3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,System.String)
extern "C"  void GUI_Label_m2412846501 (Il2CppObject * __this /* static, unused */, Rect_t3681755626  p0, String_t* p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator CandyHolder::RecoverCandy()
extern "C"  Il2CppObject * CandyHolder_RecoverCandy_m577170583 (CandyHolder_t426836535 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
extern "C"  Coroutine_t2299508840 * MonoBehaviour_StartCoroutine_m2470621050 (MonoBehaviour_t1158329972 * __this, Il2CppObject * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CandyHolder/<RecoverCandy>c__Iterator0::.ctor()
extern "C"  void U3CRecoverCandyU3Ec__Iterator0__ctor_m3509504629 (U3CRecoverCandyU3Ec__Iterator0_t2496884478 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Object::.ctor()
extern "C"  void Object__ctor_m2551263788 (Il2CppObject * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
extern "C"  void WaitForSeconds__ctor_m1990515539 (WaitForSeconds_t3839502067 * __this, float p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NotSupportedException::.ctor()
extern "C"  void NotSupportedException__ctor_m3232764727 (NotSupportedException_t1793819818 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
extern "C"  Vector3_t2243707580  Transform_get_localPosition_m2533925116 (Transform_t3275118058 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Time::get_time()
extern "C"  float Time_get_time_m2216684562 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C"  void Vector3__ctor_m2638739322 (Vector3_t2243707580 * __this, float p0, float p1, float p2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t2243707580  Vector3_op_Addition_m3146764857 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  p0, Vector3_t2243707580  p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
extern "C"  void Transform_set_localPosition_m1026930133 (Transform_t3275118058 * __this, Vector3_t2243707580  p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
#define Component_GetComponent_TisAudioSource_t1135106623_m3920278003(__this, method) ((  AudioSource_t1135106623 * (*) (Component_t3819376471 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m4109961936_gshared)(__this, method)
// System.Boolean UnityEngine.Input::GetButtonDown(System.String)
extern "C"  bool Input_GetButtonDown_m2792523731 (Il2CppObject * __this /* static, unused */, String_t* p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Shooter::Shot()
extern "C"  void Shooter_Shot_m2757777695 (Shooter_t3051933708 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
extern "C"  int32_t Random_Range_m694320887 (Il2CppObject * __this /* static, unused */, int32_t p0, int32_t p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
extern "C"  Vector3_t2243707580  Input_get_mousePosition_m146923508 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Screen::get_width()
extern "C"  int32_t Screen_get_width_m41137238 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CandyHolder::GetCandyAmount()
extern "C"  int32_t CandyHolder_GetCandyAmount_m4011861223 (CandyHolder_t426836535 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Shooter::SampleCandy()
extern "C"  GameObject_t1756533147 * Shooter_SampleCandy_m1884038959 (Shooter_t3051933708 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Shooter::GetInstantiatePosition()
extern "C"  Vector3_t2243707580  Shooter_GetInstantiatePosition_m3517179282 (Shooter_t3051933708 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
extern "C"  Quaternion_t4030073918  Quaternion_get_identity_m1561886418 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C"  Transform_t3275118058 * GameObject_get_transform_m909382139 (GameObject_t1756533147 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
extern "C"  void Transform_set_parent_m3281327839 (Transform_t3275118058 * __this, Transform_t3275118058 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody>()
#define GameObject_GetComponent_TisRigidbody_t4233889191_m1060888193(__this, method) ((  Rigidbody_t4233889191 * (*) (GameObject_t1756533147 *, const MethodInfo*))GameObject_GetComponent_TisIl2CppObject_m3347661153_gshared)(__this, method)
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
extern "C"  Vector3_t2243707580  Transform_get_forward_m1833488937 (Transform_t3275118058 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
extern "C"  Vector3_t2243707580  Vector3_op_Multiply_m1351554733 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  p0, float p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3)
extern "C"  void Rigidbody_AddForce_m2836187433 (Rigidbody_t4233889191 * __this, Vector3_t2243707580  p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::AddTorque(UnityEngine.Vector3)
extern "C"  void Rigidbody_AddTorque_m2680584150 (Rigidbody_t4233889191 * __this, Vector3_t2243707580  p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CandyHolder::ConsumeCandy()
extern "C"  void CandyHolder_ConsumeCandy_m410632763 (CandyHolder_t426836535 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Shooter::ConsumePower()
extern "C"  void Shooter_ConsumePower_m1756538112 (Shooter_t3051933708 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::Play()
extern "C"  void AudioSource_Play_m353744792 (AudioSource_t1135106623 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String)
extern "C"  String_t* String_Concat_m2596409543 (Il2CppObject * __this /* static, unused */, String_t* p0, String_t* p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Shooter::RecoverPower()
extern "C"  Il2CppObject * Shooter_RecoverPower_m2007727478 (Shooter_t3051933708 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Shooter/<RecoverPower>c__Iterator0::.ctor()
extern "C"  void U3CRecoverPowerU3Ec__Iterator0__ctor_m264272422 (U3CRecoverPowerU3Ec__Iterator0_t3973857827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void AutoDestroyEffects::.ctor()
extern "C"  void AutoDestroyEffects__ctor_m1186402582 (AutoDestroyEffects_t3418883871 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AutoDestroyEffects::Start()
extern "C"  void AutoDestroyEffects_Start_m2707065034 (AutoDestroyEffects_t3418883871 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AutoDestroyEffects_Start_m2707065034_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ParticleSystem_t3394631041 * L_0 = Component_GetComponent_TisParticleSystem_t3394631041_m943859897(__this, /*hidden argument*/Component_GetComponent_TisParticleSystem_t3394631041_m943859897_MethodInfo_var);
		__this->set_particle_2(L_0);
		return;
	}
}
// System.Void AutoDestroyEffects::Update()
extern "C"  void AutoDestroyEffects_Update_m3188413799 (AutoDestroyEffects_t3418883871 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AutoDestroyEffects_Update_m3188413799_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ParticleSystem_t3394631041 * L_0 = __this->get_particle_2();
		NullCheck(L_0);
		bool L_1 = ParticleSystem_get_isPlaying_m1575756079(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001b;
		}
	}
	{
		GameObject_t1756533147 * L_2 = Component_get_gameObject_m3105766835(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		Object_Destroy_m4145850038(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
	}

IL_001b:
	{
		return;
	}
}
// System.Void CandyDestroyer::.ctor()
extern "C"  void CandyDestroyer__ctor_m1369917859 (CandyDestroyer_t973617882 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CandyDestroyer::OnTriggerEnter(UnityEngine.Collider)
extern "C"  void CandyDestroyer_OnTriggerEnter_m3590527399 (CandyDestroyer_t973617882 * __this, Collider_t3497673348 * ___other0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CandyDestroyer_OnTriggerEnter_m3590527399_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Collider_t3497673348 * L_0 = ___other0;
		NullCheck(L_0);
		GameObject_t1756533147 * L_1 = Component_get_gameObject_m3105766835(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = GameObject_get_tag_m1425941094(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_op_Equality_m1790663636(NULL /*static, unused*/, L_2, _stringLiteral949722705, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0069;
		}
	}
	{
		CandyHolder_t426836535 * L_4 = __this->get_candyHolder_2();
		int32_t L_5 = __this->get_reward_3();
		NullCheck(L_4);
		CandyHolder_AddCandy_m557142523(L_4, L_5, /*hidden argument*/NULL);
		Collider_t3497673348 * L_6 = ___other0;
		NullCheck(L_6);
		GameObject_t1756533147 * L_7 = Component_get_gameObject_m3105766835(L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		Object_Destroy_m4145850038(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		GameObject_t1756533147 * L_8 = __this->get_effectPrefab_4();
		bool L_9 = Object_op_Inequality_m2402264703(NULL /*static, unused*/, L_8, (Object_t1021602117 *)NULL, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0069;
		}
	}
	{
		GameObject_t1756533147 * L_10 = __this->get_effectPrefab_4();
		Collider_t3497673348 * L_11 = ___other0;
		NullCheck(L_11);
		Transform_t3275118058 * L_12 = Component_get_transform_m2697483695(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		Vector3_t2243707580  L_13 = Transform_get_position_m1104419803(L_12, /*hidden argument*/NULL);
		Vector3_t2243707580  L_14 = __this->get_effectRotation_5();
		Quaternion_t4030073918  L_15 = Quaternion_Euler_m3586339259(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		Object_Instantiate_TisGameObject_t1756533147_m3064851704(NULL /*static, unused*/, L_10, L_13, L_15, /*hidden argument*/Object_Instantiate_TisGameObject_t1756533147_m3064851704_MethodInfo_var);
	}

IL_0069:
	{
		return;
	}
}
// System.Void CandyHolder::.ctor()
extern "C"  void CandyHolder__ctor_m1281640926 (CandyHolder_t426836535 * __this, const MethodInfo* method)
{
	{
		__this->set_candy_4(((int32_t)30));
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CandyHolder::ConsumeCandy()
extern "C"  void CandyHolder_ConsumeCandy_m410632763 (CandyHolder_t426836535 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = __this->get_candy_4();
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_1 = __this->get_candy_4();
		__this->set_candy_4(((int32_t)((int32_t)L_1-(int32_t)1)));
	}

IL_001a:
	{
		return;
	}
}
// System.Int32 CandyHolder::GetCandyAmount()
extern "C"  int32_t CandyHolder_GetCandyAmount_m4011861223 (CandyHolder_t426836535 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = __this->get_candy_4();
		return L_0;
	}
}
// System.Void CandyHolder::AddCandy(System.Int32)
extern "C"  void CandyHolder_AddCandy_m557142523 (CandyHolder_t426836535 * __this, int32_t ___amount0, const MethodInfo* method)
{
	{
		int32_t L_0 = __this->get_candy_4();
		int32_t L_1 = ___amount0;
		__this->set_candy_4(((int32_t)((int32_t)L_0+(int32_t)L_1)));
		return;
	}
}
// System.Void CandyHolder::OnGUI()
extern "C"  void CandyHolder_OnGUI_m157689902 (CandyHolder_t426836535 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CandyHolder_OnGUI_m157689902_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		Color_t2020392075  L_0 = Color_get_black_m2650940523(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t4082743951_il2cpp_TypeInfo_var);
		GUI_set_color_m3547334264(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		int32_t L_1 = __this->get_candy_4();
		int32_t L_2 = L_1;
		Il2CppObject * L_3 = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &L_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m56707527(NULL /*static, unused*/, _stringLiteral3685132427, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		int32_t L_5 = __this->get_counter_5();
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_005a;
		}
	}
	{
		ObjectU5BU5D_t3614634134* L_6 = ((ObjectU5BU5D_t3614634134*)SZArrayNew(ObjectU5BU5D_t3614634134_il2cpp_TypeInfo_var, (uint32_t)4));
		String_t* L_7 = V_0;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppObject *)L_7);
		ObjectU5BU5D_t3614634134* L_8 = L_6;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral460756390);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(1), (Il2CppObject *)_stringLiteral460756390);
		ObjectU5BU5D_t3614634134* L_9 = L_8;
		int32_t L_10 = __this->get_counter_5();
		int32_t L_11 = L_10;
		Il2CppObject * L_12 = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (Il2CppObject *)L_12);
		ObjectU5BU5D_t3614634134* L_13 = L_9;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, _stringLiteral3819919072);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(3), (Il2CppObject *)_stringLiteral3819919072);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_14 = String_Concat_m3881798623(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		V_0 = L_14;
	}

IL_005a:
	{
		Rect_t3681755626  L_15;
		memset(&L_15, 0, sizeof(L_15));
		Rect__ctor_m1220545469(&L_15, (0.0f), (0.0f), (120.0f), (30.0f), /*hidden argument*/NULL);
		String_t* L_16 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t4082743951_il2cpp_TypeInfo_var);
		GUI_Label_m2412846501(NULL /*static, unused*/, L_15, L_16, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CandyHolder::Update()
extern "C"  void CandyHolder_Update_m4273448027 (CandyHolder_t426836535 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = __this->get_candy_4();
		if ((((int32_t)L_0) >= ((int32_t)((int32_t)30))))
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_1 = __this->get_counter_5();
		if ((((int32_t)L_1) > ((int32_t)0)))
		{
			goto IL_0026;
		}
	}
	{
		Il2CppObject * L_2 = CandyHolder_RecoverCandy_m577170583(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m2470621050(__this, L_2, /*hidden argument*/NULL);
	}

IL_0026:
	{
		return;
	}
}
// System.Collections.IEnumerator CandyHolder::RecoverCandy()
extern "C"  Il2CppObject * CandyHolder_RecoverCandy_m577170583 (CandyHolder_t426836535 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CandyHolder_RecoverCandy_m577170583_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CRecoverCandyU3Ec__Iterator0_t2496884478 * V_0 = NULL;
	{
		U3CRecoverCandyU3Ec__Iterator0_t2496884478 * L_0 = (U3CRecoverCandyU3Ec__Iterator0_t2496884478 *)il2cpp_codegen_object_new(U3CRecoverCandyU3Ec__Iterator0_t2496884478_il2cpp_TypeInfo_var);
		U3CRecoverCandyU3Ec__Iterator0__ctor_m3509504629(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CRecoverCandyU3Ec__Iterator0_t2496884478 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U24this_0(__this);
		U3CRecoverCandyU3Ec__Iterator0_t2496884478 * L_2 = V_0;
		return L_2;
	}
}
// System.Void CandyHolder/<RecoverCandy>c__Iterator0::.ctor()
extern "C"  void U3CRecoverCandyU3Ec__Iterator0__ctor_m3509504629 (U3CRecoverCandyU3Ec__Iterator0_t2496884478 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m2551263788(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean CandyHolder/<RecoverCandy>c__Iterator0::MoveNext()
extern "C"  bool U3CRecoverCandyU3Ec__Iterator0_MoveNext_m1707128743 (U3CRecoverCandyU3Ec__Iterator0_t2496884478 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CRecoverCandyU3Ec__Iterator0_MoveNext_m1707128743_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_3();
		V_0 = L_0;
		__this->set_U24PC_3((-1));
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0021;
		}
		if (L_1 == 1)
		{
			goto IL_0057;
		}
	}
	{
		goto IL_0095;
	}

IL_0021:
	{
		CandyHolder_t426836535 * L_2 = __this->get_U24this_0();
		NullCheck(L_2);
		L_2->set_counter_5(((int32_t)10));
		goto IL_006a;
	}

IL_0033:
	{
		WaitForSeconds_t3839502067 * L_3 = (WaitForSeconds_t3839502067 *)il2cpp_codegen_object_new(WaitForSeconds_t3839502067_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m1990515539(L_3, (1.0f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_3);
		bool L_4 = __this->get_U24disposing_2();
		if (L_4)
		{
			goto IL_0052;
		}
	}
	{
		__this->set_U24PC_3(1);
	}

IL_0052:
	{
		goto IL_0097;
	}

IL_0057:
	{
		CandyHolder_t426836535 * L_5 = __this->get_U24this_0();
		CandyHolder_t426836535 * L_6 = L_5;
		NullCheck(L_6);
		int32_t L_7 = L_6->get_counter_5();
		NullCheck(L_6);
		L_6->set_counter_5(((int32_t)((int32_t)L_7-(int32_t)1)));
	}

IL_006a:
	{
		CandyHolder_t426836535 * L_8 = __this->get_U24this_0();
		NullCheck(L_8);
		int32_t L_9 = L_8->get_counter_5();
		if ((((int32_t)L_9) > ((int32_t)0)))
		{
			goto IL_0033;
		}
	}
	{
		CandyHolder_t426836535 * L_10 = __this->get_U24this_0();
		CandyHolder_t426836535 * L_11 = L_10;
		NullCheck(L_11);
		int32_t L_12 = L_11->get_candy_4();
		NullCheck(L_11);
		L_11->set_candy_4(((int32_t)((int32_t)L_12+(int32_t)1)));
		__this->set_U24PC_3((-1));
	}

IL_0095:
	{
		return (bool)0;
	}

IL_0097:
	{
		return (bool)1;
	}
}
// System.Object CandyHolder/<RecoverCandy>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  Il2CppObject * U3CRecoverCandyU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m33083063 (U3CRecoverCandyU3Ec__Iterator0_t2496884478 * __this, const MethodInfo* method)
{
	{
		Il2CppObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Object CandyHolder/<RecoverCandy>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C"  Il2CppObject * U3CRecoverCandyU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m1448545151 (U3CRecoverCandyU3Ec__Iterator0_t2496884478 * __this, const MethodInfo* method)
{
	{
		Il2CppObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Void CandyHolder/<RecoverCandy>c__Iterator0::Dispose()
extern "C"  void U3CRecoverCandyU3Ec__Iterator0_Dispose_m344242392 (U3CRecoverCandyU3Ec__Iterator0_t2496884478 * __this, const MethodInfo* method)
{
	{
		__this->set_U24disposing_2((bool)1);
		__this->set_U24PC_3((-1));
		return;
	}
}
// System.Void CandyHolder/<RecoverCandy>c__Iterator0::Reset()
extern "C"  void U3CRecoverCandyU3Ec__Iterator0_Reset_m654991054 (U3CRecoverCandyU3Ec__Iterator0_t2496884478 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CRecoverCandyU3Ec__Iterator0_Reset_m654991054_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1793819818 * L_0 = (NotSupportedException_t1793819818 *)il2cpp_codegen_object_new(NotSupportedException_t1793819818_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m3232764727(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
	}
}
// System.Void PusherController::.ctor()
extern "C"  void PusherController__ctor_m1147857506 (PusherController_t2319512671 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PusherController::Start()
extern "C"  void PusherController_Start_m1973835294 (PusherController_t2319512671 * __this, const MethodInfo* method)
{
	{
		Transform_t3275118058 * L_0 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t2243707580  L_1 = Transform_get_localPosition_m2533925116(L_0, /*hidden argument*/NULL);
		__this->set_startPosition_2(L_1);
		return;
	}
}
// System.Void PusherController::Update()
extern "C"  void PusherController_Update_m3804620875 (PusherController_t2319512671 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PusherController_Update_m3804620875_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->get_amplitude_3();
		float L_1 = Time_get_time_m2216684562(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_2 = __this->get_speed_4();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t2336485820_il2cpp_TypeInfo_var);
		float L_3 = sinf(((float)((float)L_1*(float)L_2)));
		V_0 = ((float)((float)L_0*(float)L_3));
		Transform_t3275118058 * L_4 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Vector3_t2243707580  L_5 = __this->get_startPosition_2();
		float L_6 = V_0;
		Vector3_t2243707580  L_7;
		memset(&L_7, 0, sizeof(L_7));
		Vector3__ctor_m2638739322(&L_7, (0.0f), (0.0f), L_6, /*hidden argument*/NULL);
		Vector3_t2243707580  L_8 = Vector3_op_Addition_m3146764857(NULL /*static, unused*/, L_5, L_7, /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_set_localPosition_m1026930133(L_4, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Shooter::.ctor()
extern "C"  void Shooter__ctor_m2111854087 (Shooter_t3051933708 * __this, const MethodInfo* method)
{
	{
		__this->set_shotPower_6(5);
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Shooter::Start()
extern "C"  void Shooter_Start_m3434910611 (Shooter_t3051933708 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Shooter_Start_m3434910611_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AudioSource_t1135106623 * L_0 = Component_GetComponent_TisAudioSource_t1135106623_m3920278003(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_t1135106623_m3920278003_MethodInfo_var);
		__this->set_shotSound_7(L_0);
		return;
	}
}
// System.Void Shooter::Update()
extern "C"  void Shooter_Update_m3198244586 (Shooter_t3051933708 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Shooter_Update_m3198244586_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetButtonDown_m2792523731(NULL /*static, unused*/, _stringLiteral3645101709, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		Shooter_Shot_m2757777695(__this, /*hidden argument*/NULL);
	}

IL_0015:
	{
		return;
	}
}
// UnityEngine.GameObject Shooter::SampleCandy()
extern "C"  GameObject_t1756533147 * Shooter_SampleCandy_m1884038959 (Shooter_t3051933708 * __this, const MethodInfo* method)
{
	GameObject_t1756533147 * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		V_0 = (GameObject_t1756533147 *)NULL;
		int32_t L_0 = __this->get_sampleCandyCount_5();
		if (((int32_t)((int32_t)L_0%(int32_t)3)))
		{
			goto IL_002c;
		}
	}
	{
		GameObjectU5BU5D_t3057952154* L_1 = __this->get_candyPrefabs_8();
		NullCheck(L_1);
		int32_t L_2 = Random_Range_m694320887(NULL /*static, unused*/, 0, (((int32_t)((int32_t)(((Il2CppArray *)L_1)->max_length)))), /*hidden argument*/NULL);
		V_1 = L_2;
		GameObjectU5BU5D_t3057952154* L_3 = __this->get_candyPrefabs_8();
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		GameObject_t1756533147 * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_0 = L_6;
		goto IL_0044;
	}

IL_002c:
	{
		GameObjectU5BU5D_t3057952154* L_7 = __this->get_candySquarePrefabs_9();
		NullCheck(L_7);
		int32_t L_8 = Random_Range_m694320887(NULL /*static, unused*/, 0, (((int32_t)((int32_t)(((Il2CppArray *)L_7)->max_length)))), /*hidden argument*/NULL);
		V_2 = L_8;
		GameObjectU5BU5D_t3057952154* L_9 = __this->get_candySquarePrefabs_9();
		int32_t L_10 = V_2;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		GameObject_t1756533147 * L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_0 = L_12;
	}

IL_0044:
	{
		int32_t L_13 = __this->get_sampleCandyCount_5();
		__this->set_sampleCandyCount_5(((int32_t)((int32_t)L_13+(int32_t)1)));
		GameObject_t1756533147 * L_14 = V_0;
		return L_14;
	}
}
// UnityEngine.Vector3 Shooter::GetInstantiatePosition()
extern "C"  Vector3_t2243707580  Shooter_GetInstantiatePosition_m3517179282 (Shooter_t3051933708 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Shooter_GetInstantiatePosition_m3517179282_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t2243707580  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		float L_0 = __this->get_baseWidth_13();
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		Vector3_t2243707580  L_1 = Input_get_mousePosition_m146923508(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = L_1;
		float L_2 = (&V_1)->get_x_1();
		int32_t L_3 = Screen_get_width_m41137238(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_4 = __this->get_baseWidth_13();
		V_0 = ((float)((float)((float)((float)L_0*(float)((float)((float)L_2/(float)(((float)((float)L_3)))))))-(float)((float)((float)L_4/(float)(2.0f)))));
		Transform_t3275118058 * L_5 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_t2243707580  L_6 = Transform_get_position_m1104419803(L_5, /*hidden argument*/NULL);
		float L_7 = V_0;
		Vector3_t2243707580  L_8;
		memset(&L_8, 0, sizeof(L_8));
		Vector3__ctor_m2638739322(&L_8, L_7, (0.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t2243707580  L_9 = Vector3_op_Addition_m3146764857(NULL /*static, unused*/, L_6, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// System.Void Shooter::Shot()
extern "C"  void Shooter_Shot_m2757777695 (Shooter_t3051933708 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Shooter_Shot_m2757777695_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t1756533147 * V_0 = NULL;
	Rigidbody_t4233889191 * V_1 = NULL;
	{
		CandyHolder_t426836535 * L_0 = __this->get_candyHolder_10();
		NullCheck(L_0);
		int32_t L_1 = CandyHolder_GetCandyAmount_m4011861223(L_0, /*hidden argument*/NULL);
		if ((((int32_t)L_1) > ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		int32_t L_2 = __this->get_shotPower_6();
		if ((((int32_t)L_2) > ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		return;
	}

IL_001f:
	{
		GameObject_t1756533147 * L_3 = Shooter_SampleCandy_m1884038959(__this, /*hidden argument*/NULL);
		Vector3_t2243707580  L_4 = Shooter_GetInstantiatePosition_m3517179282(__this, /*hidden argument*/NULL);
		Quaternion_t4030073918  L_5 = Quaternion_get_identity_m1561886418(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		GameObject_t1756533147 * L_6 = Object_Instantiate_TisGameObject_t1756533147_m3064851704(NULL /*static, unused*/, L_3, L_4, L_5, /*hidden argument*/Object_Instantiate_TisGameObject_t1756533147_m3064851704_MethodInfo_var);
		V_0 = L_6;
		GameObject_t1756533147 * L_7 = V_0;
		NullCheck(L_7);
		Transform_t3275118058 * L_8 = GameObject_get_transform_m909382139(L_7, /*hidden argument*/NULL);
		CandyHolder_t426836535 * L_9 = __this->get_candyHolder_10();
		NullCheck(L_9);
		Transform_t3275118058 * L_10 = Component_get_transform_m2697483695(L_9, /*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_set_parent_m3281327839(L_8, L_10, /*hidden argument*/NULL);
		GameObject_t1756533147 * L_11 = V_0;
		NullCheck(L_11);
		Rigidbody_t4233889191 * L_12 = GameObject_GetComponent_TisRigidbody_t4233889191_m1060888193(L_11, /*hidden argument*/GameObject_GetComponent_TisRigidbody_t4233889191_m1060888193_MethodInfo_var);
		V_1 = L_12;
		Rigidbody_t4233889191 * L_13 = V_1;
		Transform_t3275118058 * L_14 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		NullCheck(L_14);
		Vector3_t2243707580  L_15 = Transform_get_forward_m1833488937(L_14, /*hidden argument*/NULL);
		float L_16 = __this->get_shotSpeed_11();
		Vector3_t2243707580  L_17 = Vector3_op_Multiply_m1351554733(NULL /*static, unused*/, L_15, L_16, /*hidden argument*/NULL);
		NullCheck(L_13);
		Rigidbody_AddForce_m2836187433(L_13, L_17, /*hidden argument*/NULL);
		Rigidbody_t4233889191 * L_18 = V_1;
		float L_19 = __this->get_shotTorque_12();
		Vector3_t2243707580  L_20;
		memset(&L_20, 0, sizeof(L_20));
		Vector3__ctor_m2638739322(&L_20, (0.0f), L_19, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_18);
		Rigidbody_AddTorque_m2680584150(L_18, L_20, /*hidden argument*/NULL);
		CandyHolder_t426836535 * L_21 = __this->get_candyHolder_10();
		NullCheck(L_21);
		CandyHolder_ConsumeCandy_m410632763(L_21, /*hidden argument*/NULL);
		Shooter_ConsumePower_m1756538112(__this, /*hidden argument*/NULL);
		AudioSource_t1135106623 * L_22 = __this->get_shotSound_7();
		NullCheck(L_22);
		AudioSource_Play_m353744792(L_22, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Shooter::OnGUI()
extern "C"  void Shooter_OnGUI_m198682545 (Shooter_t3051933708 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Shooter_OnGUI_m198682545_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		Color_t2020392075  L_0 = Color_get_black_m2650940523(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t4082743951_il2cpp_TypeInfo_var);
		GUI_set_color_m3547334264(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
		V_0 = L_1;
		V_1 = 0;
		goto IL_0027;
	}

IL_0017:
	{
		String_t* L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m2596409543(NULL /*static, unused*/, L_2, _stringLiteral372029319, /*hidden argument*/NULL);
		V_0 = L_3;
		int32_t L_4 = V_1;
		V_1 = ((int32_t)((int32_t)L_4+(int32_t)1));
	}

IL_0027:
	{
		int32_t L_5 = V_1;
		int32_t L_6 = __this->get_shotPower_6();
		if ((((int32_t)L_5) < ((int32_t)L_6)))
		{
			goto IL_0017;
		}
	}
	{
		Rect_t3681755626  L_7;
		memset(&L_7, 0, sizeof(L_7));
		Rect__ctor_m1220545469(&L_7, (0.0f), (15.0f), (100.0f), (30.0f), /*hidden argument*/NULL);
		String_t* L_8 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t4082743951_il2cpp_TypeInfo_var);
		GUI_Label_m2412846501(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Shooter::ConsumePower()
extern "C"  void Shooter_ConsumePower_m1756538112 (Shooter_t3051933708 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = __this->get_shotPower_6();
		__this->set_shotPower_6(((int32_t)((int32_t)L_0-(int32_t)1)));
		Il2CppObject * L_1 = Shooter_RecoverPower_m2007727478(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m2470621050(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator Shooter::RecoverPower()
extern "C"  Il2CppObject * Shooter_RecoverPower_m2007727478 (Shooter_t3051933708 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Shooter_RecoverPower_m2007727478_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CRecoverPowerU3Ec__Iterator0_t3973857827 * V_0 = NULL;
	{
		U3CRecoverPowerU3Ec__Iterator0_t3973857827 * L_0 = (U3CRecoverPowerU3Ec__Iterator0_t3973857827 *)il2cpp_codegen_object_new(U3CRecoverPowerU3Ec__Iterator0_t3973857827_il2cpp_TypeInfo_var);
		U3CRecoverPowerU3Ec__Iterator0__ctor_m264272422(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CRecoverPowerU3Ec__Iterator0_t3973857827 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U24this_0(__this);
		U3CRecoverPowerU3Ec__Iterator0_t3973857827 * L_2 = V_0;
		return L_2;
	}
}
// System.Void Shooter/<RecoverPower>c__Iterator0::.ctor()
extern "C"  void U3CRecoverPowerU3Ec__Iterator0__ctor_m264272422 (U3CRecoverPowerU3Ec__Iterator0_t3973857827 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m2551263788(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Shooter/<RecoverPower>c__Iterator0::MoveNext()
extern "C"  bool U3CRecoverPowerU3Ec__Iterator0_MoveNext_m1568477434 (U3CRecoverPowerU3Ec__Iterator0_t3973857827 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CRecoverPowerU3Ec__Iterator0_MoveNext_m1568477434_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_3();
		V_0 = L_0;
		__this->set_U24PC_3((-1));
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0021;
		}
		if (L_1 == 1)
		{
			goto IL_0045;
		}
	}
	{
		goto IL_005f;
	}

IL_0021:
	{
		WaitForSeconds_t3839502067 * L_2 = (WaitForSeconds_t3839502067 *)il2cpp_codegen_object_new(WaitForSeconds_t3839502067_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m1990515539(L_2, (3.0f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_2);
		bool L_3 = __this->get_U24disposing_2();
		if (L_3)
		{
			goto IL_0040;
		}
	}
	{
		__this->set_U24PC_3(1);
	}

IL_0040:
	{
		goto IL_0061;
	}

IL_0045:
	{
		Shooter_t3051933708 * L_4 = __this->get_U24this_0();
		Shooter_t3051933708 * L_5 = L_4;
		NullCheck(L_5);
		int32_t L_6 = L_5->get_shotPower_6();
		NullCheck(L_5);
		L_5->set_shotPower_6(((int32_t)((int32_t)L_6+(int32_t)1)));
		__this->set_U24PC_3((-1));
	}

IL_005f:
	{
		return (bool)0;
	}

IL_0061:
	{
		return (bool)1;
	}
}
// System.Object Shooter/<RecoverPower>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  Il2CppObject * U3CRecoverPowerU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1727596778 (U3CRecoverPowerU3Ec__Iterator0_t3973857827 * __this, const MethodInfo* method)
{
	{
		Il2CppObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Object Shooter/<RecoverPower>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C"  Il2CppObject * U3CRecoverPowerU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m1480287474 (U3CRecoverPowerU3Ec__Iterator0_t3973857827 * __this, const MethodInfo* method)
{
	{
		Il2CppObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Void Shooter/<RecoverPower>c__Iterator0::Dispose()
extern "C"  void U3CRecoverPowerU3Ec__Iterator0_Dispose_m2304522129 (U3CRecoverPowerU3Ec__Iterator0_t3973857827 * __this, const MethodInfo* method)
{
	{
		__this->set_U24disposing_2((bool)1);
		__this->set_U24PC_3((-1));
		return;
	}
}
// System.Void Shooter/<RecoverPower>c__Iterator0::Reset()
extern "C"  void U3CRecoverPowerU3Ec__Iterator0_Reset_m2878993943 (U3CRecoverPowerU3Ec__Iterator0_t3973857827 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CRecoverPowerU3Ec__Iterator0_Reset_m2878993943_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1793819818 * L_0 = (NotSupportedException_t1793819818 *)il2cpp_codegen_object_new(NotSupportedException_t1793819818_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m3232764727(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
