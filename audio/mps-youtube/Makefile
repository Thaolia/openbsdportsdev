# $OpenBSD: Makefile

COMMENT =	CLI program to download/streaming music from YouTube

MODPY_EGG_VERSION = 0.01.46

DISTNAME =	mps-youtube-${MODPY_EGG_VERSION}
CATEGORIES =	audio

HOMEPAGE =	https://github.com/np1/mps-youtube

MAINTAINER =    James Lecocq <jlq@tmp.li>

PERMIT_PACKAGE_CDROM =		Yes

MASTER_SITES =	${MASTER_SITE_PYPI:=m/mps-youtube/}

MODULES =	lang/python

RUN_DEPENDS =	x11/mplayer \
		www/py-pafy

MODPY_SETUPTOOLS = Yes

NO_TEST =	Yes

PKG_ARCH =	*


.include <bsd.port.mk>
