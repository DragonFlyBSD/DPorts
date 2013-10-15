# Created by: Chris D. Faulhaber <jedgar@FreeBSD.org>
# $FreeBSD: security/fuzz/Makefile 327769 2013-09-20 22:55:24Z bapt $

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

NO_STAGE=	yes
post-install:
	@${CAT} ${PKGMESSAGE}

.include <bsd.port.mk>
