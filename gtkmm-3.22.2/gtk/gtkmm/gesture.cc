// Generated by gmmproc 2.54.0 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gtkmm/gesture.h>
#include <gtkmm/private/gesture_p.h>


/* Copyright (C) 2014 The gtkmm Development Team
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library. If not, see <http://www.gnu.org/licenses/>.
 */

#include <gtk/gtk.h>

namespace Gtk
{
// Glib::ListHandler is not well suited for this case, where the contents
// of the GList shall not be converted to a C++ type.
std::vector<const GdkEventSequence*> Gesture::get_sequences() const
{
  std::vector<const GdkEventSequence*> sequences;
  auto list = g_list_first(gtk_gesture_get_sequences(const_cast<GtkGesture*>(gobj())));

  for (GList* node = list; node; node = g_list_next(node))
    sequences.emplace_back(static_cast<GdkEventSequence*>(node->data));

  g_list_free(list);

  return sequences;
}

void Gesture::unset_window()
{
  gtk_gesture_set_window(gobj(), nullptr);
}

} //namespace Gtk

namespace
{


static void Gesture_signal_begin_callback(GtkGesture* self, GdkEventSequence* p0,void* data)
{
  using namespace Gtk;
  using SlotType = sigc::slot< void,GdkEventSequence* >;

  auto obj = dynamic_cast<Gesture*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
  // Do not try to call a signal on a disassociated wrapper.
  if(obj)
  {
    try
    {
      if(const auto slot = Glib::SignalProxyNormal::data_to_slot(data))
        (*static_cast<SlotType*>(slot))(p0);
    }
    catch(...)
    {
       Glib::exception_handlers_invoke();
    }
  }
}

static const Glib::SignalProxyInfo Gesture_signal_begin_info =
{
  "begin",
  (GCallback) &Gesture_signal_begin_callback,
  (GCallback) &Gesture_signal_begin_callback
};


static void Gesture_signal_end_callback(GtkGesture* self, GdkEventSequence* p0,void* data)
{
  using namespace Gtk;
  using SlotType = sigc::slot< void,GdkEventSequence* >;

  auto obj = dynamic_cast<Gesture*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
  // Do not try to call a signal on a disassociated wrapper.
  if(obj)
  {
    try
    {
      if(const auto slot = Glib::SignalProxyNormal::data_to_slot(data))
        (*static_cast<SlotType*>(slot))(p0);
    }
    catch(...)
    {
       Glib::exception_handlers_invoke();
    }
  }
}

static const Glib::SignalProxyInfo Gesture_signal_end_info =
{
  "end",
  (GCallback) &Gesture_signal_end_callback,
  (GCallback) &Gesture_signal_end_callback
};


static void Gesture_signal_update_callback(GtkGesture* self, GdkEventSequence* p0,void* data)
{
  using namespace Gtk;
  using SlotType = sigc::slot< void,GdkEventSequence* >;

  auto obj = dynamic_cast<Gesture*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
  // Do not try to call a signal on a disassociated wrapper.
  if(obj)
  {
    try
    {
      if(const auto slot = Glib::SignalProxyNormal::data_to_slot(data))
        (*static_cast<SlotType*>(slot))(p0);
    }
    catch(...)
    {
       Glib::exception_handlers_invoke();
    }
  }
}

static const Glib::SignalProxyInfo Gesture_signal_update_info =
{
  "update",
  (GCallback) &Gesture_signal_update_callback,
  (GCallback) &Gesture_signal_update_callback
};


static void Gesture_signal_cancel_callback(GtkGesture* self, GdkEventSequence* p0,void* data)
{
  using namespace Gtk;
  using SlotType = sigc::slot< void,GdkEventSequence* >;

  auto obj = dynamic_cast<Gesture*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
  // Do not try to call a signal on a disassociated wrapper.
  if(obj)
  {
    try
    {
      if(const auto slot = Glib::SignalProxyNormal::data_to_slot(data))
        (*static_cast<SlotType*>(slot))(p0);
    }
    catch(...)
    {
       Glib::exception_handlers_invoke();
    }
  }
}

static const Glib::SignalProxyInfo Gesture_signal_cancel_info =
{
  "cancel",
  (GCallback) &Gesture_signal_cancel_callback,
  (GCallback) &Gesture_signal_cancel_callback
};


static void Gesture_signal_sequence_state_changed_callback(GtkGesture* self, GdkEventSequence* p0,GtkEventSequenceState p1,void* data)
{
  using namespace Gtk;
  using SlotType = sigc::slot< void,GdkEventSequence*,EventSequenceState >;

  auto obj = dynamic_cast<Gesture*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
  // Do not try to call a signal on a disassociated wrapper.
  if(obj)
  {
    try
    {
      if(const auto slot = Glib::SignalProxyNormal::data_to_slot(data))
        (*static_cast<SlotType*>(slot))(p0, ((EventSequenceState)(p1))
);
    }
    catch(...)
    {
       Glib::exception_handlers_invoke();
    }
  }
}

static const Glib::SignalProxyInfo Gesture_signal_sequence_state_changed_info =
{
  "sequence_state_changed",
  (GCallback) &Gesture_signal_sequence_state_changed_callback,
  (GCallback) &Gesture_signal_sequence_state_changed_callback
};


} // anonymous namespace

