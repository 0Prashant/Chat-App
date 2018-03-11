// Generated by gmmproc 2.54.0 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gtkmm/checkmenuitem.h>
#include <gtkmm/private/checkmenuitem_p.h>


/*
 * Copyright 1998-2002 The gtkmm Development Team
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
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 */

#include <gtk/gtk.h>
#include <gtkmm/misc.h>
#include <gtkmm/label.h>

namespace Gtk
{

CheckMenuItem::CheckMenuItem(const Glib::ustring& label, bool mnemonic)
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Gtk::MenuItem(Glib::ConstructParams(checkmenuitem_class_.init()))
{
  add_accel_label(label, mnemonic); /* Left-aligned label */
}

} // namespace Gtk


namespace
{


static const Glib::SignalProxyInfo CheckMenuItem_signal_toggled_info =
{
  "toggled",
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback,
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback
};


} // anonymous namespace


namespace Glib
{

Gtk::CheckMenuItem* wrap(GtkCheckMenuItem* object, bool take_copy)
{
  return dynamic_cast<Gtk::CheckMenuItem *> (Glib::wrap_auto ((GObject*)(object), take_copy));
}

} /* namespace Glib */

namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& CheckMenuItem_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &CheckMenuItem_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_check_menu_item_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void CheckMenuItem_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);

  klass->draw_indicator = &draw_indicator_vfunc_callback;

  klass->toggled = &toggled_callback;
}

void CheckMenuItem_Class::draw_indicator_vfunc_callback(GtkCheckMenuItem* self, cairo_t* cr)
{
  const auto obj_base = static_cast<Glib::ObjectBase*>(
      Glib::ObjectBase::_get_current_wrapper((GObject*)self));

  // Non-gtkmmproc-generated custom classes implicitly call the default
  // Glib::ObjectBase constructor, which sets is_derived_. But gtkmmproc-
  // generated classes can use this optimisation, which avoids the unnecessary
  // parameter conversions if there is no possibility of the virtual function
  // being overridden:
  if(obj_base && obj_base->is_derived_())
  {
    const auto obj = dynamic_cast<CppObjectType* const>(obj_base);
    if(obj) // This can be NULL during destruction.
    {
      try // Trap C++ exceptions which would normally be lost because this is a C callback.
      {
        // Call the virtual member method, which derived classes might override.
        obj->draw_indicator_vfunc(::Cairo::RefPtr< ::Cairo::Context>(new ::Cairo::Context(cr, false /* has_reference */))
);
        return;
      }
      catch(...)
      {
        Glib::exception_handlers_invoke();
      }
    }
  }

  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(self)) // Get the parent class of the object class (The original underlying C class).
  );

  // Call the original underlying C function:
  if(base && base->draw_indicator)
    (*base->draw_indicator)(self, cr);
}

void CheckMenuItem_Class::toggled_callback(GtkCheckMenuItem* self)
{
  const auto obj_base = static_cast<Glib::ObjectBase*>(
      Glib::ObjectBase::_get_current_wrapper((GObject*)self));

  // Non-gtkmmproc-generated custom classes implicitly call the default
  // Glib::ObjectBase constructor, which sets is_derived_. But gtkmmproc-
  // generated classes can use this optimisation, which avoids the unnecessary
  // parameter conversions if there is no possibility of the virtual function
  // being overridden:
  if(obj_base && obj_base->is_derived_())
  {
    const auto obj = dynamic_cast<CppObjectType* const>(obj_base);
    if(obj) // This can be NULL during destruction.
    {
      try // Trap C++ exceptions which would normally be lost because this is a C callback.
      {
        // Call the virtual member method, which derived classes might override.
        obj->on_toggled();
        return;
      }
      catch(...)
      {
        Glib::exception_handlers_invoke();
      }
    }
  }

  const auto base = static_cast<BaseClassType*>(
        g_type_class_peek_parent(G_OBJECT_GET_CLASS(self)) // Get the parent class of the object class (The original underlying C class).
    );

  // Call the original underlying C function:
  if(base && base->toggled)
    (*base->toggled)(self);
}


