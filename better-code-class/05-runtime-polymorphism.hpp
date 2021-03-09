//
//  05-runtime-polymorphism.hpp
//  better-code-class
//

#ifndef _5_runtime_polymorphism_hpp
#define _5_runtime_polymorphism_hpp

#include <memory>

namespace bcc {

template <class>
class task;

template <class R, class... Args>
class task<R(Args...)> {
    struct concept_t;
    template <class F>
    struct model_t;

    std::unique_ptr<concept_t> _model;

public:
    template <class F>
    task(F&&); // <-- (1)

    constexpr task() noexcept = default;

    task(task&&) noexcept = default;
    task& operator=(task&&) noexcept = default;

    R operator()(Args...); // <-- (2)
};

} // namespace bcc

#endif /* _5_runtime_polymorphism_hpp */
