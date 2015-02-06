// -*- C++ -*-
//
// $Id$
#ifndef NULLTOPICLISTENER_H
#define NULLTOPICLISTENER_H

#include "model_export.h"
#include "dds/DdsDcpsTopicC.h"
#include "dds/DCPS/Definitions.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
#pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

namespace OpenDDS { namespace Model {

  class OpenDDS_Model_Export NullTopicListener
    : public virtual OpenDDS::DCPS::LocalObject<DDS::TopicListener>
  {
  public:
    NullTopicListener();

    virtual ~NullTopicListener();

    virtual void on_inconsistent_topic (
      DDS::Topic_ptr topic,
      const DDS::InconsistentTopicStatus& status
    );

  };

} } // End of namespace OpenDDS::Model

#endif /* NULLTOPICLISTENER_H  */

