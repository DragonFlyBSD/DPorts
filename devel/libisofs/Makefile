# Created by: J.R. Oldroyd <fbsd@opal.com>
# $FreeBSD: ports/devel/libisofs/Makefile,v 1.10 2012/11/17 05:55:55 svnexp Exp $

PORTNAME=	libisofs
PORTVERSION=	1.2.4
CATEGORIES=	devel
MASTER_SITES=	http://files.libburnia-project.org/releases/

MAINTAINER=	delphij@FreeBSD.org
COMMENT=	Libburnia ISO9660 filesystem creation library

LICENSE=	GPLv2

LIB_DEPENDS=	burn.4:${PORTSDIR}/devel/libburn

GNU_CONFIGURE=	yes
USE_ICONV=	yes
USE_LDCONFIG=	yes

post-patch:
	@${REINPLACE_CMD} -e 's|-lpthread|${PTHREAD_LIBS}|' ${WRKSRC}/configure

.include <bsd.port.mk>
