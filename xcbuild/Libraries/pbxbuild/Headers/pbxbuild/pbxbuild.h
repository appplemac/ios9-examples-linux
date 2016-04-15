/**
 Copyright (c) 2015-present, Facebook, Inc.
 All rights reserved.

 This source code is licensed under the BSD-style license found in the
 LICENSE file in the root directory of this source tree. An additional grant
 of patent rights can be found in the PATENTS file in the same directory.
 */

#ifndef __pbxbuild_pbxbuild_h
#define __pbxbuild_pbxbuild_h

#include <pbxbuild/HeaderMap.h>

#include <pbxbuild/WorkspaceContext.h>
#include <pbxbuild/FileTypeResolver.h>

#include <pbxbuild/Tool/Invocation.h>
#include <pbxbuild/Tool/ClangResolver.h>
#include <pbxbuild/Tool/CopyResolver.h>
#include <pbxbuild/Tool/HeadermapResolver.h>
#include <pbxbuild/Tool/LinkerResolver.h>
#include <pbxbuild/Tool/ScriptResolver.h>
#include <pbxbuild/Tool/ToolResolver.h>

#include <pbxbuild/Phase/Environment.h>
#include <pbxbuild/Phase/PhaseInvocations.h>
#include <pbxbuild/Phase/CopyFilesResolver.h>
#include <pbxbuild/Phase/HeadersResolver.h>
#include <pbxbuild/Phase/LegacyTargetResolver.h>
#include <pbxbuild/Phase/ResourcesResolver.h>
#include <pbxbuild/Phase/FrameworksResolver.h>
#include <pbxbuild/Phase/SourcesResolver.h>
#include <pbxbuild/Phase/ShellScriptResolver.h>

#include <pbxbuild/Target/BuildRules.h>
#include <pbxbuild/Target/Environment.h>

#include <pbxbuild/Build/DependencyResolver.h>
#include <pbxbuild/Build/Environment.h>
#include <pbxbuild/Build/Context.h>

#endif  // !__pbxbuild_pbxbuild_h
