// Generated by gmmproc 2.54.0 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gtkmm/icontheme.h>
#include <gtkmm/private/icontheme_p.h>


/* Copyright 2003 The gtkmm Development Team
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

#include <glibmm/vectorutils.h>

#include <gtk/gtk.h> //For gtk_icon_theme_error_get_type().


namespace Gtk
{

void IconTheme::set_search_path(const std::vector<Glib::ustring>& path)
{
  gtk_icon_theme_set_search_path(gobj(), const_cast<const char**>(Glib::ArrayHandler<Glib::ustring>::vector_to_array(path).data ()), path.size());
}

std::vector<Glib::ustring> IconTheme::get_search_path() const
{
  int temp_int = 0;
  gchar** temp_path = nullptr;
  gtk_icon_theme_get_search_path(const_cast<GtkIconTheme*>(gobj()), &temp_path, &temp_int);
  return Glib::ArrayHandler<Glib::ustring>::array_to_vector(temp_path, temp_int, Glib::OWNERSHIP_DEEP);
}

std::vector<int> IconTheme::get_icon_sizes(const Glib::ustring& icon_name) const
{
  int* pArrayInts = gtk_icon_theme_get_icon_sizes(const_cast<GtkIconTheme*>(gobj()), icon_name.c_str());

  //pArrayInts is null-terminated.
  return Glib::ArrayHandler<int>::array_to_vector(pArrayInts, Glib::OWNERSHIP_SHALLOW);
}

std::vector<Glib::ustring> IconTheme::list_icons() const
{
  return Glib::ListHandler<Glib::ustring>::list_to_vector(gtk_icon_theme_list_icons(const_cast<GtkIconTheme*>(gobj()), nullptr /* means all icons according to the C documentation. */ ), Glib::OWNERSHIP_SHALLOW);
}


} // namespace Gtk


namespace
{


static const Glib::SignalProxyInfo IconTheme_signal_changed_info =
{
  "changed",
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback,
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback
};


} // anonymous namespace


Gtk::IconThemeError::IconThemeError(Gtk::IconThemeError::Code error_code, const Glib::ustring& error_message)
:
  Glib::Error (GTK_ICON_THEME_ERROR, error_code, error_message)
{}

Gtk::IconThemeError::IconThemeError(GError* gobject)
:
  Glib::Error (gobject)
{}

Gtk::IconThemeError::Code Gtk::IconThemeError::code() const
{
  return static_cast<Code>(Glib::Error::code());
}

void Gtk::IconThemeError::throw_func(GError* gobject)
{
  throw Gtk::IconThemeError(gobject);
}

// static
GType Glib::Value<Gtk::IconThemeError::Code>::value_type()
{
  return gtk_icon_theme_error_get_type();
}


namespace Glib
{

Glib::RefPtr<Gtk::IconTheme> wrap(GtkIconTheme* object, bool take_copy)
{
  return Glib::RefPtr<Gtk::IconTheme>( dynamic_cast<Gtk::IconTheme*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} /* namespace Glib */


namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& IconTheme_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &IconTheme_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_icon_theme_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void IconTheme_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


  klass->changed = &changed_callback;
}


void IconTheme_Class::changed_callback(GtkIconTheme* self)
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
        obj->on_changed();
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
  if(base && base->changed)
    (*base->changed)(self);
}


Glib::ObjectBase* IconTheme_Class::wrap_new(GObject* object)
{
  return new IconTheme((GtkIconTheme*)object);
}


/* The implementation: */

GtkIconTheme* IconTheme::gobj_copy()
{
  reference();
  return gobj();
}

IconTheme::IconTheme(const Glib::ConstructParams& construct_params)
:
  Glib::Object(construct_params)
{

}

IconTheme::IconTheme(GtkIconTheme* castitem)
:
  Glib::Object((GObject*)(castitem))
{}


IconTheme::IconTheme(IconTheme&& src) noexcept
: Glib::Object(std::move(src))
{}

IconTheme& IconTheme::operator=(IconTheme&& src) noexcept
{
  Glib::Object::operator=(std::move(src));
  return *this;
}


