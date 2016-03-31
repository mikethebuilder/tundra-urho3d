// For conditions of distribution and use, see copyright notice in LICENSE
// This file has been autogenerated with BindingsGenerator

#include "StableHeaders.h"
#include "CoreTypes.h"
#include "JavaScriptInstance.h"
#include "LoggingFunctions.h"
#include "SyncManager.h"

#ifdef _MSC_VER
#pragma warning(disable: 4800)
#endif

#include "Entity.h"
#include "UserConnection.h"


using namespace Tundra;
using namespace std;

namespace JSBindings
{



static const char* SyncManager_ID = "SyncManager";

static duk_ret_t SyncManager_SetUpdatePeriod_float(duk_context* ctx)
{
    SyncManager* thisObj = GetThisWeakObject<SyncManager>(ctx);
    float period = (float)duk_require_number(ctx, 0);
    thisObj->SetUpdatePeriod(period);
    return 0;
}

static duk_ret_t SyncManager_GetUpdatePeriod(duk_context* ctx)
{
    SyncManager* thisObj = GetThisWeakObject<SyncManager>(ctx);
    float ret = thisObj->GetUpdatePeriod();
    duk_push_number(ctx, ret);
    return 1;
}

static duk_ret_t SyncManager_SetInterestManagementEnabled_bool(duk_context* ctx)
{
    SyncManager* thisObj = GetThisWeakObject<SyncManager>(ctx);
    bool enabled = duk_require_boolean(ctx, 0);
    thisObj->SetInterestManagementEnabled(enabled);
    return 0;
}

static duk_ret_t SyncManager_IsInterestManagementEnabled(duk_context* ctx)
{
    SyncManager* thisObj = GetThisWeakObject<SyncManager>(ctx);
    bool ret = thisObj->IsInterestManagementEnabled();
    duk_push_boolean(ctx, ret);
    return 1;
}

static duk_ret_t SyncManager_SetObserver_EntityPtr(duk_context* ctx)
{
    SyncManager* thisObj = GetThisWeakObject<SyncManager>(ctx);
    SharedPtr<Entity> entity(GetWeakObject<Entity>(ctx, 0));
    thisObj->SetObserver(entity);
    return 0;
}

static duk_ret_t SyncManager_Observer(duk_context* ctx)
{
    SyncManager* thisObj = GetThisWeakObject<SyncManager>(ctx);
    EntityPtr ret = thisObj->Observer();
    PushWeakObject(ctx, ret.Get());
    return 1;
}

static duk_ret_t SyncManager_SetPriorityUpdatePeriod_float(duk_context* ctx)
{
    SyncManager* thisObj = GetThisWeakObject<SyncManager>(ctx);
    float period = (float)duk_require_number(ctx, 0);
    thisObj->SetPriorityUpdatePeriod(period);
    return 0;
}

static duk_ret_t SyncManager_PriorityUpdatePeriod(duk_context* ctx)
{
    SyncManager* thisObj = GetThisWeakObject<SyncManager>(ctx);
    float ret = thisObj->PriorityUpdatePeriod();
    duk_push_number(ctx, ret);
    return 1;
}

static const duk_function_list_entry SyncManager_Functions[] = {
    {"SetUpdatePeriod", SyncManager_SetUpdatePeriod_float, 1}
    ,{"GetUpdatePeriod", SyncManager_GetUpdatePeriod, 0}
    ,{"SetInterestManagementEnabled", SyncManager_SetInterestManagementEnabled_bool, 1}
    ,{"IsInterestManagementEnabled", SyncManager_IsInterestManagementEnabled, 0}
    ,{"SetObserver", SyncManager_SetObserver_EntityPtr, 1}
    ,{"Observer", SyncManager_Observer, 0}
    ,{"SetPriorityUpdatePeriod", SyncManager_SetPriorityUpdatePeriod_float, 1}
    ,{"PriorityUpdatePeriod", SyncManager_PriorityUpdatePeriod, 0}
    ,{nullptr, nullptr, 0}
};

void Expose_SyncManager(duk_context* ctx)
{
    duk_push_object(ctx);
    duk_push_object(ctx);
    duk_put_function_list(ctx, -1, SyncManager_Functions);
    DefineProperty(ctx, "updatePeriod", SyncManager_GetUpdatePeriod, SyncManager_SetUpdatePeriod_float);
    DefineProperty(ctx, "interestManagementEnabled", SyncManager_IsInterestManagementEnabled, SyncManager_SetInterestManagementEnabled_bool);
    DefineProperty(ctx, "observer", SyncManager_Observer, SyncManager_SetObserver_EntityPtr);
    DefineProperty(ctx, "priorityUpdatePeriod", SyncManager_PriorityUpdatePeriod, SyncManager_SetPriorityUpdatePeriod_float);
    duk_put_prop_string(ctx, -2, "prototype");
    duk_put_global_string(ctx, SyncManager_ID);
}

}
