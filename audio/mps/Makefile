# $OpenBSD: Makefile

COMMENT =	CLI program to download videos from YouTube and other sites

MODPY_EGG_VERSION = 0.20.16

DISTNAME =	mps-${MODPY_EGG_VERSION}
CATEGORIES =	audio

HOMEPAGE =	https://github.com/np1/mps

MAINTAINER =	James Lecocq <jlq@tmp.li>

# Public Domain
PERMIT_PACKAGE_CDROM =		Yes

MASTER_SITES =	${MASTER_SITE_PYPI:=m/mps/}

MODULES =	lang/python

RUN_DEPENDS =	x11/mplayer

MODPY_SETUPTOOLS = Yes

NO_TEST =	Yes

PKG_ARCH =	*


.include <bsd.port.mk>
