# Created by: Junho CHOI <junho.choi@gmail.com>
# $FreeBSD: korean/hcode/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	hcode
PORTVERSION=	2.1.3
PORTREVISION=	1
CATEGORIES=	korean
MASTER_SITES=	http://ftp.kaist.ac.kr/hangul/incoming/ \
		ftp://ftp.kaist.ac.kr/hangul/incoming/ \
		ftp://ftp.kr.FreeBSD.org/pub/FreeBSD-kr/distfiles/
DISTNAME=	hcode2.1-mailpatch3

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Hangul code conversion utility

PLIST_FILES=	bin/hcode

NO_STAGE=	yes
do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/hcode ${PREFIX}/bin

.include <bsd.port.mk>
