#pragma once

#include "Api.h"
#include <string>

namespace cn {
namespace javass {
namespace dp {
namespace simplefactory {
namespace example2 {
///
/// <summary> * 接口的具体实现对象A  </summary>
///
class ImplA : public Api {
public:
    virtual void operation(std::string s);
};

}
}
}
}
}