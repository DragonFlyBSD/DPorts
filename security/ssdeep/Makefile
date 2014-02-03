# Created by: Nobutaka Mantani <nobutaka@FreeBSD.org>
# $FreeBSD: security/ssdeep/Makefile 342012 2014-01-31 15:54:10Z miwi $

PORTNAME=	ssdeep
PORTVERSION=	2.10
CATEGORIES=	security
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}-${PORTVERSION}

MAINTAINER=	nobutaka@FreeBSD.org
COMMENT=	A tool for computing context triggered piecewise hashes

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

GNU_CONFIGURE=	yes
USE_AUTOTOOLS=	libtool
USES=		gmake
USE_LDCONFIG=	yes

.include <bsd.port.mk>
