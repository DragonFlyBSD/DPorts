# Created by: Greg Lewis <glewis@FreeBSD.org>
# $FreeBSD: science/udunits/Makefile 325866 2013-09-01 15:33:46Z sunpoet $

PORTNAME=	udunits
PORTVERSION=	2.1.24
PORTREVISION=	1
CATEGORIES=	science math
MASTER_SITES=	ftp://ftp.unidata.ucar.edu/pub/udunits/ \
		LOCAL/sunpoet

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Library for manipulating units of physical quantities

LIB_DEPENDS=	libexpat.so:${PORTSDIR}/textproc/expat2

CONFIGURE_ENV=	ac_cv_header_CUnit_CUnit_h=no
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib
USE_AUTOTOOLS=	libtool
USE_LDCONFIG=	yes

INFO=		udunits2 udunits2lib udunits2prog

post-patch:
	@${REINPLACE_CMD} -e '/install-data-hook$$/d' ${WRKSRC}/lib/Makefile.in

.include <bsd.port.mk>
