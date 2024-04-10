#include "tensor.hpp"
#include <stdexcept>

namespace tensor1d {

Tensor Tensor::operator+(const Tensor& other) const {
    if (this->data_.size() != other.data_.size()) {
        throw std::invalid_argument("Tensors must be of the same size");
    }

    std::vector<float> resultData(this->data_.size());
    for (size_t i = 0; i < this->data_.size(); ++i) {
        resultData[i] = this->data_[i] + other.data_[i];
    }

    return Tensor(resultData);
}

Tensor Tensor::operator*(const Tensor& other) const {
    if (this->data_.size() != other.data_.size()) {
        throw std::invalid_argument("Tensors must be of the same size");
    }

    std::vector<float> resultData(this->data_.size());
    for (size_t i = 0; i < this->data_.size(); ++i) {
        resultData[i] = this->data_[i] * other.data_[i];
    }

    return Tensor(resultData);
}

} // end namespace tensor1d
