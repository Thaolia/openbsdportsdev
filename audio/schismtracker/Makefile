# $OpenBSD: Makefile,v 1.1.1.1 2013/11/13 01:09:51 bcallah Exp $

COMMENT =	free module tracker editor and player
# Newer versions are broken.
DISTNAME =	schismtracker-20120105
EXTRACT_SUFX =	.tar.bz2
CATEGORIES =	audio x11

HOMEPAGE =	http://schismtracker.org/
MAINTAINER =	Brian Callahan <bcallah@openbsd.org>

# GPLv2+
PERMIT_PACKAGE_CDROM =	Yes

MODULES= lang/python

WANTLIB += SDL X11 Xext Xv Xxf86misc c m pthread stdc++

MASTER_SITES =	http://schismtracker.org/dl/

LIB_DEPENDS =	devel/sdl

#BUILD_DEPENDS = lang/python

CONFIGURE_STYLE =	gnu
CONFIGURE_ARGS =	PYTHON=/usr/local/bin/python2.7 --disable-mercurial

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/schismtracker ${PREFIX}/bin

.include <bsd.port.mk>
