# $FreeBSD: head/security/libotr3/Makefile 331737 2013-10-26 21:36:26Z cs $

PORTNAME=	libotr
PORTVERSION=	3.2.1
# Please do not bump PORTREVISION for this port unless you have
# confirmed via testing that it is necessary
PORTREVISION=	1
CATEGORIES=	security net-im net
MASTER_SITES=	http://www.c-s.li/ports/ \
		https://otr.cypherpunks.ca/
PKGNAMESUFFIX=	3
DISTFILES=	${DISTNAME}${EXTRACT_SUFX} ${DISTNAME}${EXTRACT_SUFX}.asc
EXTRACT_ONLY=	${DISTNAME}${EXTRACT_SUFX}

MAINTAINER=	cs@FreeBSD.org
COMMENT=	Portable OTR Messaging Library and toolkit

LICENSE=	LGPL21

BUILD_DEPENDS=	pkgconf:${PORTSDIR}/devel/pkgconf
LIB_DEPENDS=	libgpg-error.so:${PORTSDIR}/security/libgpg-error \
		libgcrypt.so:${PORTSDIR}/security/libgcrypt

CONFLICTS=	libotr-*

USE_AUTOTOOLS=	autoconf libtool
USE_LDCONFIG=	yes

verify: checksum
	gpg --verify ${DISTDIR}/${DISTNAME}${EXTRACT_SUFX}.asc

post-patch:
	@${REINPLACE_CMD} -e 's#^pkgconfigdir .*#pkgconfigdir = ${PREFIX}/libdata/pkgconfig#' \
	    ${WRKSRC}/Makefile.in ${WRKSRC}/Makefile.am

.include <bsd.port.mk>
