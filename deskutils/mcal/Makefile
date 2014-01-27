# Created by: thierry@pompo.net
# $FreeBSD: deskutils/mcal/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	mcal
PORTVERSION=	0.3
CATEGORIES=	deskutils
MASTER_SITES=	SF/lib${PORTNAME}/${PORTNAME}/${PORTVERSION}

MAINTAINER=	thierry@pompo.net
COMMENT=	A libmcal powered cal replacement

DEPRECATED=	Depends on expired misc/libmcal
EXPIRATION_DATE=2014-02-01

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
