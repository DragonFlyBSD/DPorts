# ex:ts=8
# New ports collection makefile for:	awka
# Date created:			May 31, 2001
# Whom:				ijliao
#
# $FreeBSD: ports/lang/awka/Makefile,v 1.8 2012/11/17 05:58:48 svnexp Exp $

PORTNAME=	awka
PORTVERSION=	0.7.5
CATEGORIES=	lang
MASTER_SITES=	http://awka.sourceforge.net/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Converts the AWK script to C, then compiles it

GNU_CONFIGURE=	yes

USE_LDCONFIG=	yes

MANCOMPRESSED=	no
MAN1=	awka.1
MAN5=	awka-elm.5 awka-elmref.5

post-install:
	@${STRIP_CMD} ${PREFIX}/bin/awka

.include <bsd.port.mk>
