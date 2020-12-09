// Copyright (c) 2020 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//
// $hash=32abdd7a7239a2cb511c854c67e7c1c9219c61dd$
//

#include "libcef_dll/cpptoc/app_cpptoc.h"
#include "libcef_dll/cpptoc/browser_process_handler_cpptoc.h"
#include "libcef_dll/cpptoc/power_policy_controller_cpptoc.h"
#include "libcef_dll/cpptoc/render_process_handler_cpptoc.h"
#include "libcef_dll/cpptoc/resource_bundle_handler_cpptoc.h"
#include "libcef_dll/ctocpp/command_line_ctocpp.h"
#include "libcef_dll/ctocpp/scheme_registrar_ctocpp.h"

namespace {

// MEMBER FUNCTIONS - Body may be edited by hand.

void CEF_CALLBACK app_on_before_command_line_processing(
    struct _cef_app_t* self,
    const cef_string_t* process_type,
    struct _cef_command_line_t* command_line) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Verify param: command_line; type: refptr_diff
  DCHECK(command_line);
  if (!command_line)
    return;
  // Unverified params: process_type

  // Execute
  CefAppCppToC::Get(self)->OnBeforeCommandLineProcessing(
      CefString(process_type), CefCommandLineCToCpp::Wrap(command_line));
}

void CEF_CALLBACK
app_on_register_custom_schemes(struct _cef_app_t* self,
                               struct _cef_scheme_registrar_t* registrar) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Verify param: registrar; type: rawptr_diff
  DCHECK(registrar);
  if (!registrar)
    return;

  // Translate param: registrar; type: rawptr_diff
  CefOwnPtr<CefSchemeRegistrar> registrarPtr(
      CefSchemeRegistrarCToCpp::Wrap(registrar));

  // Execute
  CefAppCppToC::Get(self)->OnRegisterCustomSchemes(registrarPtr.get());
}

struct _cef_resource_bundle_handler_t* CEF_CALLBACK
app_get_resource_bundle_handler(struct _cef_app_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;

  // Execute
  CefRefPtr<CefResourceBundleHandler> _retval =
      CefAppCppToC::Get(self)->GetResourceBundleHandler();

  // Return type: refptr_same
  return CefResourceBundleHandlerCppToC::Wrap(_retval);
}

struct _cef_browser_process_handler_t* CEF_CALLBACK
app_get_browser_process_handler(struct _cef_app_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;

  // Execute
  CefRefPtr<CefBrowserProcessHandler> _retval =
      CefAppCppToC::Get(self)->GetBrowserProcessHandler();

  // Return type: refptr_same
  return CefBrowserProcessHandlerCppToC::Wrap(_retval);
}

struct _cef_render_process_handler_t* CEF_CALLBACK
app_get_render_process_handler(struct _cef_app_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;

  // Execute
  CefRefPtr<CefRenderProcessHandler> _retval =
      CefAppCppToC::Get(self)->GetRenderProcessHandler();

  // Return type: refptr_same
  return CefRenderProcessHandlerCppToC::Wrap(_retval);
}

struct _cef_power_policy_controller_t* CEF_CALLBACK
app_get_power_policy_controller(struct _cef_app_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;

  // Execute
  CefRefPtr<CefPowerPolicyController> _retval =
      CefAppCppToC::Get(self)->GetPowerPolicyController();

  // Return type: refptr_same
  return CefPowerPolicyControllerCppToC::Wrap(_retval);
}

}  // namespace

// CONSTRUCTOR - Do not edit by hand.

CefAppCppToC::CefAppCppToC() {
  GetStruct()->on_before_command_line_processing =
      app_on_before_command_line_processing;
  GetStruct()->on_register_custom_schemes = app_on_register_custom_schemes;
  GetStruct()->get_resource_bundle_handler = app_get_resource_bundle_handler;
  GetStruct()->get_browser_process_handler = app_get_browser_process_handler;
  GetStruct()->get_render_process_handler = app_get_render_process_handler;
  GetStruct()->get_power_policy_controller = app_get_power_policy_controller;
}

// DESTRUCTOR - Do not edit by hand.

CefAppCppToC::~CefAppCppToC() {}

template <>
CefRefPtr<CefApp>
CefCppToCRefCounted<CefAppCppToC, CefApp, cef_app_t>::UnwrapDerived(
    CefWrapperType type,
    cef_app_t* s) {
  NOTREACHED() << "Unexpected class type: " << type;
  return nullptr;
}

template <>
CefWrapperType
    CefCppToCRefCounted<CefAppCppToC, CefApp, cef_app_t>::kWrapperType = WT_APP;
