# Created by: Kurt Jaeger <fbsd-ports@opsec.eu>
# $FreeBSD: ports/devel/lfc/Makefile,v 1.27 2013/02/06 16:57:06 svnexp Exp $

PORTNAME=	lfc
PORTVERSION=	1.4.1
CATEGORIES=	devel
MASTER_SITES=	http://www.lemke-it.com/

MAINTAINER=	fbsd-ports@opsec.eu
COMMENT=	Collection of basic c++ classes, used for databases/cego

LICENSE=	GPLv2

GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes
USE_AUTOTOOLS=	autoconf:env

post-patch:
	@${REINPLACE_CMD} 's|-O3||g' ${WRKSRC}/src/Makefile.in

.include <bsd.port.mk>
