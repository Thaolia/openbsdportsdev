# $OpenBSD: Makefile

COMMENT =	implementation of classic game Heroes of Might and Magic II

VERSION =	1.0
PKGNAME =	fheroes2-data-${VERSION}
DISTFILES =	h2demo.zip EssentialMapPack.zip AdditionalMapPack.zip MegaMapPack.zip

MAINTAINER =    James Lecocq <jlq@tmp.li>

CATEGORIES =	games
MASTER_SITES =	${MASTER_SITE_SOURCEFORGE:=libsdl-android/}

HOMEPAGE =	http://fheroes2.sourceforge.net/

# Conditional
PERMIT_PACKAGE_CDROM =	Yes


NO_TEST =       Yes
NO_BUILD =      Yes
PKG_ARCH =      *

do-install:
	${INSTALL_DATA_DIR} ${PREFIX}/share/fheroes2/maps
	${INSTALL_DATA_DIR} ${PREFIX}/share/fheroes2/data
	${INSTALL_DATA} ${WRKDIST}/MAPS/*{.mp2,.MP2} ${PREFIX}/share/fheroes2/maps
	${INSTALL_DATA} ${WRKDIST}/MAPS/*{.mx2,.MX2} ${PREFIX}/share/fheroes2/maps
	${INSTALL_DATA} ${WRKDIST}/DATA/* ${PREFIX}/share/fheroes2/data
	${INSTALL_DATA} ${WRKDIST}/license.txt ${PREFIX}/share/fheroes2/data

.include <bsd.port.mk>
