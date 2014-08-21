# $OpenBSD: Makefile,v 1.39 2013/03/10 22:28:05 espie Exp $

COMMENT=	implementation of classic game Heroes of Might and Magic II

VERSION=	3182
DISTNAME=	fheroes2-src-r${VERSION:S/.//}
PKGNAME=	fheroes2-${VERSION}
DISTFILES=	${DISTNAME}.tgz
WRKDIST=	${WRKDIR}/fheroes-src
WRKSRC=		${WRKDIST}/src
CATEGORIES=	games
MASTER_SITES=	${MASTER_SITE_SOURCEFORGE:=fheroes2/}

HOMEPAGE=	http://fheroes2.sourceforge.net/

# Conditional
PERMIT_PACKAGE_CDROM=	Yes
WANTLIB += SDL SDL_image SDL_mixer SDL_net c SDL_ttf

LIB_DEPENDS=	devel/sdl-image \
		devel/sdl-mixer \
		devel/sdl-net \
		devel/sdl-ttf

MAKE_FLAGS=	CC="${CC}" CFLAGS_NOOPT="${CFLAGS} -I. -DUNIX" WITH_AI="simple" RELEASE="1" 

USE_GMAKE =          Yes

NO_TEST=	Yes

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/dist/fheroes2 ${PREFIX}/bin
	${INSTALL_DATA_DIR} ${PREFIX}/share/fheroes2/maps
	${INSTALL_DATA_DIR} ${PREFIX}/share/fheroes2/data
	${INSTALL_DATA_DIR} ${PREFIX}/share/fheroes2/files/fonts
	${INSTALL_DATA_DIR} ${PREFIX}/share/fheroes2/files/stats
	${INSTALL_DATA_DIR} ${PREFIX}/share/fheroes2/files/sounds
	${INSTALL_DATA_DIR} ${PREFIX}/share/fheroes2/files/save
	${INSTALL_DATA} ${WRKDIST}/fheroes2.cfg ${PREFIX}/share/fheroes2
	${INSTALL_DATA} ${WRKDIST}/files/fonts/* ${PREFIX}/share/fheroes2/files/fonts
	${INSTALL_DATA} ${WRKDIST}/files/stats/* ${PREFIX}/share/fheroes2/files/stats


.include <bsd.port.mk>
