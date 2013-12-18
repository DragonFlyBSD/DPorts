# Created by: thierry@pompo.net
# $FreeBSD: deskutils/mcal/Makefile 336190 2013-12-11 18:28:10Z bapt $

PORTNAME=	mcal
PORTVERSION=	0.3
CATEGORIES=	deskutils
MASTER_SITES=	SF/lib${PORTNAME}/${PORTNAME}/${PORTVERSION}

MAINTAINER=	thierry@pompo.net
COMMENT=	A libmcal powered cal replacement

LIB_DEPENDS=	libmcal.so:${PORTSDIR}/misc/libmcal

WRKSRC=		${WRKDIR}/${PORTNAME}

NO_STAGE=	yes
post-install:
	@${ECHO} "*****************************************************************************"
	@${ECHO} ""
	@${ECHO} " mcal has been installed in ${PREFIX}/mcal."
	@${ECHO} ""
	@${ECHO} "*****************************************************************************"

.include <bsd.port.mk>
