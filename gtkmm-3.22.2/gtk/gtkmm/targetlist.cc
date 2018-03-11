// Generated by gmmproc 2.54.0 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gtkmm/targetlist.h>
#include <gtkmm/private/targetlist_p.h>

#include <gtk/gtk.h>

/* Copyright 2002 The gtkmm Development Team
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
#include <gtkmm/textbuffer.h>

namespace Gtk
{

Glib::RefPtr<Gtk::TargetList> TargetList::create(const std::vector<TargetEntry>& targets)
{
  return Glib::wrap(gtk_target_list_new(Glib::ArrayHandler<TargetEntry, TargetEntryTraits>::vector_to_array(targets).data(), targets.size()));
}

void TargetList::add(const std::vector<TargetEntry>& targets)
{
  gtk_target_list_add_table(gobj(), Glib::ArrayHandler<TargetEntry, TargetEntryTraits>::vector_to_array(targets).data(), targets.size());
}

} // namespace Gtk

namespace Glib
{

GType Value<RefPtr<Gtk::TargetList> >::value_type()
{
  return gtk_target_list_get_type();
}

void Value<RefPtr<Gtk::TargetList> >::set(const CppType& data)
{
  set_boxed(Glib::unwrap(data));
}

Value<RefPtr<Gtk::TargetList> >::CppType Value<RefPtr<Gtk::TargetList> >::get() const
{
  return Glib::wrap(static_cast<CType>(get_boxed()), true);
}

} // namespace Glib

namespace
{
} // anonymous namespace


/* Why reinterpret_cast<TargetList*>(gobject) is needed:
 *
 * A TargetList instance is in fact always a GtkTargetList instance.
 * Unfortunately, GtkTargetList cannot be a member of TargetList,
 * because it is an opaque struct.  Also, the C interface does not provide
 * any hooks to install a destroy notification handler, thus we cannot
 * wrap it dynamically either.
 *
 * The cast works because TargetList does not have any member data, and
 * it is impossible to derive from it.  This is ensured by using final on the
 * class and by using = delete on the default constructor.
 */

namespace Glib
{

Glib::RefPtr<Gtk::TargetList> wrap(GtkTargetList* object, bool take_copy)
{
  if(take_copy && object)
    gtk_target_list_ref(object);

  // See the comment at the top of this file, if you want to know why the cast works.
  return Glib::RefPtr<Gtk::TargetList>(reinterpret_cast<Gtk::TargetList*>(object));
}

} // namespace Glib


namespace Gtk
{


void TargetList::reference() const
{
  // See the comment at the top of this file, if you want to know why the cast works.
  gtk_target_list_ref(reinterpret_cast<GtkTargetList*>(const_cast<TargetList*>(this)));
}

void TargetList::unreference() const
{
  // See the comment at the top of this file, if you want to know why the cast works.
  gtk_target_list_unref(reinterpret_cast<GtkTargetList*>(const_cast<TargetList*>(this)));
}

GtkTargetList* TargetList::gobj()
{
  // See the comment at the top of this file, if you want to know why the cast works.
  return reinterpret_cast<GtkTargetList*>(this);
}

const GtkTargetList* TargetList::gobj() const
{
  // See the comment at the top of this file, if you want to know why the cast works.
  return reinterpret_cast<const GtkTargetList*>(this);
}

GtkTargetList* TargetList::gobj_copy() const
{
  // See the comment at the top of this file, if you want to know why the cast works.
  const auto gobject = reinterpret_cast<GtkTargetList*>(const_cast<TargetList*>(this));
  gtk_target_list_ref(gobject);
  return gobject;
}


void TargetList::add(const Glib::ustring& target, TargetFlags flags, guint info)
{
  gtk_target_list_add(gobj(), Gdk::AtomString::to_c_type(target), (guint)(flags), info);
}

void TargetList::add_text_targets(guint info)
{
  gtk_target_list_add_text_targets(gobj(), info);
}

void TargetList::add_rich_text_targets(guint info, bool deserializable, const Glib::RefPtr<TextBuffer>& buffer)
{
  gtk_target_list_add_rich_text_targets(gobj(), info, static_cast<int>(deserializable), Glib::unwrap(buffer));
}

void TargetList::add_image_targets(guint info, bool writable)
{
  gtk_target_list_add_image_targets(gobj(), info, static_cast<int>(writable));
}

void TargetList::add_uri_targets(guint info)
{
  gtk_target_list_add_uri_targets(gobj(), info);
}

void TargetList::remove(const Glib::ustring& target)
{
  gtk_target_list_remove(gobj(), Gdk::AtomString::to_c_type(target));
}

bool TargetList::find(const Glib::ustring& target, guint* info) const
{
  return gtk_target_list_find(const_cast<GtkTargetList*>(gobj()), Gdk::AtomString::to_c_type(target), info);
}


} // namespace Gtk


