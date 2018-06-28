/* Copyright 2018 The TensorFlow Authors. All Rights Reserved.

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
#ifndef TENSORFLOW_CONTRIB_LITE_KERNELS_EIGEN_SUPPORT_H_
#define TENSORFLOW_CONTRIB_LITE_KERNELS_EIGEN_SUPPORT_H_

#include "context.h"

namespace tflite {
namespace eigen_support {

// Let the framework know that the op will be using Eigen. If necessary a set of
// temporary Eigen objects might be created and placed in 'context'.
void IncrementUsageCounter(TfLiteContext* context);

// Let the framework know that the op stopped using Eigen. If there are no more
// usages all temporary Eigen objects will be deleted.
void DecrementUsageCounter(TfLiteContext* context);

// Set the number of threads that can be used by Eigen.
void SetNumThreads(TfLiteContext* context, int num_threads);

}  // namespace eigen_support
}  // namespace tflite

#endif  // TENSORFLOW_CONTRIB_LITE_KERNELS_EIGEN_SUPPORT_H_
