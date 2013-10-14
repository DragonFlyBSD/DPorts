# Created by: Sam Lawrance <boris@brooknet.com.au>
# $FreeBSD: devel/libmimedir/Makefile 327724 2013-09-20 17:13:42Z bapt $

PORTNAME=	libmimedir
PORTVERSION=	0.5.1
CATEGORIES=	devel
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/${PORTNAME}-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Library for parsing RFC2425 MIME Directory Profile information

USES=		bison
USE_AUTOTOOLS=	libtool
USE_LDCONFIG=	yes

NO_STAGE=	yes
regression-test:
	cd ${WRKSRC} && ./test

.include <bsd.port.mk>
