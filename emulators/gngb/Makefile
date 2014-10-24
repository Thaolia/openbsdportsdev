# $OpenBSD: Makefile.template,v 1.71 2014/07/10 12:33:17 sthen Exp $
# Arches suggested by upstream, unsure which work on OpenBSD for sure.
ONLY_FOR_ARCHS =       amd64 i386

COMMENT =		gbc emulator for linux written in C using the SDL

V =			20060309
DISTNAME =		gngb-${V}

CATEGORIES =		emulators

# GPL
PERMIT_PACKAGE_CDROM =	Yes

HOMEPAGE =		http://m.peponas.free.fr/gngb/

MASTER_SITES =		http://m.peponas.free.fr/gngb/download/

WANTLIB += GL c pthread z SDL

LIB_DEPENDS =   devel/sdl

USE_GMAKE =		Yes
CONFIGURE_STYLE =	gnu

.include <bsd.port.mk>
