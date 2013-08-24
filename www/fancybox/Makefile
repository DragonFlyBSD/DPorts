# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: www/fancybox/Makefile 325163 2013-08-21 17:42:57Z sunpoet $

PORTNAME=	fancybox
PORTVERSION=	1.3.4
CATEGORIES=	www
MASTER_SITES=	GOOGLE_CODE
DISTNAME=	jquery.${PORTNAME}-${PORTVERSION}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	JavaScript library for image/html/multimedia content display

NO_BUILD=	yes
USE_ZIP=	yes

do-install:
	${MKDIR} ${WWWDIR}/
	cd ${WRKSRC}/${PORTNAME}/ && ${INSTALL_DATA} * ${WWWDIR}/
	${CHOWN} -R ${WWWOWN}:${WWWGRP} ${WWWDIR}/

.include <bsd.port.mk>