IconTheme::~IconTheme() noexcept
{}


IconTheme::CppClassType IconTheme::icontheme_class_; // initialize static member

GType IconTheme::get_type()
{
  return icontheme_class_.init().get_type();
}


GType IconTheme::get_base_type()
{
  return gtk_icon_theme_get_type();
}


IconTheme::IconTheme()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Glib::Object(Glib::ConstructParams(icontheme_class_.init()))
{
  

}

Glib::RefPtr<IconTheme> IconTheme::create()
{
  return Glib::RefPtr<IconTheme>( new IconTheme() );
}

Glib::RefPtr<IconTheme> IconTheme::get_default()
{

  Glib::RefPtr<IconTheme> retvalue = Glib::wrap(gtk_icon_theme_get_default());
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us
  return retvalue;
}

Glib::RefPtr<IconTheme> IconTheme::get_for_screen(const Glib::RefPtr<Gdk::Screen>& screen)
{

  Glib::RefPtr<IconTheme> retvalue = Glib::wrap(gtk_icon_theme_get_for_screen(Glib::unwrap(screen)));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us
  return retvalue;
}

void IconTheme::set_screen(const Glib::RefPtr<Gdk::Screen>& screen)
{
  gtk_icon_theme_set_screen(gobj(), Glib::unwrap(screen));
}

void IconTheme::append_search_path(const Glib::ustring& path)
{
  gtk_icon_theme_append_search_path(gobj(), path.c_str());
}

void IconTheme::prepend_search_path(const Glib::ustring& path)
{
  gtk_icon_theme_prepend_search_path(gobj(), path.c_str());
}

void IconTheme::add_resource_path(const std::string& path)
{
  gtk_icon_theme_add_resource_path(gobj(), path.c_str());
}

void IconTheme::set_custom_theme(const Glib::ustring& theme_name)
{
  gtk_icon_theme_set_custom_theme(gobj(), theme_name.c_str());
}

bool IconTheme::has_icon(const Glib::ustring& icon_name) const
{
  return gtk_icon_theme_has_icon(const_cast<GtkIconTheme*>(gobj()), icon_name.c_str());
}

IconInfo IconTheme::lookup_icon(const Glib::ustring& icon_name, int size, IconLookupFlags flags) const
{
  return Glib::wrap(gtk_icon_theme_lookup_icon(const_cast<GtkIconTheme*>(gobj()), icon_name.c_str(), size, ((GtkIconLookupFlags)(flags))));
}

IconInfo IconTheme::lookup_icon(const Glib::ustring& icon_name, int size, int scale, IconLookupFlags flags) const
{
  return Glib::wrap(gtk_icon_theme_lookup_icon_for_scale(const_cast<GtkIconTheme*>(gobj()), icon_name.c_str(), size, scale, ((GtkIconLookupFlags)(flags))));
}

IconInfo IconTheme::lookup_icon(const Glib::RefPtr<const Gio::Icon>& icon, int size, IconLookupFlags flags) const
{
  return Glib::wrap(gtk_icon_theme_lookup_by_gicon(const_cast<GtkIconTheme*>(gobj()), const_cast<GIcon*>(Glib::unwrap<Gio::Icon>(icon)), size, ((GtkIconLookupFlags)(flags))));
}

IconInfo IconTheme::lookup_icon(const Glib::RefPtr<const Gio::Icon>& icon, int size, int scale, IconLookupFlags flags) const
{
  return Glib::wrap(gtk_icon_theme_lookup_by_gicon_for_scale(const_cast<GtkIconTheme*>(gobj()), const_cast<GIcon*>(Glib::unwrap<Gio::Icon>(icon)), size, scale, ((GtkIconLookupFlags)(flags))));
}

IconInfo IconTheme::choose_icon(const std::vector<Glib::ustring>& icon_names, int size, IconLookupFlags flags)
{
  return Glib::wrap(gtk_icon_theme_choose_icon(gobj(), const_cast<const gchar**>(Glib::ArrayHandler<Glib::ustring>::vector_to_array(icon_names).data ()), size, ((GtkIconLookupFlags)(flags))));
}

