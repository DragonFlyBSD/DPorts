# Created by: ijliao
# $FreeBSD: devel/jclassinfo/Makefile 327723 2013-09-20 17:04:43Z bapt $

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

NO_STAGE=	yes
post-patch:
	@${REINPLACE_CMD} -e "s, docs,," ${WRKSRC}/Makefile.in

.include <bsd.port.mk>
