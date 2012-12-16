# New ports collection makefile for:	libfixbuf
# Date created:		2008-04-13
# Whom:			David Thiel <lx@redundancy.redundancy.org>
#
# $FreeBSD: ports/net/libfixbuf/Makefile,v 1.9 2012/11/17 06:00:04 svnexp Exp $
#

PORTNAME=	libfixbuf
PORTVERSION=	1.0.2
CATEGORIES=	net
MASTER_SITES=	http://tools.netsa.cert.org/releases/ \
		http://redundancy.redundancy.org/mirror/

MAINTAINER=	lx@FreeBSD.org
COMMENT=	Library for using the IP Flow Information Export protocol

GNU_CONFIGURE=	yes
USE_GNOME=	glib20
USE_LDCONFIG=	yes

post-patch:
	@${REINPLACE_CMD} -e 's|echo aout|echo elf|' ${WRKSRC}/configure

.include <bsd.port.mk>
