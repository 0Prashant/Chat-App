// Generated by gmmproc 2.54.0 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gtkmm/printunixdialog.h>
#include <gtkmm/private/printunixdialog_p.h>


/* Copyright (C) 2006 The gtkmm Development Team
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

#include <gtk/gtkunixprint.h>
#include <gtkmm/label.h>

namespace Gtk
{

PrintUnixDialog::PrintUnixDialog(Gtk::Window& parent, const Glib::ustring& title)
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Gtk::Dialog(Glib::ConstructParams(printunixdialog_class_.init(), "title",title.c_str(), nullptr))
{
  set_transient_for(parent);
}

PrintUnixDialog::PrintUnixDialog(const Glib::ustring& title)
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Gtk::Dialog(Glib::ConstructParams(printunixdialog_class_.init(), "title",title.c_str(), nullptr))
{
}

void PrintUnixDialog::add_custom_tab(const Widget& child, const Glib::ustring& tab_label)
{
  auto label = Gtk::manage(new Gtk::Label(tab_label));
  add_custom_tab(child, *label);
}

} // namespace Gtk

namespace
{
} // anonymous namespace


namespace Glib
{

Gtk::PrintUnixDialog* wrap(GtkPrintUnixDialog* object, bool take_copy)
{
  return dynamic_cast<Gtk::PrintUnixDialog *> (Glib::wrap_auto ((GObject*)(object), take_copy));
}

} /* namespace Glib */

namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& PrintUnixDialog_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &PrintUnixDialog_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_print_unix_dialog_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void PrintUnixDialog_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* PrintUnixDialog_Class::wrap_new(GObject* o)
{
  return new PrintUnixDialog((GtkPrintUnixDialog*)(o)); //top-level windows can not be manage()ed.

}


/* The implementation: */

PrintUnixDialog::PrintUnixDialog(const Glib::ConstructParams& construct_params)
:
  Gtk::Dialog(construct_params)
{
  }

PrintUnixDialog::PrintUnixDialog(GtkPrintUnixDialog* castitem)
:
  Gtk::Dialog((GtkDialog*)(castitem))
{
  }


PrintUnixDialog::PrintUnixDialog(PrintUnixDialog&& src) noexcept
: Gtk::Dialog(std::move(src))
{}

PrintUnixDialog& PrintUnixDialog::operator=(PrintUnixDialog&& src) noexcept
{
  Gtk::Dialog::operator=(std::move(src));
  return *this;
}

PrintUnixDialog::~PrintUnixDialog() noexcept
{
  destroy_();
}

PrintUnixDialog::CppClassType PrintUnixDialog::printunixdialog_class_; // initialize static member

GType PrintUnixDialog::get_type()
{
  return printunixdialog_class_.init().get_type();
}


GType PrintUnixDialog::get_base_type()
{
  return gtk_print_unix_dialog_get_type();
}


void PrintUnixDialog::set_page_setup(const Glib::RefPtr<PageSetup>& page_setup)
{
  gtk_print_unix_dialog_set_page_setup(gobj(), Glib::unwrap(page_setup));
}

