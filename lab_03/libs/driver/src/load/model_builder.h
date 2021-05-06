#pragma once

#include <objects/model.h>
#include <load/base_builder.h>

class ModelBuilder : public BaseBuilder
{
public:
    ModelBuilder() = default;
    ~ModelBuilder() = default;

    [[nodiscard]] bool is_build() const override;
    void build() override;
    void build_point(const double &x, const double &y, const double &z) override;
    void build_link(const std::size_t &pt1, const std::size_t &pt2) override;

    std::shared_ptr<Model> get() override;

private:
    std::shared_ptr<Model> model_ptr;
};