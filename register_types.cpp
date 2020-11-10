/* register_types.cpp */

#include "register_types.h"
#include "core/object/class_db.h"
#include "raw_packer.h"

void register_rawpacker_types() {

	ClassDB::register_class<RawPacker>();
}

void unregister_rawpacker_types() {
   //nothing to do here
}
