# Created by: ijliao
# $FreeBSD: devel/jclassinfo/Makefile 316333 2013-04-23 10:13:19Z bapt $

PORTNAME=	jclassinfo
PORTVERSION=	0.19.1
CATEGORIES=	devel
MASTER_SITES=	SF

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Shows information about Java class, dependencies, and more

USE_AUTOTOOLS=	libtool
USES=	pathfix pkgconfig
GNU_CONFIGURE=	yes
USE_GMAKE=	yes
USE_LDCONFIG=	yes

MAN1=	jclassinfo.1

post-patch:
	@${REINPLACE_CMD} -e "s, docs,," ${WRKSRC}/Makefile.in

.include <bsd.port.mk>
