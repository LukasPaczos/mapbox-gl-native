// This file is generated. Edit android/platform/scripts/generate-style-code.js, then run `make android-style-code`.

#pragma once

#include <mbgl/util/noncopyable.hpp>

#include <jni/jni.hpp>
#include <mbgl/style/light.hpp>
#include "transition_options.hpp"
#include <mbgl/style/types.hpp>
#include <mbgl/style/property_value.hpp>

namespace mbgl {
namespace android {

using namespace style;

class Light : private mbgl::util::noncopyable {
public:

    static constexpr auto Name() { return "com/mapbox/mapboxsdk/style/Light"; };

    static jni::Class<Light> javaClass;

    static void registerNative(jni::JNIEnv&);

    /*
     * Called when a Java object is created on the c++ side
     */
    Light(mbgl::Map&, mbgl::style::Light&);

    void setAnchor(jni::JNIEnv&, jni::String);
    void setPosition(jni::JNIEnv&, jni::jfloat,jni::jfloat, jni::jfloat);
    void setPositionTransition(jni::JNIEnv&, jlong duration, jlong delay);
    jni::Object<TransitionOptions> getPositionTransition(jni::JNIEnv&);
    void setColor(jni::JNIEnv&, jni::String);
    void setColorTransition(jni::JNIEnv&, jlong duration, jlong delay);
    jni::Object<TransitionOptions> getColorTransition(jni::JNIEnv&);
    void setIntensity(jni::JNIEnv&, jni::jfloat);
    void setIntensityTransition(jni::JNIEnv&, jlong duration, jlong delay);
    jni::Object<TransitionOptions> getIntensityTransition(jni::JNIEnv&);
    jni::jobject* createJavaPeer(jni::JNIEnv&);

protected:

    // Raw reference to the light
    mbgl::style::Light& light;

    // Map is set when the light is retrieved
    mbgl::Map* map;
};
} // namespace android
} // namespace mbgl