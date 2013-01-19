# Created by: Vanilla I. Shu <vanilla@FreeBSD.org>
# $FreeBSD: ports/www/flickcurl/Makefile,v 1.33 2012/12/27 16:54:56 svnexp Exp $

PORTNAME=	flickcurl
PORTVERSION=	1.23
CATEGORIES=	www
MASTER_SITES=	http://download.dajobe.org/flickcurl/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	C library for the Flickr API

LIB_DEPENDS=	curl:${PORTSDIR}/ftp/curl

USE_AUTOTOOLS=	libtool
USE_GNOME=	gnomehack ltverhack libxml2 pkgconfig
USE_LDCONFIG=	yes
CONFIGURE_ARGS=	--with-html-dir=${PREFIX}/share/doc

MAN1=		flickrdf.1 flickcurl.1 flickcurl-config.1

.include <bsd.port.mk>
