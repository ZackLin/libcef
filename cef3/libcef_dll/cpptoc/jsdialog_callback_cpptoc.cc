// Copyright (c) 2012 The Chromium Embedded Framework Authors. All rights
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

#include "libcef_dll/cpptoc/jsdialog_callback_cpptoc.h"


// MEMBER FUNCTIONS - Body may be edited by hand.

void CEF_CALLBACK jsdialog_callback_cont(struct _cef_jsdialog_callback_t* self,
    int success, const cef_string_t* user_input) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Unverified params: user_input

  // Execute
  CefJSDialogCallbackCppToC::Get(self)->Continue(
      success?true:false,
      CefString(user_input));
}


// CONSTRUCTOR - Do not edit by hand.

CefJSDialogCallbackCppToC::CefJSDialogCallbackCppToC(CefJSDialogCallback* cls)
    : CefCppToC<CefJSDialogCallbackCppToC, CefJSDialogCallback,
        cef_jsdialog_callback_t>(cls) {
  struct_.struct_.cont = jsdialog_callback_cont;
}

#ifndef NDEBUG
template<> long CefCppToC<CefJSDialogCallbackCppToC, CefJSDialogCallback,
    cef_jsdialog_callback_t>::DebugObjCt = 0;
#endif

