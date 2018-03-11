// Generated by gmmproc 2.54.0 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gtkmm/toolbutton.h>
#include <gtkmm/private/toolbutton_p.h>


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

namespace Gtk
{
#ifndef GTKMM_DISABLE_DEPRECATED
ToolButton::ToolButton(const Gtk::StockID& stock_id)
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Gtk::ToolItem(Glib::ConstructParams(toolbutton_class_.init(), "stock_id", (stock_id).get_c_str(), nullptr))
{}
#endif // GTKMM_DISABLE_DEPRECATED

ToolButton::ToolButton(const Glib::ustring& label)
:
  Glib::ObjectBase(nullptr), //Mark this class as gtkmmproc-generated, rather than a custom class, to allow vfunc optimisations.
  Gtk::ToolItem(Glib::ConstructParams(toolbutton_class_.init(), "label", label.c_str(), nullptr))
{
}

} // namespace Gtk


namespace
{


static const Glib::SignalProxyInfo ToolButton_signal_clicked_info =
{
  "clicked",
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback,
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback
};


} // anonymous namespace


namespace Glib
{

Gtk::ToolButton* wrap(GtkToolButton* object, bool take_copy)
{
  return dynamic_cast<Gtk::ToolButton *> (Glib::wrap_auto ((GObject*)(object), take_copy));
}

} /* namespace Glib */

namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& ToolButton_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &ToolButton_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_tool_button_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void ToolButton_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


  klass->clicked = &clicked_callback;
}


void ToolButton_Class::clicked_callback(GtkToolButton* self)
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
        obj->on_clicked();
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
  if(base && base->clicked)
    (*base->clicked)(self);
}


Glib::ObjectBase* ToolButton_Class::wrap_new(GObject* o)
{
  return manage(new ToolButton((GtkToolButton*)(o)));

}


/* The implementation: */

ToolButton::ToolButton(const Glib::ConstructParams& construct_params)
:
  Gtk::ToolItem(construct_params)
{
  }

ToolButton::ToolButton(GtkToolButton* castitem)
:
  Gtk::ToolItem((GtkToolItem*)(castitem))
{
  }


ToolButton::ToolButton(ToolButton&& src) noexcept
: Gtk::ToolItem(std::move(src))
{}

ToolButton& ToolButton::operator=(ToolButton&& src) noexcept
{
  Gtk::ToolItem::operator=(std::move(src));
  return *this;
}

ToolButton::~ToolButton() noexcept
{
  destroy_();
}

ToolButton::CppClassType ToolButton::toolbutton_class_; // initialize static member

GType ToolButton::get_type()
{
  return toolbutton_class_.init().get_type();
}


GType ToolButton::get_base_type()
{
  return gtk_tool_button_get_type();
}


ToolButton::ToolButton()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Gtk::ToolItem(Glib::ConstructParams(toolbutton_class_.init()))
{
  

}

ToolButton::ToolButton(Widget& icon_widget, const Glib::ustring& label)
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Gtk::ToolItem(Glib::ConstructParams(toolbutton_class_.init(), "icon_widget", (icon_widget).gobj(), "label", label.c_str(), nullptr))
{
  

}

void ToolButton::set_label(const Glib::ustring& label)
{
  gtk_tool_button_set_label(gobj(), label.c_str());
}

Glib::ustring ToolButton::get_label() const
{
  return Glib::convert_const_gchar_ptr_to_ustring(gtk_tool_button_get_label(const_cast<GtkToolButton*>(gobj())));
}

void ToolButton::set_use_underline(bool use_underline)
{
  gtk_tool_button_set_use_underline(gobj(), static_cast<int>(use_underline));
}

bool ToolButton::get_use_underline() const
{
  return gtk_tool_button_get_use_underline(const_cast<GtkToolButton*>(gobj()));
}

#ifndef GTKMM_DISABLE_DEPRECATED
G_GNUC_BEGIN_IGNORE_DEPRECATIONS
void ToolButton::set_stock_id(const Gtk::StockID& stock_id)
{
  gtk_tool_button_set_stock_id(gobj(), (stock_id).get_c_str());
}
G_GNUC_END_IGNORE_DEPRECATIONS
#endif // GTKMM_DISABLE_DEPRECATED

