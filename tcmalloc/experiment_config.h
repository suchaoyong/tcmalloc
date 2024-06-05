// Copyright 2019 The TCMalloc Authors
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef TCMALLOC_EXPERIMENT_CONFIG_H_
#define TCMALLOC_EXPERIMENT_CONFIG_H_

#include "absl/strings/string_view.h"

// Autogenerated by experiments_proto_test --experiments_generate_config=true
namespace tcmalloc {

enum class Experiment : int {
  // clang-format off
  TEST_ONLY_TCMALLOC_POW2_SIZECLASS,
  TEST_ONLY_TCMALLOC_SHARDED_TRANSFER_CACHE,
  TEST_ONLY_TCMALLOC_FILLER_CHUNKS_PER_ALLOC,  // TODO(b/282993806): Complete experiment.
  TEST_ONLY_TCMALLOC_HUGE_CACHE_RELEASE_30S,  // TODO(b/319872040): Complete experiment.
  TEST_ONLY_TCMALLOC_LOWFRAG_SIZECLASSES,  // TODO(b/224799825): Complete experiment.
  TEST_ONLY_TCMALLOC_FEWER_SIZE_CLASSES,  // TODO(b/294132292): Complete experiment.
  TEST_ONLY_TCMALLOC_BIG_SPAN,  // TODO(b/304135905): Complete experiment.
  TEST_ONLY_L3_AWARE,  // TODO(b/239977380): Complete experiment.
  TEST_ONLY_TCMALLOC_IGNORE_WANT_LEGACY,  // TODO(b/338963740): Complete experiment.
  kMaxExperimentID,
  // clang-format on
};

struct ExperimentConfig {
  Experiment id;
  absl::string_view name;
};

// clang-format off
inline constexpr ExperimentConfig experiments[] = {
    {Experiment::TEST_ONLY_TCMALLOC_POW2_SIZECLASS, "TEST_ONLY_TCMALLOC_POW2_SIZECLASS"},
    {Experiment::TEST_ONLY_TCMALLOC_SHARDED_TRANSFER_CACHE, "TEST_ONLY_TCMALLOC_SHARDED_TRANSFER_CACHE"},
    {Experiment::TEST_ONLY_TCMALLOC_FILLER_CHUNKS_PER_ALLOC, "TEST_ONLY_TCMALLOC_FILLER_CHUNKS_PER_ALLOC"},
    {Experiment::TEST_ONLY_TCMALLOC_HUGE_CACHE_RELEASE_30S, "TEST_ONLY_TCMALLOC_HUGE_CACHE_RELEASE_30S"},
    {Experiment::TEST_ONLY_TCMALLOC_LOWFRAG_SIZECLASSES, "TEST_ONLY_TCMALLOC_LOWFRAG_SIZECLASSES"},
    {Experiment::TEST_ONLY_TCMALLOC_FEWER_SIZE_CLASSES, "TEST_ONLY_TCMALLOC_FEWER_SIZE_CLASSES"},
    {Experiment::TEST_ONLY_TCMALLOC_BIG_SPAN, "TEST_ONLY_TCMALLOC_BIG_SPAN"},
    {Experiment::TEST_ONLY_L3_AWARE, "TEST_ONLY_L3_AWARE"},
    {Experiment::TEST_ONLY_TCMALLOC_IGNORE_WANT_LEGACY, "TEST_ONLY_TCMALLOC_IGNORE_WANT_LEGACY"},
};
// clang-format on

}  // namespace tcmalloc

#endif  // TCMALLOC_EXPERIMENT_CONFIG_H_
