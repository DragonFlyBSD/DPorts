# Created by: Dmitry Sivachenko <demon@FreeBSD.org>
# $FreeBSD: net/zebra-server/Makefile 340019 2014-01-17 09:18:48Z gahr $

PORTNAME=	zebra-server
PORTVERSION=	2.0.55
CATEGORIES=	net
MASTER_SITES=	http://ftp.indexdata.dk/pub/zebra/
DISTNAME=	idzebra-${PORTVERSION}

MAINTAINER=	ben@gibbed.org
COMMENT=	Z39.50/SR server software

LIB_DEPENDS=	libexpat.so:${PORTSDIR}/textproc/expat2 \
		libyaz.so:${PORTSDIR}/net/yaz

GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--with-yaz=${LOCALBASE}/bin \
		--with-tclconfig=${TCL_LIBDIR} \
		--with-iconv=${ICONV_PREFIX} --with-expat=${LOCALBASE}

USES=		iconv tcl
USE_LDCONFIG=	yes

.include <bsd.port.mk>
