# Created by: Brian Dean <bsd@FreeBSD.org>
# $FreeBSD: devel/avrdude/Makefile 341395 2014-01-27 12:59:15Z bapt $

PORTNAME=	avrdude
PORTVERSION=	5.11
CATEGORIES=	devel
MASTER_SITES=	${MASTER_SITE_SAVANNAH}
MASTER_SITE_SUBDIR=	avrdude

MAINTAINER=	joerg@FreeBSD.org
COMMENT=	Program for programming the on-chip memory of Atmel AVR CPUs

LICENSE=	GPLv2

GNU_CONFIGURE=	yes
LDFLAGS+=	-L${LOCALBASE}/lib
CFLAGS+=	-I${LOCALBASE}/include
MAKE_JOBS_UNSAFE=	yes

.include <bsd.port.mk>
