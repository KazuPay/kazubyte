
Debian
====================
This directory contains files used to package kazubyted/kazubyte-qt
for Debian-based Linux systems. If you compile kazubyted/kazubyte-qt yourself, there are some useful files here.

## kazubyte: URI support ##


kazubyte-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install kazubyte-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your kazubyte-qt binary to `/usr/bin`
and the `../../share/pixmaps/kazubyte128.png` to `/usr/share/pixmaps`

kazubyte-qt.protocol (KDE)

