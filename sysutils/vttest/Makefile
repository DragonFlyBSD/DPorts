# Created by: Nicola Vitale <nivit@email.it>
# $FreeBSD: sysutils/vttest/Makefile 327772 2013-09-20 23:05:58Z bapt $

PORTNAME=	vttest
PORTVERSION=	2012.05.06
CATEGORIES=	sysutils
MASTER_SITES=	ftp://invisible-island.net/vttest/
DISTNAME=	${PORTNAME}-${PORTVERSION:S,.,,g}
EXTRACT_SUFX=	.tgz

MAINTAINER=	nivit@FreeBSD.org
COMMENT=	A program to test "VT100-compatibility" of terminals

GNU_CONFIGURE=	yes

MAKEFILE=	makefile

MAN1=		vttest.1
PLIST_FILES=	bin/vttest

NO_STAGE=	yes
.include <bsd.port.mk>