Glib::ObjectBase* CheckMenuItem_Class::wrap_new(GObject* o)
{
  return manage(new CheckMenuItem((GtkCheckMenuItem*)(o)));

}


/* The implementation: */

CheckMenuItem::CheckMenuItem(const Glib::ConstructParams& construct_params)
:
  Gtk::MenuItem(construct_params)
{
  }

CheckMenuItem::CheckMenuItem(GtkCheckMenuItem* castitem)
:
  Gtk::MenuItem((GtkMenuItem*)(castitem))
{
  }


CheckMenuItem::CheckMenuItem(CheckMenuItem&& src) noexcept
: Gtk::MenuItem(std::move(src))
{}

CheckMenuItem& CheckMenuItem::operator=(CheckMenuItem&& src) noexcept
{
  Gtk::MenuItem::operator=(std::move(src));
  return *this;
}

CheckMenuItem::~CheckMenuItem() noexcept
{
  destroy_();
}

CheckMenuItem::CppClassType CheckMenuItem::checkmenuitem_class_; // initialize static member

GType CheckMenuItem::get_type()
{
  return checkmenuitem_class_.init().get_type();
}


GType CheckMenuItem::get_base_type()
{
  return gtk_check_menu_item_get_type();
}


CheckMenuItem::CheckMenuItem()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Gtk::MenuItem(Glib::ConstructParams(checkmenuitem_class_.init()))
{
  

}

void CheckMenuItem::set_active(bool is_active)
{
  gtk_check_menu_item_set_active(gobj(), static_cast<int>(is_active));
}

bool CheckMenuItem::get_active() const
{
  return gtk_check_menu_item_get_active(const_cast<GtkCheckMenuItem*>(gobj()));
}

void CheckMenuItem::toggled()
{
  gtk_check_menu_item_toggled(gobj());
}

void CheckMenuItem::set_inconsistent(bool setting)
{
  gtk_check_menu_item_set_inconsistent(gobj(), static_cast<int>(setting));
}

bool CheckMenuItem::get_inconsistent() const
{
  return gtk_check_menu_item_get_inconsistent(const_cast<GtkCheckMenuItem*>(gobj()));
}

void CheckMenuItem::set_draw_as_radio(bool draw_as_radio)
{
  gtk_check_menu_item_set_draw_as_radio(gobj(), static_cast<int>(draw_as_radio));
}

bool CheckMenuItem::get_draw_as_radio() const
{
  return gtk_check_menu_item_get_draw_as_radio(const_cast<GtkCheckMenuItem*>(gobj()));
}


Glib::SignalProxy< void > CheckMenuItem::signal_toggled()
{
  return Glib::SignalProxy< void >(this, &CheckMenuItem_signal_toggled_info);
}


Glib::PropertyProxy< bool > CheckMenuItem::property_active() 
{
  return Glib::PropertyProxy< bool >(this, "active");
}

Glib::PropertyProxy_ReadOnly< bool > CheckMenuItem::property_active() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "active");
}

Glib::PropertyProxy< bool > CheckMenuItem::property_inconsistent() 
{
  return Glib::PropertyProxy< bool >(this, "inconsistent");
}

Glib::PropertyProxy_ReadOnly< bool > CheckMenuItem::property_inconsistent() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "inconsistent");
}

Glib::PropertyProxy< bool > CheckMenuItem::property_draw_as_radio() 
{
  return Glib::PropertyProxy< bool >(this, "draw-as-radio");
}

Glib::PropertyProxy_ReadOnly< bool > CheckMenuItem::property_draw_as_radio() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "draw-as-radio");
}


void Gtk::CheckMenuItem::on_toggled()
{
  const auto base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->toggled)
    (*base->toggled)(gobj());
}

void Gtk::CheckMenuItem::draw_indicator_vfunc(const ::Cairo::RefPtr< ::Cairo::Context>& cr) 
{
  const auto base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->draw_indicator)
  {
    (*base->draw_indicator)(gobj(),(cr)->cobj());
  }
}


} // namespace Gtk


