# $OpenBSD: Makefile.inc,v 1.3 2013/03/11 10:50:27 espie Exp $

# Arches suggested by upstream, unsure which work on OpenBSD for sure.
ONLY_FOR_ARCHS ?=	amd64 i386
# We need to figure out which of the following arches work and fix ones
# that don't. We know powerpc is busted.
#ONLY_FOR_ARCHS ?=	arm mips64 mips64el powerpc sparc sparc64

V ?=			0.9.7
SUBST_VARS +=		V

CATEGORIES ?=		devel
HOMEPAGE ?=		http://rada.re/
MAINTAINER ?=		Edd Barrett <edd@openbsd.org>

# LGPLv3
PERMIT_PACKAGE_CDROM ?=		Yes
PERMIT_PACKAGE_FTP ?=		Yes
PERMIT_DISTFILES_FTP ?=		Yes

MASTER_SITES ?=		${HOMEPAGE}/get/
EXTRACT_SUFX ?=         .tar.xz

USE_GMAKE ?=		Yes
CONFIGURE_STYLE ?=	simple

NO_TEST ?=		Yes
