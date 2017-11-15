#include <cstdint>
#include <cstdlib>

struct Opaque;

struct Normal {
  int32_t x;
  float y;
};

struct NormalWithZST {
  int32_t x;
  float y;
};

struct TupleRenamed {
  int32_t m0;
  float m1;
};

struct TupleNamed {
  int32_t x;
  float y;
};

extern "C" {

void root(Opaque *a, Normal b, NormalWithZST c, TupleRenamed d, TupleNamed e);

} // extern "C"
