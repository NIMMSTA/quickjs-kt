/// Generated header file
#ifndef QJS_KT_JNI_GLOBALS_GENERATED_H
#define QJS_KT_JNI_GLOBALS_GENERATED_H

#include <jni.h>

jclass cls_integer(JNIEnv *env);

jclass cls_long(JNIEnv *env);

jclass cls_float(JNIEnv *env);

jclass cls_double(JNIEnv *env);

jclass cls_boolean(JNIEnv *env);

jclass cls_string(JNIEnv *env);

jclass cls_object(JNIEnv *env);

jclass cls_class(JNIEnv *env);

jclass cls_throwable(JNIEnv *env);

jclass cls_error(JNIEnv *env);

jclass cls_set(JNIEnv *env);

jclass cls_iterator(JNIEnv *env);

jclass cls_list(JNIEnv *env);

jclass cls_map(JNIEnv *env);

jclass cls_map_entry(JNIEnv *env);

jclass cls_linked_hash_map(JNIEnv *env);

jclass cls_linked_hash_set(JNIEnv *env);

jclass cls_quick_js_exception(JNIEnv *env);

jclass cls_quick_js(JNIEnv *env);

jclass cls_memory_usage(JNIEnv *env);

jclass cls_js_property(JNIEnv *env);

jclass cls_js_function(JNIEnv *env);

jclass cls_js_object(JNIEnv *env);

jclass cls_coroutine_suspended(JNIEnv *env);

jmethodID method_integer_value_of(JNIEnv *env);

jmethodID method_integer_int_value(JNIEnv *env);

jmethodID method_long_value_of(JNIEnv *env);

jmethodID method_long_long_value(JNIEnv *env);

jmethodID method_float_float_value(JNIEnv *env);

jmethodID method_double_value_of(JNIEnv *env);

jmethodID method_double_double_value(JNIEnv *env);

jmethodID method_boolean_value_of(JNIEnv *env);

jmethodID method_boolean_boolean_value(JNIEnv *env);

jmethodID method_object_to_string(JNIEnv *env);

jmethodID method_class_get_name(JNIEnv *env);

jmethodID method_throwable_get_message(JNIEnv *env);

jmethodID method_throwable_get_stack_trace(JNIEnv *env);

jmethodID method_error_init(JNIEnv *env);

jmethodID method_set_iterator(JNIEnv *env);

jmethodID method_iterator_has_next(JNIEnv *env);

jmethodID method_iterator_next(JNIEnv *env);

jmethodID method_list_size(JNIEnv *env);

jmethodID method_list_get(JNIEnv *env);

jmethodID method_map_entry_set(JNIEnv *env);

jmethodID method_map_entry_get_key(JNIEnv *env);

jmethodID method_map_entry_get_value(JNIEnv *env);

jmethodID method_linked_hash_map_init(JNIEnv *env);

jmethodID method_linked_hash_map_put(JNIEnv *env);

jmethodID method_linked_hash_set_init(JNIEnv *env);

jmethodID method_linked_hash_set_add(JNIEnv *env);

jmethodID method_quick_js_on_call_getter(JNIEnv *env);

jmethodID method_quick_js_on_call_setter(JNIEnv *env);

jmethodID method_quick_js_on_call_function(JNIEnv *env);

jmethodID method_quick_js_set_java_exception(JNIEnv *env);

jmethodID method_quick_js_create_delay(JNIEnv *env);

jmethodID method_memory_usage_init(JNIEnv *env);

jfieldID field_double_na_n(JNIEnv *env);

jfieldID field_js_property_name(JNIEnv *env);

jfieldID field_js_property_configurable(JNIEnv *env);

jfieldID field_js_property_writable(JNIEnv *env);

jfieldID field_js_property_enumerable(JNIEnv *env);

jfieldID field_js_function_name(JNIEnv *env);

jfieldID field_js_function_is_async(JNIEnv *env);

void clear_jni_refs_cache(JNIEnv *env);

#endif // QJS_KT_JNI_GLOBALS_GENERATED_H
