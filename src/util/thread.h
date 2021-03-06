/*
 * This file is part of GtkEveMon.
 *
 * GtkEveMon is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * You should have received a copy of the GNU General Public License
 * along with GtkEveMon. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef THREAD_HEADER
#define THREAD_HEADER

#if defined(__linux__) \
    || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) \
    || defined(__DragonFly__) \
    || defined(__APPLE__) \
    || defined(__SunOS)
#  include <unistd.h> // for _POSIX_THREADS
#endif

#if defined(_POSIX_THREADS)
#  include "thread_posix.h"
#elif defined(WIN32)
#  include "thread_win32.h"
#else
#  error "No thread abstraction for this plattform. REPORT THIS!"
#endif

#endif /* THREAD_HEADER */
