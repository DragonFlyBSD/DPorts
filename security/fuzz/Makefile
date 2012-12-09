# New ports collection makefile for:	fuzz
# Date created:				25 July 2000
# Whom:					Chris D. Faulhaber <jedgar@FreeBSD.org>
#
# $FreeBSD: ports/security/fuzz/Makefile,v 1.10 2012/11/17 06:01:04 svnexp Exp $
#

PORTNAME=	fuzz
PORTVERSION=	0.6
PORTREVISION=	1
CATEGORIES=	security
MASTER_SITES=	SF

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Tool for testing software by bombarding the program with random data

GNU_CONFIGURE=	yes

MAN1=		fuzz.1
PLIST_FILES=	bin/fuzz

post-install:
	@${CAT} ${PKGMESSAGE}

.include <bsd.port.mk>
