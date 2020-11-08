/* register_types.cpp */

#include "register_types.h"
#include "core/class_db.h"
#include "raw_packer.h"

void register_gdmRawPacker_types() {

	ClassDB::register_class<RawPacker>();
}

void unregister_gdmRawPacker_types() {
   //nothing to do here
}
