/* raw_packer.h */

#ifndef RAW_PACKER_H
#define RAW_PACKER_H

#include "core/error/error_list.h"
#include "core/error/error_macros.h"
#include "core/io/marshalls.h"
#include "core/object/reference.h"
#include "core/string/ustring.h"
#include "core/string/print_string.h"
#include "core/variant/variant.h"

class RawPacker : public Reference {
    GDCLASS(RawPacker,Reference);

	Error encode(const String& fmt, const Array& array, uint8_t *buf, int &len);
	Error decode(const String& fmt, Array& array, const uint8_t *buf, int size);
	
	bool is_digit(char c);
	
protected:

    static void _bind_methods();

public:

	PackedByteArray pack(const String& fmt, const Array& array);
	Array unpack(const String& fmt, const PackedByteArray& array);
    
    RawPacker();
};

#endif
