# New ports collection makefile for:	kpictorial
# Date created:				2003-10-13
# Whom:					arved
#
# $FreeBSD: ports/games/kpictorial/Makefile,v 1.24 2012/12/30 18:55:58 svnexp Exp $

PORTNAME=	kpictorial
PORTVERSION=	0.9.1
PORTREVISION=	10
CATEGORIES=	games kde
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/${PORTNAME}-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Little logical game for KDE

DEPRECATED=	Depends on QT3; unmaintained
EXPIRATION_DATE=	2013-07-01

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

USE_KDELIBS_VER=	3
USE_AUTOTOOLS=		libtool
USE_GMAKE=		yes

post-patch:
	${REINPLACE_CMD} -e "s,-lpthread,${PTHREAD_LIBS}," ${WRKSRC}/configure

.include <bsd.port.mk>
