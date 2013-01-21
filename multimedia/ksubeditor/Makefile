# New ports collection makefile for:	ksubeditor
# Date created:         Thu Nov 21 15:05:53 UTC 2002
# Whom:			Mario Sergio Fujikawa Ferreira <lioux@FreeBSD.org>
#
# $FreeBSD: ports/multimedia/ksubeditor/Makefile,v 1.24 2012/11/17 05:59:50 svnexp Exp $
#

PORTNAME=	KSubeditor
PORTVERSION=	0.2
PORTREVISION=	10
PORTEPOCH=	1
CATEGORIES=	multimedia kde
MASTER_SITES=	SF/${PORTNAME:tl}/${PORTNAME:tl}/${PORTNAME:tl}-${PORTVERSION}
DISTNAME=	${PORTNAME:tl}-${PORTVERSION}

MAINTAINER=	5u623l20@gmail.com
COMMENT=	A video subtitle editor for KDE

WRKSRC=		${WRKDIR}/${PORTNAME:tl}-${PORTVERSION}

PORTSCOUT=	skipv:0.13
USE_KDELIBS_VER=3
USE_GMAKE=	yes
USE_AUTOTOOLS=	libtool

post-extract:
	@${TOUCH} ${WRKSRC}/stamp-h.in

post-patch:
	@${REINPLACE_CMD} -e 's/-O2//g' -e "s,-lpthread,${PTHREAD_LIBS},g" \
		${WRKSRC}/${CONFIGURE_SCRIPT}

.include <bsd.port.mk>
