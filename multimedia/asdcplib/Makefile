# $FreeBSD: multimedia/asdcplib/Makefile 328226 2013-09-25 00:54:08Z bdrewery $

PORTNAME=	asdcplib
PORTVERSION=	1.11.49
CATEGORIES=	multimedia
MASTER_SITES=	http://download.cinecert.com/asdcplib/

MAINTAINER=	olgeni@FreeBSD.org
COMMENT=	An open source implementation of SMPTE and the MXF Interop format

LIB_DEPENDS=	expat.6:${PORTSDIR}/textproc/expat2

GNU_CONFIGURE=	yes
CONFIGURE_ARGS+=--with-expat=${LOCALBASE}
USE_LDCONFIG=	yes

.include <bsd.port.mk>
