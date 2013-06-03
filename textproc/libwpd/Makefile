# Created by: reed@pugetsoundtechnology.com
# $FreeBSD: textproc/libwpd/Makefile 318637 2013-05-21 02:35:34Z fluffy $

PORTNAME=	libwpd
PORTVERSION=	0.9.8
CATEGORIES=	textproc
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/${PORTNAME}-${PORTVERSION}

MAINTAINER=	office@FreeBSD.org
COMMENT=	Tools for importing and exporting WordPerfect(tm) documents

LICENSE=	LGPL21 MPL
LICENSE_COMB=	dual

USE_BZIP2=	yes
GNU_CONFIGURE=	yes
USE_GNOME=	gnomehack libgsf
USE_LDCONFIG=	yes
MAKE_JOBS_SAFE=	yes

CONFIGURE_ARGS+=--disable-werror --without-docs
PLIST_SUB=	MAJVER=${PORTVERSION:R}

post-patch:
	@${REINPLACE_CMD} -e '/^SUBDIRS = / s| docs||' ${WRKSRC}/Makefile.in

.include <bsd.port.mk>
