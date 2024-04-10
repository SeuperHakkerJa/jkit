#pragma once
#include <vector>

namespace tensor1d {

class Tensor {
public:
    Tensor() = default;
    explicit Tensor(const std::vector<float>& data) : data_(data) {}
    Tensor operator+(const Tensor& other) const;
    Tensor operator*(const Tensor& other) const;
    // Other operations for later

private:
    std::vector<float> data_;
};

} // end namespace tensor1d
