// Generated by gmmproc 2.54.0 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gtkmm/cellrendererprogress.h>
#include <gtkmm/private/cellrendererprogress_p.h>


/*
 * Copyright 2004 The gtkmm Development Team
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

Glib::PropertyProxy_Base CellRendererProgress::_property_renderable()
{
  return property_value();
}


} // namespace Gtk


namespace
{
} // anonymous namespace


namespace Glib
{

Gtk::CellRendererProgress* wrap(GtkCellRendererProgress* object, bool take_copy)
{
  return dynamic_cast<Gtk::CellRendererProgress *> (Glib::wrap_auto ((GObject*)(object), take_copy));
}

} /* namespace Glib */

namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& CellRendererProgress_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &CellRendererProgress_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_cell_renderer_progress_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:
  Orientable::add_interface(get_type());

  }

  return *this;
}


void CellRendererProgress_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* CellRendererProgress_Class::wrap_new(GObject* o)
{
  return manage(new CellRendererProgress((GtkCellRendererProgress*)(o)));

}


/* The implementation: */

CellRendererProgress::CellRendererProgress(const Glib::ConstructParams& construct_params)
:
  Gtk::CellRenderer(construct_params)
{
  }

CellRendererProgress::CellRendererProgress(GtkCellRendererProgress* castitem)
:
  Gtk::CellRenderer((GtkCellRenderer*)(castitem))
{
  }


CellRendererProgress::CellRendererProgress(CellRendererProgress&& src) noexcept
: Gtk::CellRenderer(std::move(src))
  , Orientable(std::move(src))
{}

CellRendererProgress& CellRendererProgress::operator=(CellRendererProgress&& src) noexcept
{
  Gtk::CellRenderer::operator=(std::move(src));
  Orientable::operator=(std::move(src));
  return *this;
}

CellRendererProgress::~CellRendererProgress() noexcept
{
  destroy_();
}

CellRendererProgress::CppClassType CellRendererProgress::cellrendererprogress_class_; // initialize static member

GType CellRendererProgress::get_type()
{
  return cellrendererprogress_class_.init().get_type();
}


GType CellRendererProgress::get_base_type()
{
  return gtk_cell_renderer_progress_get_type();
}


CellRendererProgress::CellRendererProgress()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Gtk::CellRenderer(Glib::ConstructParams(cellrendererprogress_class_.init()))
{
  

}


Glib::PropertyProxy< int > CellRendererProgress::property_value() 
{
  return Glib::PropertyProxy< int >(this, "value");
}

Glib::PropertyProxy_ReadOnly< int > CellRendererProgress::property_value() const
{
  return Glib::PropertyProxy_ReadOnly< int >(this, "value");
}

Glib::PropertyProxy< Glib::ustring > CellRendererProgress::property_text() 
{
  return Glib::PropertyProxy< Glib::ustring >(this, "text");
}

Glib::PropertyProxy_ReadOnly< Glib::ustring > CellRendererProgress::property_text() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "text");
}

Glib::PropertyProxy< int > CellRendererProgress::property_pulse() 
{
  return Glib::PropertyProxy< int >(this, "pulse");
}

Glib::PropertyProxy_ReadOnly< int > CellRendererProgress::property_pulse() const
{
  return Glib::PropertyProxy_ReadOnly< int >(this, "pulse");
}

Glib::PropertyProxy< float > CellRendererProgress::property_text_xalign() 
{
  return Glib::PropertyProxy< float >(this, "text-xalign");
}

Glib::PropertyProxy_ReadOnly< float > CellRendererProgress::property_text_xalign() const
{
  return Glib::PropertyProxy_ReadOnly< float >(this, "text-xalign");
}

Glib::PropertyProxy< float > CellRendererProgress::property_text_yalign() 
{
  return Glib::PropertyProxy< float >(this, "text-yalign");
}

Glib::PropertyProxy_ReadOnly< float > CellRendererProgress::property_text_yalign() const
{
  return Glib::PropertyProxy_ReadOnly< float >(this, "text-yalign");
}

Glib::PropertyProxy< bool > CellRendererProgress::property_inverted() 
{
  return Glib::PropertyProxy< bool >(this, "inverted");
}

Glib::PropertyProxy_ReadOnly< bool > CellRendererProgress::property_inverted() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "inverted");
}


} // namespace Gtk


