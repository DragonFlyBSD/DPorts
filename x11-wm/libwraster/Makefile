# $FreeBSD: ports/x11-wm/libwraster/Makefile,v 1.16 2013/02/08 09:54:24 svnexp Exp $

PORTNAME=	libwraster
PORTREVISION=	0

COMMENT=	Window Maker raster graphics library

LICENSE=	LGPL21

MASTERDIR=	${.CURDIR}/../windowmaker

BUILD_WRKSRC=	${WRKSRC}/wrlib
INSTALL_WRKSRC=	${WRKSRC}/wrlib

PATCHDIR=	# To void equivalent in master port
DESCR=		${.CURDIR}/pkg-descr
PLIST=		${.CURDIR}/pkg-plist

MAN1=		get-wraster-flags.1

LWR_SLAVE=	yes

pre-build:
	cd ${WRKSRC} && ${MAKE} config-paths.h

post-install:
	(cd ${WRKSRC}/doc \
		&& ${INSTALL_MAN} get-wraster-flags.1 ${MANPREFIX}/man/man1)

.include "${MASTERDIR}/Makefile"
