# Created by: ijliao
# $FreeBSD: x11-toolkits/viewklass/Makefile 327785 2013-09-20 23:57:47Z bapt $

PORTNAME=	viewklass
PORTVERSION=	0.7.2
PORTREVISION=	1
CATEGORIES=	x11-toolkits
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/ViewKlass-${PORTVERSION}
DISTNAME=	ViewKlass-${PORTVERSION}

MAINTAINER=	araujo@FreeBSD.org
COMMENT=	C++ Framework for Motif

BUILD_DEPENDS=	imake:${PORTSDIR}/devel/imake

USES=		motif
GNU_CONFIGURE=	yes

NO_STAGE=	yes
post-patch:
	@${REINPLACE_CMD} -e 's/^CFLAGS=/CFLAGS+=/g ; \
		s/^CXXFLAGS=/CXXFLAGS+=/g ; \
		s/-g -Wall//g' ${WRKSRC}/Makefile.in

.include <bsd.port.mk>
