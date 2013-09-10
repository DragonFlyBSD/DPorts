# Created by: James Bailie <jimmy@mammothcheese.ca>
# $FreeBSD: www/drood/Makefile 326862 2013-09-10 04:22:02Z tabthorpe $

PORTNAME=	drood
PORTVERSION=	3.6
CATEGORIES=	www
MASTER_SITES=	http://www.mammothcheese.ca/

MAINTAINER=	jimmy@mammothcheese.ca
COMMENT=	Lightweight kqueue-based http/1.1 server

MAN8=		drood.8 plunger.8

MANCOMPRESSED=	yes

post-install:
	@${CAT} ${PKGMESSAGE}

.include <bsd.port.mk>
