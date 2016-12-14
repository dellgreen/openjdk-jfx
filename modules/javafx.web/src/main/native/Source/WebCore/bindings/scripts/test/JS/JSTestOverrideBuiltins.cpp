/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#include "config.h"
#include "JSTestOverrideBuiltins.h"

#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include "JSDOMConstructor.h"
#include "JSNode.h"
#include "Node.h"
#include "wtf/text/AtomicString.h"
#include <runtime/Error.h>
#include <runtime/FunctionPrototype.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

// Functions

JSC::EncodedJSValue JSC_HOST_CALL jsTestOverrideBuiltinsPrototypeFunctionNamedItem(JSC::ExecState*);

// Attributes

JSC::EncodedJSValue jsTestOverrideBuiltinsConstructor(JSC::ExecState*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSTestOverrideBuiltinsConstructor(JSC::ExecState*, JSC::EncodedJSValue, JSC::EncodedJSValue);

class JSTestOverrideBuiltinsPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSTestOverrideBuiltinsPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSTestOverrideBuiltinsPrototype* ptr = new (NotNull, JSC::allocateCell<JSTestOverrideBuiltinsPrototype>(vm.heap)) JSTestOverrideBuiltinsPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSTestOverrideBuiltinsPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};

typedef JSDOMConstructorNotConstructable<JSTestOverrideBuiltins> JSTestOverrideBuiltinsConstructor;

template<> JSValue JSTestOverrideBuiltinsConstructor::prototypeForStructure(JSC::VM& vm, const JSDOMGlobalObject& globalObject)
{
    UNUSED_PARAM(vm);
    return globalObject.functionPrototype();
}

template<> void JSTestOverrideBuiltinsConstructor::initializeProperties(VM& vm, JSDOMGlobalObject& globalObject)
{
    putDirect(vm, vm.propertyNames->prototype, JSTestOverrideBuiltins::getPrototype(vm, &globalObject), DontDelete | ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->name, jsNontrivialString(&vm, String(ASCIILiteral("TestOverrideBuiltins"))), ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontEnum);
}

template<> const ClassInfo JSTestOverrideBuiltinsConstructor::s_info = { "TestOverrideBuiltins", &Base::s_info, 0, CREATE_METHOD_TABLE(JSTestOverrideBuiltinsConstructor) };

/* Hash table for prototype */

static const HashTableValue JSTestOverrideBuiltinsPrototypeTableValues[] =
{
    { "constructor", DontEnum, NoIntrinsic, { (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsTestOverrideBuiltinsConstructor), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSTestOverrideBuiltinsConstructor) } },
    { "namedItem", JSC::Function, NoIntrinsic, { (intptr_t)static_cast<NativeFunction>(jsTestOverrideBuiltinsPrototypeFunctionNamedItem), (intptr_t) (0) } },
};

const ClassInfo JSTestOverrideBuiltinsPrototype::s_info = { "TestOverrideBuiltinsPrototype", &Base::s_info, 0, CREATE_METHOD_TABLE(JSTestOverrideBuiltinsPrototype) };

void JSTestOverrideBuiltinsPrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSTestOverrideBuiltinsPrototypeTableValues, *this);
}

const ClassInfo JSTestOverrideBuiltins::s_info = { "TestOverrideBuiltins", &Base::s_info, 0, CREATE_METHOD_TABLE(JSTestOverrideBuiltins) };

JSTestOverrideBuiltins::JSTestOverrideBuiltins(Structure* structure, JSDOMGlobalObject& globalObject, Ref<TestOverrideBuiltins>&& impl)
    : JSDOMWrapper<TestOverrideBuiltins>(structure, globalObject, WTFMove(impl))
{
}

JSObject* JSTestOverrideBuiltins::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSTestOverrideBuiltinsPrototype::create(vm, globalObject, JSTestOverrideBuiltinsPrototype::createStructure(vm, globalObject, globalObject->objectPrototype()));
}

JSObject* JSTestOverrideBuiltins::getPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSTestOverrideBuiltins>(vm, globalObject);
}

void JSTestOverrideBuiltins::destroy(JSC::JSCell* cell)
{
    JSTestOverrideBuiltins* thisObject = static_cast<JSTestOverrideBuiltins*>(cell);
    thisObject->JSTestOverrideBuiltins::~JSTestOverrideBuiltins();
}

bool JSTestOverrideBuiltins::getOwnPropertySlot(JSObject* object, ExecState* state, PropertyName propertyName, PropertySlot& slot)
{
    auto* thisObject = jsCast<JSTestOverrideBuiltins*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    if (thisObject->classInfo() == info()) {
        JSValue value;
        if (thisObject->nameGetter(state, propertyName, value)) {
            slot.setValue(thisObject, ReadOnly | DontDelete | DontEnum, value);
            return true;
        }
    }
    if (Base::getOwnPropertySlot(thisObject, state, propertyName, slot))
        return true;
    return false;
}

bool JSTestOverrideBuiltins::getOwnPropertySlotByIndex(JSObject* object, ExecState* state, unsigned index, PropertySlot& slot)
{
    auto* thisObject = jsCast<JSTestOverrideBuiltins*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    Identifier propertyName = Identifier::from(state, index);
    if (thisObject->classInfo() == info()) {
        JSValue value;
        if (thisObject->nameGetter(state, propertyName, value)) {
            slot.setValue(thisObject, ReadOnly | DontDelete | DontEnum, value);
            return true;
        }
    }
    return Base::getOwnPropertySlotByIndex(thisObject, state, index, slot);
}

