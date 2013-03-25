# Created by: Thomas Gellekum <tg@FreeBSD.org>
# $FreeBSD: textproc/rman/Makefile 314601 2013-03-18 21:06:42Z eadler $

PORTNAME=	rman
PORTVERSION=	3.2
CATEGORIES=	textproc
MASTER_SITES=	SF/polyglotman/polyglotman/${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Reverse compile man pages from formatted form

MAKE_ARGS=	CC="${CC}" CFLAGS="${CFLAGS}" \
		BINDIR="${PREFIX}/bin" MANDIR="${MAN1PREFIX}/man/man1"

MAN1=		rman.1
PLIST_FILES=	bin/rman

post-install:
	@${STRIP_CMD} ${PREFIX}/bin/rman

.include <bsd.port.mk>