// static
GType Glib::Value<Gtk::EventSequenceState>::value_type()
{
  return gtk_event_sequence_state_get_type();
}


namespace Glib
{

Glib::RefPtr<Gtk::Gesture> wrap(GtkGesture* object, bool take_copy)
{
  return Glib::RefPtr<Gtk::Gesture>( dynamic_cast<Gtk::Gesture*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} /* namespace Glib */


namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& Gesture_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &Gesture_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_gesture_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void Gesture_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* Gesture_Class::wrap_new(GObject* object)
{
  return new Gesture((GtkGesture*)object);
}


/* The implementation: */

GtkGesture* Gesture::gobj_copy()
{
  reference();
  return gobj();
}

Gesture::Gesture(const Glib::ConstructParams& construct_params)
:
  EventController(construct_params)
{

}

Gesture::Gesture(GtkGesture* castitem)
:
  EventController((GtkEventController*)(castitem))
{}


Gesture::Gesture(Gesture&& src) noexcept
: EventController(std::move(src))
{}

Gesture& Gesture::operator=(Gesture&& src) noexcept
{
  EventController::operator=(std::move(src));
  return *this;
}


Gesture::~Gesture() noexcept
{}


Gesture::CppClassType Gesture::gesture_class_; // initialize static member

GType Gesture::get_type()
{
  return gesture_class_.init().get_type();
}


GType Gesture::get_base_type()
{
  return gtk_gesture_get_type();
}


Gesture::Gesture()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  EventController(Glib::ConstructParams(gesture_class_.init()))
{
  

}

Glib::RefPtr<Gdk::Device> Gesture::get_device()
{
  Glib::RefPtr<Gdk::Device> retvalue = Glib::wrap(gtk_gesture_get_device(gobj()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

Glib::RefPtr<const Gdk::Device> Gesture::get_device() const
{
  return const_cast<Gesture*>(this)->get_device();
}

bool Gesture::set_state(EventSequenceState state)
{
  return gtk_gesture_set_state(gobj(), ((GtkEventSequenceState)(state)));
}

EventSequenceState Gesture::get_sequence_state(GdkEventSequence* sequence) const
{
  return ((EventSequenceState)(gtk_gesture_get_sequence_state(const_cast<GtkGesture*>(gobj()), sequence)));
}

bool Gesture::set_sequence_state(GdkEventSequence* sequence, EventSequenceState state)
{
  return gtk_gesture_set_sequence_state(gobj(), sequence, ((GtkEventSequenceState)(state)));
}

GdkEventSequence* Gesture::get_last_updated_sequence()
{
  return gtk_gesture_get_last_updated_sequence(gobj());
}

const GdkEventSequence* Gesture::get_last_updated_sequence() const
{
  return const_cast<Gesture*>(this)->get_last_updated_sequence();
}

bool Gesture::handles_sequence(GdkEventSequence* sequence) const
{
  return gtk_gesture_handles_sequence(const_cast<GtkGesture*>(gobj()), sequence);
}

const GdkEvent* Gesture::get_last_event(GdkEventSequence* sequence) const
{
  return gtk_gesture_get_last_event(const_cast<GtkGesture*>(gobj()), sequence);
}

bool Gesture::get_point(GdkEventSequence* sequence, double& x, double& y) const
{
  return gtk_gesture_get_point(const_cast<GtkGesture*>(gobj()), sequence, &(x), &(y));
}

bool Gesture::get_bounding_box(Gdk::Rectangle& rect) const
{
  return gtk_gesture_get_bounding_box(const_cast<GtkGesture*>(gobj()), (rect).gobj());
}

bool Gesture::get_bounding_box_center(double& x, double& y) const
{
  return gtk_gesture_get_bounding_box_center(const_cast<GtkGesture*>(gobj()), &(x), &(y));
}

bool Gesture::is_active() const
{
  return gtk_gesture_is_active(const_cast<GtkGesture*>(gobj()));
}

bool Gesture::is_recognized() const
{
  return gtk_gesture_is_recognized(const_cast<GtkGesture*>(gobj()));
}

Glib::RefPtr<Gdk::Window> Gesture::get_window()
{
  Glib::RefPtr<Gdk::Window> retvalue = Glib::wrap(gtk_gesture_get_window(gobj()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

Glib::RefPtr<const Gdk::Window> Gesture::get_window() const
{
  return const_cast<Gesture*>(this)->get_window();
}

void Gesture::set_window(const Glib::RefPtr<Gdk::Window>& window)
{
  gtk_gesture_set_window(gobj(), Glib::unwrap(window));
}

void Gesture::group(const Glib::RefPtr<Gesture>& group_gesture)
{
  gtk_gesture_group(gobj(), Glib::unwrap(group_gesture));
}

void Gesture::ungroup()
{
  gtk_gesture_ungroup(gobj());
}

std::vector< Glib::RefPtr<Gesture> > Gesture::get_group()
{
  return Glib::ListHandler< Glib::RefPtr<Gesture> >::list_to_vector(gtk_gesture_get_group(gobj()), Glib::OWNERSHIP_SHALLOW);
}

std::vector< Glib::RefPtr<const Gesture> > Gesture::get_group() const
{
  return Glib::ListHandler< Glib::RefPtr<const Gesture> >::list_to_vector(gtk_gesture_get_group(const_cast<GtkGesture*>(gobj())), Glib::OWNERSHIP_SHALLOW);
}

bool Gesture::is_grouped_with(const Glib::RefPtr<Gesture>& other) const
{
  return gtk_gesture_is_grouped_with(const_cast<GtkGesture*>(gobj()), Glib::unwrap(other));
}


Glib::SignalProxy< void,GdkEventSequence* > Gesture::signal_begin()
{
  return Glib::SignalProxy< void,GdkEventSequence* >(this, &Gesture_signal_begin_info);
}


Glib::SignalProxy< void,GdkEventSequence* > Gesture::signal_end()
{
  return Glib::SignalProxy< void,GdkEventSequence* >(this, &Gesture_signal_end_info);
}


Glib::SignalProxy< void,GdkEventSequence* > Gesture::signal_update()
{
  return Glib::SignalProxy< void,GdkEventSequence* >(this, &Gesture_signal_update_info);
}


Glib::SignalProxy< void,GdkEventSequence* > Gesture::signal_cancel()
{
  return Glib::SignalProxy< void,GdkEventSequence* >(this, &Gesture_signal_cancel_info);
}


Glib::SignalProxy< void,GdkEventSequence*,EventSequenceState > Gesture::signal_sequence_state_changed()
{
  return Glib::SignalProxy< void,GdkEventSequence*,EventSequenceState >(this, &Gesture_signal_sequence_state_changed_info);
}


Glib::PropertyProxy_ReadOnly< unsigned int > Gesture::property_n_points() const
{
  return Glib::PropertyProxy_ReadOnly< unsigned int >(this, "n-points");
}

Glib::PropertyProxy< Glib::RefPtr<Gdk::Window> > Gesture::property_window() 
{
  return Glib::PropertyProxy< Glib::RefPtr<Gdk::Window> >(this, "window");
}

Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Gdk::Window> > Gesture::property_window() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Gdk::Window> >(this, "window");
}


} // namespace Gtk


