// For conditions of distribution and use, see copyright notice in LICENSE
// This file has been autogenerated with BindingsGenerator

#include "StableHeaders.h"
#include "CoreTypes.h"
#include "JavaScriptInstance.h"
#include "LoggingFunctions.h"
#include "GraphicsWorld.h"

#ifdef _MSC_VER
#pragma warning(disable: 4800)
#endif

#include "Camera.h"
#include "Entity.h"


using namespace Tundra;
using namespace std;

namespace JSBindings
{

static const char* float3_ID = "float3";
static const char* float3x4_ID = "float3x4";


static const char* GraphicsWorld_ID = "GraphicsWorld";

const char* SignalWrapper_GraphicsWorld_EntityEnterView_ID = "SignalWrapper_GraphicsWorld_EntityEnterView";

class SignalWrapper_GraphicsWorld_EntityEnterView
{
public:
    SignalWrapper_GraphicsWorld_EntityEnterView(Object* owner, Signal1< Entity * >* signal) :
        owner_(owner),
        signal_(signal)
    {
    }

    WeakPtr<Object> owner_;
    Signal1< Entity * >* signal_;
};

class SignalReceiver_GraphicsWorld_EntityEnterView : public SignalReceiver
{
public:
    void OnSignal(Entity * param0)
    {
        duk_context* ctx = ctx_;
        duk_push_global_object(ctx);
        duk_get_prop_string(ctx, -1, "_OnSignal");
        duk_remove(ctx, -2);
        duk_push_number(ctx, (size_t)key_);
        duk_push_array(ctx);
        PushWeakObject(ctx, param0);
        duk_put_prop_index(ctx, -2, 0);
        bool success = duk_pcall(ctx, 2) == 0;
        if (!success) LogError("[JavaScript] OnSignal: " + String(duk_safe_to_string(ctx, -1)));
        duk_pop(ctx);
    }
};

static duk_ret_t SignalWrapper_GraphicsWorld_EntityEnterView_Finalizer(duk_context* ctx)
{
    FinalizeValueObject<SignalWrapper_GraphicsWorld_EntityEnterView>(ctx, SignalWrapper_GraphicsWorld_EntityEnterView_ID);
    return 0;
}

static duk_ret_t SignalWrapper_GraphicsWorld_EntityEnterView_Connect(duk_context* ctx)
{
    SignalWrapper_GraphicsWorld_EntityEnterView* wrapper = GetThisValueObject<SignalWrapper_GraphicsWorld_EntityEnterView>(ctx, SignalWrapper_GraphicsWorld_EntityEnterView_ID);
    if (!wrapper->owner_) return 0;
    HashMap<void*, SharedPtr<SignalReceiver> >& signalReceivers = JavaScriptInstance::InstanceFromContext(ctx)->SignalReceivers();
    if (signalReceivers.Find(wrapper->signal_) == signalReceivers.End())
    {
        SignalReceiver_GraphicsWorld_EntityEnterView* receiver = new SignalReceiver_GraphicsWorld_EntityEnterView();
        receiver->ctx_ = ctx;
        receiver->key_ = wrapper->signal_;
        wrapper->signal_->Connect(receiver, &SignalReceiver_GraphicsWorld_EntityEnterView::OnSignal);
        signalReceivers[wrapper->signal_] = receiver;
    }
    int numArgs = duk_get_top(ctx);
    duk_push_number(ctx, (size_t)wrapper->signal_);
    duk_insert(ctx, 0);
    duk_push_global_object(ctx);
    duk_get_prop_string(ctx, -1, "_ConnectSignal");
    duk_remove(ctx, -2);
    duk_insert(ctx, 0);
    duk_pcall(ctx, numArgs + 1);
    duk_pop(ctx);
    return 0;
}

static duk_ret_t SignalWrapper_GraphicsWorld_EntityEnterView_Disconnect(duk_context* ctx)
{
    SignalWrapper_GraphicsWorld_EntityEnterView* wrapper = GetThisValueObject<SignalWrapper_GraphicsWorld_EntityEnterView>(ctx, SignalWrapper_GraphicsWorld_EntityEnterView_ID);
    if (!wrapper->owner_) return 0;
    int numArgs = duk_get_top(ctx);
    duk_push_number(ctx, (size_t)wrapper->signal_);
    duk_insert(ctx, 0);
    duk_push_global_object(ctx);
    duk_get_prop_string(ctx, -1, "_DisconnectSignal");
    duk_remove(ctx, -2);
    duk_insert(ctx, 0);
    duk_pcall(ctx, numArgs + 1);
    if (duk_get_boolean(ctx, -1))
    {
        HashMap<void*, SharedPtr<SignalReceiver> >& signalReceivers = JavaScriptInstance::InstanceFromContext(ctx)->SignalReceivers();
        signalReceivers.Erase(wrapper->signal_);
    }
    duk_pop(ctx);
    return 0;
}

static duk_ret_t SignalWrapper_GraphicsWorld_EntityEnterView_Emit(duk_context* ctx)
{
    SignalWrapper_GraphicsWorld_EntityEnterView* wrapper = GetThisValueObject<SignalWrapper_GraphicsWorld_EntityEnterView>(ctx, SignalWrapper_GraphicsWorld_EntityEnterView_ID);
    if (!wrapper->owner_) return 0;
    Entity* param0 = GetWeakObject<Entity>(ctx, 0);
    wrapper->signal_->Emit(param0);
    return 0;
}

static duk_ret_t GraphicsWorld_Get_EntityEnterView(duk_context* ctx)
{
    GraphicsWorld* thisObj = GetThisWeakObject<GraphicsWorld>(ctx);
    SignalWrapper_GraphicsWorld_EntityEnterView* wrapper = new SignalWrapper_GraphicsWorld_EntityEnterView(thisObj, &thisObj->EntityEnterView);
    PushValueObject(ctx, wrapper, SignalWrapper_GraphicsWorld_EntityEnterView_ID, SignalWrapper_GraphicsWorld_EntityEnterView_Finalizer, false);
    duk_push_c_function(ctx, SignalWrapper_GraphicsWorld_EntityEnterView_Connect, DUK_VARARGS);
    duk_put_prop_string(ctx, -2, "Connect");
    duk_push_c_function(ctx, SignalWrapper_GraphicsWorld_EntityEnterView_Disconnect, DUK_VARARGS);
    duk_put_prop_string(ctx, -2, "Disconnect");
    duk_push_c_function(ctx, SignalWrapper_GraphicsWorld_EntityEnterView_Emit, 1);
    duk_put_prop_string(ctx, -2, "Emit");
    return 1;
}

const char* SignalWrapper_GraphicsWorld_EntityLeaveView_ID = "SignalWrapper_GraphicsWorld_EntityLeaveView";

class SignalWrapper_GraphicsWorld_EntityLeaveView
{
public:
    SignalWrapper_GraphicsWorld_EntityLeaveView(Object* owner, Signal1< Entity * >* signal) :
        owner_(owner),
        signal_(signal)
    {
    }

