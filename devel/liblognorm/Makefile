# $FreeBSD: devel/liblognorm/Makefile 316333 2013-04-23 10:13:19Z bapt $

PORTNAME=	liblognorm
PORTVERSION=	0.3.5
CATEGORIES=	devel net security
MASTER_SITES=	http://www.liblognorm.com/download/files/download/

MAINTAINER=	pauls@utdallas.edu
COMMENT=	A log normalizer

LICENSE=	GPLv2

LIB_DEPENDS=	ee:${PORTSDIR}/devel/libee \
		estr:${PORTSDIR}/devel/libestr

USES=	pathfix pkgconfig
USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes

.include <bsd.port.mk>
