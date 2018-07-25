#ifndef GODOT_CPP_CONFIRMATIONDIALOG_HPP
#define GODOT_CPP_CONFIRMATIONDIALOG_HPP


#include <gdnative_api_struct.gen.h>
#include <stdint.h>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>

#include "AcceptDialog.hpp"
namespace godot {

class Button;

class ConfirmationDialog : public AcceptDialog {
public:

	static void *___get_type_tag();
	static void *___get_base_type_tag();
	static inline const char *___get_class_name() { return (const char *) "ConfirmationDialog"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o); }

	// enums

	// constants


	static ConfirmationDialog *_new();

	// methods
	Button *get_cancel();

};

}

#endif