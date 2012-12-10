# New ports collection makefile for:	asdcplib
# Date created:		2011-09-17
# Whom:			Jimmy Olgeni <olgeni@FreeBSD.org>
#
# $FreeBSD: ports/multimedia/asdcplib/Makefile,v 1.6 2012/11/17 05:59:47 svnexp Exp $
#

PORTNAME=	asdcplib
PORTVERSION=	1.9.45
CATEGORIES=	multimedia
MASTER_SITES=	http://www.cinecert.com/asdcplib/

MAINTAINER=	olgeni@FreeBSD.org
COMMENT=	An open source implementation of SMPTE and the MXF Interop format

LIB_DEPENDS=	expat.6:${PORTSDIR}/textproc/expat2

GNU_CONFIGURE=	yes
CONFIGURE_ARGS+=--with-expat=${LOCALBASE}
USE_LDCONFIG=	yes

.include <bsd.port.mk>