IconInfo IconTheme::choose_icon(const std::vector<Glib::ustring>& icon_names, int size, int scale, IconLookupFlags flags)
{
  return Glib::wrap(gtk_icon_theme_choose_icon_for_scale(gobj(), const_cast<const gchar**>(Glib::ArrayHandler<Glib::ustring>::vector_to_array(icon_names).data ()), size, scale, ((GtkIconLookupFlags)(flags))));
}

Glib::RefPtr<Gdk::Pixbuf> IconTheme::load_icon(const Glib::ustring& icon_name, int size, IconLookupFlags flags) const
{
  GError* gerror = nullptr;
  Glib::RefPtr<Gdk::Pixbuf> retvalue = Glib::wrap(gtk_icon_theme_load_icon(const_cast<GtkIconTheme*>(gobj()), icon_name.c_str(), size, ((GtkIconLookupFlags)(flags)), &(gerror)));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
  return retvalue;
}

Glib::RefPtr<Gdk::Pixbuf> IconTheme::load_icon(const Glib::ustring& icon_name, int size, int scale, IconLookupFlags flags) const
{
  GError* gerror = nullptr;
  Glib::RefPtr<Gdk::Pixbuf> retvalue = Glib::wrap(gtk_icon_theme_load_icon_for_scale(const_cast<GtkIconTheme*>(gobj()), icon_name.c_str(), size, scale, ((GtkIconLookupFlags)(flags)), &(gerror)));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
  return retvalue;
}

::Cairo::RefPtr< ::Cairo::Surface> IconTheme::load_surface(const Glib::ustring& icon_name, int size, int scale, const Glib::RefPtr<Gdk::Window>& for_window, IconLookupFlags flags)
{
  GError* gerror = nullptr;
  ::Cairo::RefPtr< ::Cairo::Surface> retvalue = ::Cairo::RefPtr< ::Cairo::Surface>(new Cairo::Surface(gtk_icon_theme_load_surface(gobj(), icon_name.c_str(), size, scale, Glib::unwrap(for_window), ((GtkIconLookupFlags)(flags)), &(gerror)), true /* do not take reference */));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
  return retvalue;
}

std::vector<Glib::ustring> IconTheme::list_icons(const Glib::ustring& context) const
{
  return Glib::ListHandler<Glib::ustring>::list_to_vector(gtk_icon_theme_list_icons(const_cast<GtkIconTheme*>(gobj()), context.c_str()), Glib::OWNERSHIP_DEEP);
}

std::vector<Glib::ustring> IconTheme::list_contexts() const
{
  return Glib::ListHandler<Glib::ustring>::list_to_vector(gtk_icon_theme_list_contexts(const_cast<GtkIconTheme*>(gobj())), Glib::OWNERSHIP_DEEP);
}

Glib::ustring IconTheme::get_example_icon_name() const
{
  return Glib::convert_return_gchar_ptr_to_ustring(gtk_icon_theme_get_example_icon_name(const_cast<GtkIconTheme*>(gobj())));
}

bool IconTheme::rescan_if_needed()
{
  return gtk_icon_theme_rescan_if_needed(gobj());
}

#ifndef GTKMM_DISABLE_DEPRECATED
G_GNUC_BEGIN_IGNORE_DEPRECATIONS
void IconTheme::add_builtin_icon(const Glib::ustring& icon_name, int size, const Glib::RefPtr<Gdk::Pixbuf>& pixbuf)
{
  gtk_icon_theme_add_builtin_icon(icon_name.c_str(), size, Glib::unwrap(pixbuf));
}
G_GNUC_END_IGNORE_DEPRECATIONS
#endif // GTKMM_DISABLE_DEPRECATED


Glib::SignalProxy< void > IconTheme::signal_changed()
{
  return Glib::SignalProxy< void >(this, &IconTheme_signal_changed_info);
}


void Gtk::IconTheme::on_changed()
{
  const auto base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->changed)
    (*base->changed)(gobj());
}


} // namespace Gtk


