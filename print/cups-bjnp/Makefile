# $FreeBSD: print/cups-bjnp/Makefile 325426 2013-08-27 00:35:46Z db $
#

PORTNAME=	cups-bjnp
PORTVERSION=	1.2.1
PORTREVISION=	4
CATEGORIES=	print
MASTER_SITES=	SF

MAINTAINER=	shurd@sasktel.net
COMMENT=	CUPS backend for Canon USB over IP protocol

LIB_DEPENDS=	cups:${PORTSDIR}/print/cups-client
BUILD_DEPENDS=	${LOCALBASE}/libexec/cups/backend:${PORTSDIR}/print/cups-base

GNU_CONFIGURE=	yes
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

.include <bsd.port.mk>
