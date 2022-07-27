/* Copyright 2017 The TensorFlow Authors. All Rights Reserved.

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

#include "tensorflow/core/framework/graph.pb.h"

namespace tensorflow
{
class NodeDef;
}

namespace tfdml
{

// // Utilities for manipulating node name and input strings.

// Returns the data type in attribute `attr_name` of `node`. If that attribute
// doesn't exist, returns DT_INVALID.
tensorflow::DataType GetDataTypeFromAttr(
    const tensorflow::NodeDef& node,
    const std::string& type_attr);

bool IsOnDml(const tensorflow::NodeDef& node_def);
bool IsOnCpu(const tensorflow::NodeDef& node_def);

} // end namespace tfdml