# Created by: Sergey A. Osokin <osa@FreeBSD.org>
# $FreeBSD: sysutils/ccd2iso/Makefile 327772 2013-09-20 23:05:58Z bapt $

PORTNAME=	ccd2iso
PORTVERSION=	0.9
PORTREVISION?=	1
CATEGORIES=	sysutils
MASTER_SITES=	SF/${PORTNAME}/OldFiles
DISTNAME=	${PORTNAME}

MAINTAINER=	osa@FreeBSD.org
COMMENT=	A CloneCD to ISO converter

PLIST_FILES=	bin/ccd2iso

GNU_CONFIGURE=	yes

NO_STAGE=	yes
do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/src/ccd2iso ${PREFIX}/bin

.include <bsd.port.mk>
