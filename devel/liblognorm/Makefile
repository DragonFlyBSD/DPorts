# $FreeBSD: ports/devel/liblognorm/Makefile,v 1.1 2013/01/15 16:41:33 svnexp Exp $

PORTNAME=	liblognorm
PORTVERSION=	0.3.5
CATEGORIES=	devel net security
MASTER_SITES=	http://www.liblognorm.com/download/files/download/

MAINTAINER=	pauls@utdallas.edu
COMMENT=	A log normalizer

LICENSE=	GPLv2

LIB_DEPENDS=	ee:${PORTSDIR}/devel/libee \
		estr:${PORTSDIR}/devel/libestr

USE_PKGCONFIG=	build
USE_GNOME=	gnomehack
USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes

.include <bsd.port.mk>
