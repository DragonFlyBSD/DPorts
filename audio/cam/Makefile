# Created by: erich@FreeBSD.org
# $FreeBSD: audio/cam/Makefile 334767 2013-11-24 19:08:54Z bapt $

PORTNAME=	cam
PORTVERSION=	1.02
CATEGORIES=	audio
MASTER_SITES=	${MASTER_SITE_SUNSITE}
MASTER_SITE_SUBDIR=	apps/sound/mixers
EXTRACT_SUFX=	.tgz

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Cpu's Audio Mixer [curses based]

MAKE_ARGS=	CC="${CC}" CFLAGS="${CFLAGS}" \
		BINDIR="${PREFIX}/bin" \
		MANDIR="${MAN1PREFIX}/man/man1" \
		XEFILE=""

PLIST_FILES=	bin/cam \
		man/man1/cam.1.gz

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/cam ${STAGEDIR}${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/cam.1 ${STAGEDIR}${PREFIX}/man/man1

.include <bsd.port.mk>
