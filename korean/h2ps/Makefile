# Created by: Junho CHOI <junho.choi@gmail.com>
# $FreeBSD: korean/h2ps/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	h2ps
PORTVERSION=	2.06
CATEGORIES=	korean print
MASTER_SITES=	ftp://ftp.kr.freebsd.org/pub/FreeBSD-kr/distfiles/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Formats an ASCII file for printing on a postscript printer with Korean char

PLIST_FILES=	bin/h2ps

NO_STAGE=	yes
pre-build:
	@(cd ${WRKSRC}; make clean)

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/h2ps ${PREFIX}/bin

.include <bsd.port.mk>
