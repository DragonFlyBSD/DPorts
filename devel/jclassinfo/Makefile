# ex:ts=8
# Ports collection makefile for:	jclassinfo
# Date created:			May 5, 2004
# Whom:				ijliao
#
# $FreeBSD: ports/devel/jclassinfo/Makefile,v 1.16 2012/11/17 05:55:51 svnexp Exp $
#

PORTNAME=	jclassinfo
PORTVERSION=	0.19.1
CATEGORIES=	devel
MASTER_SITES=	SF

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Shows information about Java class, dependencies, and more

USE_AUTOTOOLS=	libtool
USE_GNOME=	gnomehack
GNU_CONFIGURE=	yes
USE_GMAKE=	yes
USE_LDCONFIG=	yes
USE_PKGCONFIG=	yes

MAN1=	jclassinfo.1

post-patch:
	@${REINPLACE_CMD} -e "s, docs,," ${WRKSRC}/Makefile.in

.include <bsd.port.mk>
