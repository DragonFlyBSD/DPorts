# $FreeBSD: multimedia/asdcplib/Makefile 313121 2013-02-28 17:35:18Z olgeni $

PORTNAME=	asdcplib
PORTVERSION=	1.10.48
CATEGORIES=	multimedia
MASTER_SITES=	http://www.cinecert.com/asdcplib/

MAINTAINER=	olgeni@FreeBSD.org
COMMENT=	An open source implementation of SMPTE and the MXF Interop format

LIB_DEPENDS=	expat.6:${PORTSDIR}/textproc/expat2

GNU_CONFIGURE=	yes
CONFIGURE_ARGS+=--with-expat=${LOCALBASE}
USE_LDCONFIG=	yes

.include <bsd.port.mk>
