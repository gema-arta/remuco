#ifndef UTIL_H_
#define UTIL_H_

///////////////////////////////////////////////////////////////////////////////
//
// includes
//
///////////////////////////////////////////////////////////////////////////////

#include "common.h"

///////////////////////////////////////////////////////////////////////////////
//
// utility constans
//
///////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
//
// utility macros
//
///////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
//
// debug functions
//
///////////////////////////////////////////////////////////////////////////////

void
rem_util_dump_ba(GByteArray *ba);

void
rem_util_dump(guint8 *data, guint len);

void
rem_util_dump_sv(const gchar *prefix, gchar **sv);

///////////////////////////////////////////////////////////////////////////////
//
// utility functions
//
///////////////////////////////////////////////////////////////////////////////

gchar**
rem_util_strv_trunc(gchar **sv, guint len, gboolean sv_const);

gboolean
rem_util_strv_equal_length(gchar **sv1, gchar **sv2);

gboolean
rem_util_strv_equal(gchar **sv1, gchar **sv2);

void
rem_util_conv_sv(gchar **src, gchar ***dst, const gchar *from, const gchar *to);

void
rem_util_conv_s(gchar *src, gchar **dst, const gchar *from, const gchar *to);

gchar**
rem_util_ht2sv(GHashTable *ht, gboolean copy);

gchar**
rem_util_htk2sv(GHashTable *ht, gboolean copy);

gboolean
rem_util_str_is_valid_dbus_name(const gchar *s);

gboolean
rem_util_s2b(const gchar *s);

void
rem_util_create_cache_dir(GError **err);

G_END_DECLS

#endif /*UTIL_H_*/
