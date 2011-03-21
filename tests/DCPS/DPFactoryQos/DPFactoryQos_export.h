
// -*- C++ -*-
// $Id$
// Definition for Win32 Export directives.
// This file is generated automatically by generate_export_file.pl DPFactoryQos
// ------------------------------
#ifndef DPFACTORYQOS_EXPORT_H
#define DPFACTORYQOS_EXPORT_H

#include "ace/config-all.h"

#if defined (ACE_AS_STATIC_LIBS) && !defined (DPFACTORYQOS_HAS_DLL)
#  define DPFACTORYQOS_HAS_DLL 0
#endif /* ACE_AS_STATIC_LIBS && DPFACTORYQOS_HAS_DLL */

#if !defined (DPFACTORYQOS_HAS_DLL)
#  define DPFACTORYQOS_HAS_DLL 1
#endif /* ! DPFACTORYQOS_HAS_DLL */

#if defined (DPFACTORYQOS_HAS_DLL) && (DPFACTORYQOS_HAS_DLL == 1)
#  if defined (DPFACTORYQOS_BUILD_DLL)
#    define DPFactoryQos_Export ACE_Proper_Export_Flag
#    define DPFACTORYQOS_SINGLETON_DECLARATION(T) ACE_EXPORT_SINGLETON_DECLARATION (T)
#    define DPFACTORYQOS_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK) ACE_EXPORT_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#  else /* DPFACTORYQOS_BUILD_DLL */
#    define DPFactoryQos_Export ACE_Proper_Import_Flag
#    define DPFACTORYQOS_SINGLETON_DECLARATION(T) ACE_IMPORT_SINGLETON_DECLARATION (T)
#    define DPFACTORYQOS_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK) ACE_IMPORT_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#  endif /* DPFACTORYQOS_BUILD_DLL */
#else /* DPFACTORYQOS_HAS_DLL == 1 */
#  define DPFactoryQos_Export
#  define DPFACTORYQOS_SINGLETON_DECLARATION(T)
#  define DPFACTORYQOS_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#endif /* DPFACTORYQOS_HAS_DLL == 1 */

// Set DPFACTORYQOS_NTRACE = 0 to turn on library specific tracing even if
// tracing is turned off for ACE.
#if !defined (DPFACTORYQOS_NTRACE)
#  if (ACE_NTRACE == 1)
#    define DPFACTORYQOS_NTRACE 1
#  else /* (ACE_NTRACE == 1) */
#    define DPFACTORYQOS_NTRACE 0
#  endif /* (ACE_NTRACE == 1) */
#endif /* !DPFACTORYQOS_NTRACE */

#if (DPFACTORYQOS_NTRACE == 1)
#  define DPFACTORYQOS_TRACE(X)
#else /* (DPFACTORYQOS_NTRACE == 1) */
#  if !defined (ACE_HAS_TRACE)
#    define ACE_HAS_TRACE
#  endif /* ACE_HAS_TRACE */
#  define DPFACTORYQOS_TRACE(X) ACE_TRACE_IMPL(X)
#  include "ace/Trace.h"
#endif /* (DPFACTORYQOS_NTRACE == 1) */

#endif /* DPFACTORYQOS_EXPORT_H */

// End of auto generated file.
