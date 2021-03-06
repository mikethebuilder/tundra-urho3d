/**
    For conditions of distribution and use, see copyright notice in LICENSE

    @file   AttributeMetadata.h
    @brief  Attribute metadata contains information about the attribute. */

#pragma once

#include "TundraCoreApi.h"
#include "CoreTypes.h"

#include <Urho3D/Container/Str.h>
#include <Urho3D/Container/List.h>
#include <Urho3D/Container/HashMap.h>

namespace Tundra
{

/// Attribute metadata contains information about the attribute.
/** The metadata includes information such as description (e.g. "color" or "direction",
    possible min and max values and mapping of enumeration signatures and values.

    Usage example (we're assuming that you have attribute "Attribute<float> range" as member variable):
    @code
    ExampleComponent::ExampleComponent(Urho3D::Context* context, Scene* scene):
        IComponent(context, scene),
        range(this, "example attribute", -1.f)
    {
        static AttributeMetadata metadata("this attribute is used as an example", "-128.3", "256.7")
        range.SetMetadata(&metadata);
    }
    @endcode */
class TUNDRACORE_API AttributeMetadata
{
public:
    enum InterpolationMode
    {
        None,
        Interpolate
    };

    /// Contains all information needed to create PushButtons to ECEditor.
    struct ButtonInfo
    {
        /// Default constructor.
        ButtonInfo() {}

        /// Constructor.
        /** @param object_name QPushButton's object name.
            @param button_text QPushButton's text/icon.
            @param method_name IComponent's public slot method name. */
        ButtonInfo(const String &object_name, const String &button_text, const String &method_name):
            objectName(object_name),
            text(button_text),
            method(method_name){}

        bool operator ==(const ButtonInfo &rhs) const 
        {
            return this->objectName == rhs.objectName &&
                   this->text == rhs.text &&
                   this->method == rhs.method;
        }
        bool operator !=(const ButtonInfo &rhs) const { return !(*this == rhs); }
        bool operator <(const ButtonInfo &rhs) const { return objectName < rhs.objectName; }

        String objectName;
        String text;
        String method;
    };

    typedef List<ButtonInfo> ButtonInfoList;
    typedef HashMap<int, String> EnumDescMap_t;

    /// Default constructor.
    AttributeMetadata() : interpolation(None), designable(true) {}

    /// Constructor.
    /** @param desc Description.
        @param min Minimum value.
        @param max Maximum value.
        @param step_ Step value.
        @param enum_desc Mapping of enumeration's signatures (in readable form) and actual values.
        @param interpolation_ Interpolation mode for clients.
        @param designable_ Indicates if Attribute should be shown in designer/editor ui. */
    AttributeMetadata(const String &desc, const String &min = "", const String &max = "", const String &step_ = "", 
        const EnumDescMap_t &enum_desc = EnumDescMap_t(), InterpolationMode interpolation_ = None, bool designable_ = true) :
        description(desc),
        minimum(min),
        maximum(max),
        step(step_),
        enums(enum_desc),
        interpolation(interpolation_),
        designable(designable_)
    {
    }

    /// Destructor.
    ~AttributeMetadata() {}

    /// Description.
    String description;

    /// Minimum value.
    String minimum;

    /// Maximum value.
    String maximum;

    /// Step value.
    String step;

    /// List of all buttons wanted to shown on the editor (works with string attributes).
    ButtonInfoList buttons;

    /// Describes the type for individual elements of this attribute (in case there are multiple, e.g. in the case of VariantList).
    String elementType;

    /// Interpolation mode for clients.
    InterpolationMode interpolation;

    /// Mapping of enumeration's signatures (in readable form) and actual values.
    EnumDescMap_t enums;

    /// Indicates if Attribute should be shown in designer/editor ui.
    bool designable;

private:
    AttributeMetadata(const AttributeMetadata &);
    void operator=(const AttributeMetadata &);
};

}