EncodedJSValue jsTestOverrideBuiltinsConstructor(ExecState* state, EncodedJSValue thisValue, PropertyName)
{
    JSTestOverrideBuiltinsPrototype* domObject = jsDynamicCast<JSTestOverrideBuiltinsPrototype*>(JSValue::decode(thisValue));
    if (!domObject)
        return throwVMTypeError(state);
    return JSValue::encode(JSTestOverrideBuiltins::getConstructor(state->vm(), domObject->globalObject()));
}

void setJSTestOverrideBuiltinsConstructor(ExecState* state, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    JSTestOverrideBuiltinsPrototype* domObject = jsDynamicCast<JSTestOverrideBuiltinsPrototype*>(JSValue::decode(thisValue));
    if (UNLIKELY(!domObject)) {
        throwVMTypeError(state);
        return;
    }
    // Shadowing a built-in constructor
    domObject->putDirect(state->vm(), state->propertyNames().constructor, value);
}

void JSTestOverrideBuiltins::getOwnPropertyNames(JSObject* object, ExecState* state, PropertyNameArray& propertyNames, EnumerationMode mode)
{
    auto* thisObject = jsCast<JSTestOverrideBuiltins*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    if (mode.includeDontEnumProperties()) {
        for (auto& propertyName : thisObject->wrapped().supportedPropertyNames())
            propertyNames.add(Identifier::fromString(state, propertyName));
    }
    Base::getOwnPropertyNames(thisObject, state, propertyNames, mode);
}

JSValue JSTestOverrideBuiltins::getConstructor(VM& vm, const JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSTestOverrideBuiltinsConstructor>(vm, *jsCast<const JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsTestOverrideBuiltinsPrototypeFunctionNamedItem(ExecState* state)
{
    JSValue thisValue = state->thisValue();
    auto castedThis = jsDynamicCast<JSTestOverrideBuiltins*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*state, "TestOverrideBuiltins", "namedItem");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSTestOverrideBuiltins::info());
    auto& impl = castedThis->wrapped();
    String name = state->argument(0).toString(state)->value(state);
    if (UNLIKELY(state->hadException()))
        return JSValue::encode(jsUndefined());
    JSValue result = toJS(state, castedThis->globalObject(), WTF::getPtr(impl.namedItem(name)));
    return JSValue::encode(result);
}

bool JSTestOverrideBuiltinsOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    UNUSED_PARAM(handle);
    UNUSED_PARAM(visitor);
    return false;
}

void JSTestOverrideBuiltinsOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    auto* jsTestOverrideBuiltins = jsCast<JSTestOverrideBuiltins*>(handle.slot()->asCell());
    auto& world = *static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, &jsTestOverrideBuiltins->wrapped(), jsTestOverrideBuiltins);
}

#if ENABLE(BINDING_INTEGRITY)
#if PLATFORM(WIN)
#pragma warning(disable: 4483)
extern "C" { extern void (*const __identifier("??_7TestOverrideBuiltins@WebCore@@6B@")[])(); }
#else
extern "C" { extern void* _ZTVN7WebCore20TestOverrideBuiltinsE[]; }
#endif
#endif

JSC::JSValue toJSNewlyCreated(JSC::ExecState*, JSDOMGlobalObject* globalObject, TestOverrideBuiltins* impl)
{
    if (!impl)
        return jsNull();
    return createNewWrapper<JSTestOverrideBuiltins>(globalObject, impl);
}

JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject* globalObject, TestOverrideBuiltins* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSTestOverrideBuiltins>(globalObject, impl))
        return result;

#if ENABLE(BINDING_INTEGRITY)
    void* actualVTablePointer = *(reinterpret_cast<void**>(impl));
#if PLATFORM(WIN)
    void* expectedVTablePointer = reinterpret_cast<void*>(__identifier("??_7TestOverrideBuiltins@WebCore@@6B@"));
#else
    void* expectedVTablePointer = &_ZTVN7WebCore20TestOverrideBuiltinsE[2];
#if COMPILER(CLANG)
    // If this fails TestOverrideBuiltins does not have a vtable, so you need to add the
    // ImplementationLacksVTable attribute to the interface definition
    COMPILE_ASSERT(__is_polymorphic(TestOverrideBuiltins), TestOverrideBuiltins_is_not_polymorphic);
#endif
#endif
    // If you hit this assertion you either have a use after free bug, or
    // TestOverrideBuiltins has subclasses. If TestOverrideBuiltins has subclasses that get passed
    // to toJS() we currently require TestOverrideBuiltins you to opt out of binding hardening
    // by adding the SkipVTableValidation attribute to the interface IDL definition
    RELEASE_ASSERT(actualVTablePointer == expectedVTablePointer);
#endif
    return createNewWrapper<JSTestOverrideBuiltins>(globalObject, impl);
}

TestOverrideBuiltins* JSTestOverrideBuiltins::toWrapped(JSC::JSValue value)
{
    if (auto* wrapper = jsDynamicCast<JSTestOverrideBuiltins*>(value))
        return &wrapper->wrapped();
    return nullptr;
}

}
