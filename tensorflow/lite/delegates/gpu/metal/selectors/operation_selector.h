/* Copyright 2020 The TensorFlow Authors. All Rights Reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/

#ifndef TENSORFLOW_LITE_DELEGATES_GPU_METAL_SELECTORS_OPERATION_SELECTOR_H_
#define TENSORFLOW_LITE_DELEGATES_GPU_METAL_SELECTORS_OPERATION_SELECTOR_H_

#include <memory>

#include "tensorflow/lite/delegates/gpu/common/model.h"
#include "tensorflow/lite/delegates/gpu/common/status.h"
#include "tensorflow/lite/delegates/gpu/metal/selectors/subgraph.h"

namespace tflite {
namespace gpu {
namespace metal {

absl::Status GPUOperationFromNode(const GpuInfo& gpu_info,
                                  const OperationDef& op_def,
                                  const std::vector<Value*>& inputs,
                                  const std::vector<Value*>& outputs,
                                  const Node& node,
                                  GPUOperationsSubgraph* gpu_subgraph);
}  // namespace metal
}  // namespace gpu
}  // namespace tflite

#endif  // TENSORFLOW_LITE_DELEGATES_GPU_METAL_SELECTORS_OPERATION_SELECTOR_H_
