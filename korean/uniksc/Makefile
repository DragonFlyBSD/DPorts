# New ports collection makefile for: uniksc
# Date created:		15 Oct 2000
# Whom:			cjh
#
# $FreeBSD: ports/korean/uniksc/Makefile,v 1.10 2012/11/17 05:58:47 svnexp Exp $
#

PORTNAME=	uniksc
PORTVERSION=	0.9
CATEGORIES=	korean converters
MASTER_SITES=	ftp://ftp.kr.FreeBSD.org/pub/FreeBSD-kr/distfiles/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Converts data between Korean KSC-5601 and Unicode 3.0 UTF-16

USE_LDCONFIG=	YES

.if ${MACHINE_ARCH:tl} == "amd64"
CFLAGS+=	"-fPIC"
.endif

.include <bsd.port.mk>
