# New ports collection makefile for:	libnxml
# Date created:		2006-04-09
# Whom:			Nicola Vitale	<nivit@email.it>
#
# $FreeBSD: ports/textproc/libnxml/Makefile,v 1.26 2012/11/17 06:02:01 svnexp Exp $
#

PORTNAME=	libnxml
PORTVERSION=	0.18.3
PORTREVISION=	1
CATEGORIES=	textproc devel
MASTER_SITES=	http://www.autistici.org/bakunin/libnxml/ \
		http://nivi.interfree.it/distfiles/${PORTNAME}/${PORTVERSION}/

MAINTAINER=	nivit@FreeBSD.org
COMMENT=	A C library for writing XML 1.0/1.1 files or streams

LIB_DEPENDS=	curl.6:${PORTSDIR}/ftp/curl

GNU_CONFIGURE=	yes
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

USE_LDCONFIG=	yes

WANT_GNOME=	yes

pre-patch:
	${gnomehack_PRE_PATCH}

.include <bsd.port.mk>