    WeakPtr<Object> owner_;
    Signal1< Entity * >* signal_;
};

class SignalReceiver_GraphicsWorld_EntityLeaveView : public SignalReceiver
{
public:
    void OnSignal(Entity * param0)
    {
        duk_context* ctx = ctx_;
        duk_push_global_object(ctx);
        duk_get_prop_string(ctx, -1, "_OnSignal");
        duk_remove(ctx, -2);
        duk_push_number(ctx, (size_t)key_);
        duk_push_array(ctx);
        PushWeakObject(ctx, param0);
        duk_put_prop_index(ctx, -2, 0);
        bool success = duk_pcall(ctx, 2) == 0;
        if (!success) LogError("[JavaScript] OnSignal: " + String(duk_safe_to_string(ctx, -1)));
        duk_pop(ctx);
    }
};

static duk_ret_t SignalWrapper_GraphicsWorld_EntityLeaveView_Finalizer(duk_context* ctx)
{
    FinalizeValueObject<SignalWrapper_GraphicsWorld_EntityLeaveView>(ctx, SignalWrapper_GraphicsWorld_EntityLeaveView_ID);
    return 0;
}

static duk_ret_t SignalWrapper_GraphicsWorld_EntityLeaveView_Connect(duk_context* ctx)
{
    SignalWrapper_GraphicsWorld_EntityLeaveView* wrapper = GetThisValueObject<SignalWrapper_GraphicsWorld_EntityLeaveView>(ctx, SignalWrapper_GraphicsWorld_EntityLeaveView_ID);
    if (!wrapper->owner_) return 0;
    HashMap<void*, SharedPtr<SignalReceiver> >& signalReceivers = JavaScriptInstance::InstanceFromContext(ctx)->SignalReceivers();
    if (signalReceivers.Find(wrapper->signal_) == signalReceivers.End())
    {
        SignalReceiver_GraphicsWorld_EntityLeaveView* receiver = new SignalReceiver_GraphicsWorld_EntityLeaveView();
        receiver->ctx_ = ctx;
        receiver->key_ = wrapper->signal_;
        wrapper->signal_->Connect(receiver, &SignalReceiver_GraphicsWorld_EntityLeaveView::OnSignal);
        signalReceivers[wrapper->signal_] = receiver;
    }
    int numArgs = duk_get_top(ctx);
    duk_push_number(ctx, (size_t)wrapper->signal_);
    duk_insert(ctx, 0);
    duk_push_global_object(ctx);
    duk_get_prop_string(ctx, -1, "_ConnectSignal");
    duk_remove(ctx, -2);
    duk_insert(ctx, 0);
    duk_pcall(ctx, numArgs + 1);
    duk_pop(ctx);
    return 0;
}

static duk_ret_t SignalWrapper_GraphicsWorld_EntityLeaveView_Disconnect(duk_context* ctx)
{
    SignalWrapper_GraphicsWorld_EntityLeaveView* wrapper = GetThisValueObject<SignalWrapper_GraphicsWorld_EntityLeaveView>(ctx, SignalWrapper_GraphicsWorld_EntityLeaveView_ID);
    if (!wrapper->owner_) return 0;
    int numArgs = duk_get_top(ctx);
    duk_push_number(ctx, (size_t)wrapper->signal_);
    duk_insert(ctx, 0);
    duk_push_global_object(ctx);
    duk_get_prop_string(ctx, -1, "_DisconnectSignal");
    duk_remove(ctx, -2);
    duk_insert(ctx, 0);
    duk_pcall(ctx, numArgs + 1);
    if (duk_get_boolean(ctx, -1))
    {
        HashMap<void*, SharedPtr<SignalReceiver> >& signalReceivers = JavaScriptInstance::InstanceFromContext(ctx)->SignalReceivers();
        signalReceivers.Erase(wrapper->signal_);
    }
    duk_pop(ctx);
    return 0;
}

static duk_ret_t SignalWrapper_GraphicsWorld_EntityLeaveView_Emit(duk_context* ctx)
{
    SignalWrapper_GraphicsWorld_EntityLeaveView* wrapper = GetThisValueObject<SignalWrapper_GraphicsWorld_EntityLeaveView>(ctx, SignalWrapper_GraphicsWorld_EntityLeaveView_ID);
    if (!wrapper->owner_) return 0;
    Entity* param0 = GetWeakObject<Entity>(ctx, 0);
    wrapper->signal_->Emit(param0);
    return 0;
}

static duk_ret_t GraphicsWorld_Get_EntityLeaveView(duk_context* ctx)
{
    GraphicsWorld* thisObj = GetThisWeakObject<GraphicsWorld>(ctx);
    SignalWrapper_GraphicsWorld_EntityLeaveView* wrapper = new SignalWrapper_GraphicsWorld_EntityLeaveView(thisObj, &thisObj->EntityLeaveView);
    PushValueObject(ctx, wrapper, SignalWrapper_GraphicsWorld_EntityLeaveView_ID, SignalWrapper_GraphicsWorld_EntityLeaveView_Finalizer, false);
    duk_push_c_function(ctx, SignalWrapper_GraphicsWorld_EntityLeaveView_Connect, DUK_VARARGS);
    duk_put_prop_string(ctx, -2, "Connect");
    duk_push_c_function(ctx, SignalWrapper_GraphicsWorld_EntityLeaveView_Disconnect, DUK_VARARGS);
    duk_put_prop_string(ctx, -2, "Disconnect");
    duk_push_c_function(ctx, SignalWrapper_GraphicsWorld_EntityLeaveView_Emit, 1);
    duk_put_prop_string(ctx, -2, "Emit");
    return 1;
}

static duk_ret_t GraphicsWorld_SetDefaultSceneFog(duk_context* ctx)
{
    GraphicsWorld* thisObj = GetThisWeakObject<GraphicsWorld>(ctx);
    thisObj->SetDefaultSceneFog();
    return 0;
}

static duk_ret_t GraphicsWorld_IsEntityVisible_Entity(duk_context* ctx)
{
    GraphicsWorld* thisObj = GetThisWeakObject<GraphicsWorld>(ctx);
    Entity* entity = GetWeakObject<Entity>(ctx, 0);
    bool ret = thisObj->IsEntityVisible(entity);
    duk_push_boolean(ctx, ret);
    return 1;
}

static duk_ret_t GraphicsWorld_VisibleEntities(duk_context* ctx)
{
    GraphicsWorld* thisObj = GetThisWeakObject<GraphicsWorld>(ctx);
    EntityVector ret = thisObj->VisibleEntities();
    PushWeakObjectVector(ctx, ret);
    return 1;
}

static duk_ret_t GraphicsWorld_IsActive(duk_context* ctx)
{
    GraphicsWorld* thisObj = GetThisWeakObject<GraphicsWorld>(ctx);
    bool ret = thisObj->IsActive();
    duk_push_boolean(ctx, ret);
    return 1;
}

static duk_ret_t GraphicsWorld_DebugDrawLine_float3_float3_float_float_float_bool(duk_context* ctx)
{
    int numArgs = duk_get_top(ctx);
    GraphicsWorld* thisObj = GetThisWeakObject<GraphicsWorld>(ctx);
    float3& start = *GetCheckedValueObject<float3>(ctx, 0, float3_ID);
    float3& end = *GetCheckedValueObject<float3>(ctx, 1, float3_ID);
    float r = (float)duk_require_number(ctx, 2);
    float g = (float)duk_require_number(ctx, 3);
    float b = (float)duk_require_number(ctx, 4);
    bool depthTest = numArgs > 5 ? duk_require_boolean(ctx, 5) : true;
    thisObj->DebugDrawLine(start, end, r, g, b, depthTest);
    return 0;
}

static duk_ret_t GraphicsWorld_DebugDrawFloat3x4_float3x4_float_float_float_float_float_bool(duk_context* ctx)
{
    int numArgs = duk_get_top(ctx);
    GraphicsWorld* thisObj = GetThisWeakObject<GraphicsWorld>(ctx);
    float3x4& t = *GetCheckedValueObject<float3x4>(ctx, 0, float3x4_ID);
    float axisLength = (float)duk_require_number(ctx, 1);
    float boxSize = (float)duk_require_number(ctx, 2);
    float r = (float)duk_require_number(ctx, 3);
    float g = (float)duk_require_number(ctx, 4);
    float b = (float)duk_require_number(ctx, 5);
    bool depthTest = numArgs > 6 ? duk_require_boolean(ctx, 6) : true;
    thisObj->DebugDrawFloat3x4(t, axisLength, boxSize, r, g, b, depthTest);
    return 0;
}

static duk_ret_t GraphicsWorld_DebugDrawAxes_float3x4_bool(duk_context* ctx)
{
    int numArgs = duk_get_top(ctx);
    GraphicsWorld* thisObj = GetThisWeakObject<GraphicsWorld>(ctx);
    float3x4& t = *GetCheckedValueObject<float3x4>(ctx, 0, float3x4_ID);
    bool depthTest = numArgs > 1 ? duk_require_boolean(ctx, 1) : true;
    thisObj->DebugDrawAxes(t, depthTest);
    return 0;
}

static duk_ret_t GraphicsWorld_DebugDrawLight_float3x4_int_float_float_float_float_float_bool(duk_context* ctx)
{
    int numArgs = duk_get_top(ctx);
    GraphicsWorld* thisObj = GetThisWeakObject<GraphicsWorld>(ctx);
    float3x4& t = *GetCheckedValueObject<float3x4>(ctx, 0, float3x4_ID);
    int lightType = (int)duk_require_number(ctx, 1);
    float range = (float)duk_require_number(ctx, 2);
    float spotAngle = (float)duk_require_number(ctx, 3);
    float r = (float)duk_require_number(ctx, 4);
    float g = (float)duk_require_number(ctx, 5);
    float b = (float)duk_require_number(ctx, 6);
    bool depthTest = numArgs > 7 ? duk_require_boolean(ctx, 7) : true;
    thisObj->DebugDrawLight(t, lightType, range, spotAngle, r, g, b, depthTest);
    return 0;
}

static duk_ret_t GraphicsWorld_DebugDrawCamera_float3x4_float_float_float_float_bool(duk_context* ctx)
{
    int numArgs = duk_get_top(ctx);
    GraphicsWorld* thisObj = GetThisWeakObject<GraphicsWorld>(ctx);
    float3x4& t = *GetCheckedValueObject<float3x4>(ctx, 0, float3x4_ID);
    float size = (float)duk_require_number(ctx, 1);
    float r = (float)duk_require_number(ctx, 2);
    float g = (float)duk_require_number(ctx, 3);
    float b = (float)duk_require_number(ctx, 4);
    bool depthTest = numArgs > 5 ? duk_require_boolean(ctx, 5) : true;
    thisObj->DebugDrawCamera(t, size, r, g, b, depthTest);
    return 0;
}

static duk_ret_t GraphicsWorld_DebugDrawSoundSource_float3_float_float_float_float_float_bool(duk_context* ctx)
{
    int numArgs = duk_get_top(ctx);
    GraphicsWorld* thisObj = GetThisWeakObject<GraphicsWorld>(ctx);
    float3& soundPos = *GetCheckedValueObject<float3>(ctx, 0, float3_ID);
    float soundInnerRadius = (float)duk_require_number(ctx, 1);
    float soundOuterRadius = (float)duk_require_number(ctx, 2);
    float r = (float)duk_require_number(ctx, 3);
    float g = (float)duk_require_number(ctx, 4);
    float b = (float)duk_require_number(ctx, 5);
    bool depthTest = numArgs > 6 ? duk_require_boolean(ctx, 6) : true;
    thisObj->DebugDrawSoundSource(soundPos, soundInnerRadius, soundOuterRadius, r, g, b, depthTest);
    return 0;
}

static duk_ret_t GraphicsWorld_DebugDrawSphere_float3_float_int_float_float_float_bool(duk_context* ctx)
{
    int numArgs = duk_get_top(ctx);
    GraphicsWorld* thisObj = GetThisWeakObject<GraphicsWorld>(ctx);
    float3& center = *GetCheckedValueObject<float3>(ctx, 0, float3_ID);
    float radius = (float)duk_require_number(ctx, 1);
    int vertices = (int)duk_require_number(ctx, 2);
    float r = (float)duk_require_number(ctx, 3);
    float g = (float)duk_require_number(ctx, 4);
    float b = (float)duk_require_number(ctx, 5);
    bool depthTest = numArgs > 6 ? duk_require_boolean(ctx, 6) : true;
    thisObj->DebugDrawSphere(center, radius, vertices, r, g, b, depthTest);
    return 0;
}

static duk_ret_t GraphicsWorld_StartViewTracking_Entity(duk_context* ctx)
{
    GraphicsWorld* thisObj = GetThisWeakObject<GraphicsWorld>(ctx);
    Entity* entity = GetWeakObject<Entity>(ctx, 0);
    thisObj->StartViewTracking(entity);
    return 0;
}

static duk_ret_t GraphicsWorld_StopViewTracking_Entity(duk_context* ctx)
{
    GraphicsWorld* thisObj = GetThisWeakObject<GraphicsWorld>(ctx);
    Entity* entity = GetWeakObject<Entity>(ctx, 0);
    thisObj->StopViewTracking(entity);
    return 0;
}

static const duk_function_list_entry GraphicsWorld_Functions[] = {
    {"SetDefaultSceneFog", GraphicsWorld_SetDefaultSceneFog, 0}
    ,{"IsEntityVisible", GraphicsWorld_IsEntityVisible_Entity, 1}
    ,{"VisibleEntities", GraphicsWorld_VisibleEntities, 0}
    ,{"IsActive", GraphicsWorld_IsActive, 0}
    ,{"DebugDrawLine", GraphicsWorld_DebugDrawLine_float3_float3_float_float_float_bool, DUK_VARARGS}
    ,{"DebugDrawFloat3x4", GraphicsWorld_DebugDrawFloat3x4_float3x4_float_float_float_float_float_bool, DUK_VARARGS}
    ,{"DebugDrawAxes", GraphicsWorld_DebugDrawAxes_float3x4_bool, DUK_VARARGS}
    ,{"DebugDrawLight", GraphicsWorld_DebugDrawLight_float3x4_int_float_float_float_float_float_bool, DUK_VARARGS}
    ,{"DebugDrawCamera", GraphicsWorld_DebugDrawCamera_float3x4_float_float_float_float_bool, DUK_VARARGS}
    ,{"DebugDrawSoundSource", GraphicsWorld_DebugDrawSoundSource_float3_float_float_float_float_float_bool, DUK_VARARGS}
    ,{"DebugDrawSphere", GraphicsWorld_DebugDrawSphere_float3_float_int_float_float_float_bool, DUK_VARARGS}
    ,{"StartViewTracking", GraphicsWorld_StartViewTracking_Entity, 1}
    ,{"StopViewTracking", GraphicsWorld_StopViewTracking_Entity, 1}
    ,{nullptr, nullptr, 0}
};

void Expose_GraphicsWorld(duk_context* ctx)
{
    duk_push_object(ctx);
    duk_push_object(ctx);
    duk_put_function_list(ctx, -1, GraphicsWorld_Functions);
    DefineProperty(ctx, "entityEnterView", GraphicsWorld_Get_EntityEnterView, nullptr);
    DefineProperty(ctx, "entityLeaveView", GraphicsWorld_Get_EntityLeaveView, nullptr);
    duk_put_prop_string(ctx, -2, "prototype");
    duk_put_global_string(ctx, GraphicsWorld_ID);
}

}
