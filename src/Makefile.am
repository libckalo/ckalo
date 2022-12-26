AUTOMAKE_OPTIONS = foreign
pkgconfigdir = $(libdir)/pkgconfig
pkgconfig_DATA = libckalo.pc
lib_LTLIBRARIES = libckalo.la
libckalo_la_SOURCES = detect.c hello.c eat.c
libckalo_la_CFLAGS = -I$(top_srcdir)/include -Wall -Wextra
libckalo_la_LDFLAGS = -version-info 2:0:0