#ifndef GTKMM_DISABLE_DEPRECATED
G_GNUC_BEGIN_IGNORE_DEPRECATIONS
Glib::ustring ToolButton::get_stock_id() const
{
  return Glib::convert_const_gchar_ptr_to_ustring(gtk_tool_button_get_stock_id(const_cast<GtkToolButton*>(gobj())));
}
G_GNUC_END_IGNORE_DEPRECATIONS
#endif // GTKMM_DISABLE_DEPRECATED

void ToolButton::set_icon_name(const Glib::ustring& icon_name)
{
  gtk_tool_button_set_icon_name(gobj(), icon_name.c_str());
}

Glib::ustring ToolButton::get_icon_name() const
{
  return Glib::convert_const_gchar_ptr_to_ustring(gtk_tool_button_get_icon_name(const_cast<GtkToolButton*>(gobj())));
}

void ToolButton::set_icon_widget(Widget& icon_widget)
{
  gtk_tool_button_set_icon_widget(gobj(), (icon_widget).gobj());
}

Widget* ToolButton::get_icon_widget()
{
  return Glib::wrap(gtk_tool_button_get_icon_widget(gobj()));
}

const Widget* ToolButton::get_icon_widget() const
{
  return const_cast<ToolButton*>(this)->get_icon_widget();
}

void ToolButton::set_label_widget(Widget& label_widget)
{
  gtk_tool_button_set_label_widget(gobj(), (label_widget).gobj());
}

Widget* ToolButton::get_label_widget()
{
  return Glib::wrap(gtk_tool_button_get_label_widget(gobj()));
}

const Widget* ToolButton::get_label_widget() const
{
  return const_cast<ToolButton*>(this)->get_label_widget();
}


Glib::SignalProxy< void > ToolButton::signal_clicked()
{
  return Glib::SignalProxy< void >(this, &ToolButton_signal_clicked_info);
}


Glib::PropertyProxy< Glib::ustring > ToolButton::property_label() 
{
  return Glib::PropertyProxy< Glib::ustring >(this, "label");
}

Glib::PropertyProxy_ReadOnly< Glib::ustring > ToolButton::property_label() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "label");
}

Glib::PropertyProxy< bool > ToolButton::property_use_underline() 
{
  return Glib::PropertyProxy< bool >(this, "use-underline");
}

Glib::PropertyProxy_ReadOnly< bool > ToolButton::property_use_underline() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "use-underline");
}

Glib::PropertyProxy< Gtk::Widget* > ToolButton::property_label_widget() 
{
  return Glib::PropertyProxy< Gtk::Widget* >(this, "label-widget");
}

Glib::PropertyProxy_ReadOnly< Gtk::Widget* > ToolButton::property_label_widget() const
{
  return Glib::PropertyProxy_ReadOnly< Gtk::Widget* >(this, "label-widget");
}

#ifndef GTKMM_DISABLE_DEPRECATED

Glib::PropertyProxy< Glib::ustring > ToolButton::property_stock_id() 
{
  return Glib::PropertyProxy< Glib::ustring >(this, "stock-id");
}
#endif // GTKMM_DISABLE_DEPRECATED


#ifndef GTKMM_DISABLE_DEPRECATED

Glib::PropertyProxy_ReadOnly< Glib::ustring > ToolButton::property_stock_id() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "stock-id");
}
#endif // GTKMM_DISABLE_DEPRECATED


Glib::PropertyProxy< Glib::ustring > ToolButton::property_icon_name() 
{
  return Glib::PropertyProxy< Glib::ustring >(this, "icon-name");
}

Glib::PropertyProxy_ReadOnly< Glib::ustring > ToolButton::property_icon_name() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "icon-name");
}

Glib::PropertyProxy< Gtk::Widget > ToolButton::property_icon_widget() 
{
  return Glib::PropertyProxy< Gtk::Widget >(this, "icon-widget");
}

Glib::PropertyProxy_ReadOnly< Gtk::Widget > ToolButton::property_icon_widget() const
{
  return Glib::PropertyProxy_ReadOnly< Gtk::Widget >(this, "icon-widget");
}


void Gtk::ToolButton::on_clicked()
{
  const auto base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->clicked)
    (*base->clicked)(gobj());
}


} // namespace Gtk