Glib::RefPtr<PageSetup> PrintUnixDialog::get_page_setup()
{
  Glib::RefPtr<PageSetup> retvalue = Glib::wrap(gtk_print_unix_dialog_get_page_setup(gobj()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

Glib::RefPtr<const PageSetup> PrintUnixDialog::get_page_setup() const
{
  return const_cast<PrintUnixDialog*>(this)->get_page_setup();
}

void PrintUnixDialog::set_current_page(int current_page)
{
  gtk_print_unix_dialog_set_current_page(gobj(), current_page);
}

int PrintUnixDialog::get_current_page() const
{
  return gtk_print_unix_dialog_get_current_page(const_cast<GtkPrintUnixDialog*>(gobj()));
}

void PrintUnixDialog::set_settings(const Glib::RefPtr<PrintSettings>& settings)
{
  gtk_print_unix_dialog_set_settings(gobj(), Glib::unwrap(settings));
}

Glib::RefPtr<PrintSettings> PrintUnixDialog::get_settings()
{
  Glib::RefPtr<PrintSettings> retvalue = Glib::wrap(gtk_print_unix_dialog_get_settings(gobj()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

Glib::RefPtr<const PrintSettings> PrintUnixDialog::get_settings() const
{
  return const_cast<PrintUnixDialog*>(this)->get_settings();
}

Glib::RefPtr<Printer> PrintUnixDialog::get_selected_printer()
{
  Glib::RefPtr<Printer> retvalue = Glib::wrap(gtk_print_unix_dialog_get_selected_printer(gobj()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

Glib::RefPtr<const Printer> PrintUnixDialog::get_selected_printer() const
{
  return const_cast<PrintUnixDialog*>(this)->get_selected_printer();
}

void PrintUnixDialog::add_custom_tab(const Widget& child, const Widget& tab_label)
{
  gtk_print_unix_dialog_add_custom_tab(gobj(), const_cast<GtkWidget*>((child).gobj()), const_cast<GtkWidget*>((tab_label).gobj()));
}

void PrintUnixDialog::set_manual_capabilities(PrintCapabilities capabilities)
{
  gtk_print_unix_dialog_set_manual_capabilities(gobj(), ((GtkPrintCapabilities)(capabilities)));
}

PrintCapabilities PrintUnixDialog::get_manual_capabilities() const
{
  return (PrintCapabilities)gtk_print_unix_dialog_get_manual_capabilities(const_cast<GtkPrintUnixDialog*>(gobj()));
}

void PrintUnixDialog::get_support_selection(bool support_selection)
{
  gtk_print_unix_dialog_set_support_selection(gobj(), static_cast<int>(support_selection));
}

bool PrintUnixDialog::get_support_selection() const
{
  return gtk_print_unix_dialog_get_support_selection(const_cast<GtkPrintUnixDialog*>(gobj()));
}

void PrintUnixDialog::set_has_selection(bool has_selection)
{
  gtk_print_unix_dialog_set_has_selection(gobj(), static_cast<int>(has_selection));
}

bool PrintUnixDialog::get_has_selection() const
{
  return gtk_print_unix_dialog_get_has_selection(const_cast<GtkPrintUnixDialog*>(gobj()));
}

void PrintUnixDialog::set_embed_page_setup(bool embed)
{
  gtk_print_unix_dialog_set_embed_page_setup(gobj(), static_cast<int>(embed));
}

bool PrintUnixDialog::get_embed_page_setup() const
{
  return gtk_print_unix_dialog_get_embed_page_setup(const_cast<GtkPrintUnixDialog*>(gobj()));
}

bool PrintUnixDialog::get_page_setup_set() const
{
  return gtk_print_unix_dialog_get_page_setup_set(const_cast<GtkPrintUnixDialog*>(gobj()));
}


Glib::PropertyProxy< Glib::RefPtr<PageSetup> > PrintUnixDialog::property_page_setup() 
{
  return Glib::PropertyProxy< Glib::RefPtr<PageSetup> >(this, "page-setup");
}

Glib::PropertyProxy_ReadOnly< Glib::RefPtr<PageSetup> > PrintUnixDialog::property_page_setup() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::RefPtr<PageSetup> >(this, "page-setup");
}

Glib::PropertyProxy< int > PrintUnixDialog::property_current_page() 
{
  return Glib::PropertyProxy< int >(this, "current-page");
}

Glib::PropertyProxy_ReadOnly< int > PrintUnixDialog::property_current_page() const
{
  return Glib::PropertyProxy_ReadOnly< int >(this, "current-page");
}

Glib::PropertyProxy< Glib::RefPtr<PrintSettings> > PrintUnixDialog::property_print_settings() 
{
  return Glib::PropertyProxy< Glib::RefPtr<PrintSettings> >(this, "print-settings");
}

Glib::PropertyProxy_ReadOnly< Glib::RefPtr<PrintSettings> > PrintUnixDialog::property_print_settings() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::RefPtr<PrintSettings> >(this, "print-settings");
}

Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Printer> > PrintUnixDialog::property_selected_printer() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Printer> >(this, "selected-printer");
}

Glib::PropertyProxy< bool > PrintUnixDialog::property_manual_capabilities() 
{
  return Glib::PropertyProxy< bool >(this, "manual-capabilities");
}

Glib::PropertyProxy_ReadOnly< bool > PrintUnixDialog::property_manual_capabilities() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "manual-capabilities");
}

Glib::PropertyProxy< bool > PrintUnixDialog::property_support_selection() 
{
  return Glib::PropertyProxy< bool >(this, "support-selection");
}

Glib::PropertyProxy_ReadOnly< bool > PrintUnixDialog::property_support_selection() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "support-selection");
}

Glib::PropertyProxy< bool > PrintUnixDialog::property_has_selection() 
{
  return Glib::PropertyProxy< bool >(this, "has-selection");
}

Glib::PropertyProxy_ReadOnly< bool > PrintUnixDialog::property_has_selection() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "has-selection");
}

Glib::PropertyProxy< bool > PrintUnixDialog::property_embed_page_setup() 
{
  return Glib::PropertyProxy< bool >(this, "embed-page-setup");
}

Glib::PropertyProxy_ReadOnly< bool > PrintUnixDialog::property_embed_page_setup() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "embed-page-setup");
}


} // namespace Gtk


