/**
 * Copyright 2022 Huawei Technologies Co., Ltd
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef _AICPU_GRAD_SAMPLER_BK_KERNELS_H_
#define _AICPU_GRAD_SAMPLER_BK_KERNELS_H_

#include "cpu_kernel.h"
#include "cpu_types.h"
#include "cpu_tensor.h"
#include "cpu_tensor_shape.h"

namespace aicpu {
class GridSamplerGradKernel : public CpuKernel {
 public:
  ~GridSamplerGradKernel() = default;
  uint32_t Compute(CpuKernelContext &ctx) override;
  uint32_t GridSamplerGradCompute(const CpuKernelContext &ctx);
  uint32_t GridSamplerGradComputeWithBlock(const CpuKernelContext &ctx,
                               uint32_t blockid, uint32_t blockdim);
};
}  // namespace aicpu
#endif
