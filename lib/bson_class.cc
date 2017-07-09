/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 2; tab-width: 2 -*- */
/*!
* bson.cc
* Copyright (C) Diego Rubin 2017 <rubin.diego@gmail.com>
*
* Gnomato is free software: you can redistribute it and/or modify it
* under the terms of the GNU General Public License as published by the
* Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* Gnomato is distributed in the hope that it will be useful, but
* WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
* See the GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License along
* with this program. If not, see <http://www.gnu.org/licenses/>.
*
* Author: Diego Rubin <rubin.diego@gmail.com>
*
*/

#include "bson_class.h"

Bson::Bson()
{
  bson_init(&root);
}

Bson::~Bson()
{
  bson_destroy(&root);
}

void Bson::set_string(string key, string value)
{
  BSON_APPEND_UTF8(&root, key.c_str(), value.c_str());
}

string Bson::get_string(string key)
{
  bson_iter_t iter;
  bson_iter_t field;
  char *content;

  if (bson_iter_init (&iter, &root) &&
      bson_iter_find_descendant (&iter, key.c_str(), &field) &&
      BSON_ITER_HOLDS_UTF8 (&field)) 
  {
    return bson_iter_utf8(&field, NULL);
  }

}

