# Created by: Konstantinos Konstantinidis <kkonstan@daemon.gr>
# $FreeBSD: devel/libvanessa_logger/Makefile 323967 2013-07-30 13:45:39Z bapt $

PORTNAME=	libvanessa_logger
PORTVERSION=	0.0.10
CATEGORIES=	devel
MASTER_SITES=	http://horms.net/projects/vanessa/download/vanessa_logger/${PORTVERSION}/
DISTNAME=	vanessa_logger-${PORTVERSION}

MAINTAINER=	thomas@bsdunix.ch
COMMENT=	Library that provides a generic logging layer

USE_BZIP2=	yes
USE_AUTOTOOLS=	libtool
USES=	pathfix
USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes
CONFIGURE_ENV=	ac_cv_have_decl_facilitynames=yes

post-patch:
	@${REINPLACE_CMD} -e '/^SUBDIRS/s|sample debian||' ${WRKSRC}/Makefile.in
	@${REINPLACE_CMD} -e '/extern CODE/d' ${WRKSRC}/libvanessa_logger/vanessa_logger.c

.include <bsd.port.mk>
