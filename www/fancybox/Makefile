# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: www/fancybox/Makefile 327776 2013-09-20 23:36:50Z bapt $

PORTNAME=	fancybox
PORTVERSION=	1.3.4
CATEGORIES=	www
MASTER_SITES=	GOOGLE_CODE
DISTNAME=	jquery.${PORTNAME}-${PORTVERSION}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	JavaScript library for image/html/multimedia content display

NO_BUILD=	yes
USE_ZIP=	yes

NO_STAGE=	yes
do-install:
	${MKDIR} ${WWWDIR}/
	cd ${WRKSRC}/${PORTNAME}/ && ${INSTALL_DATA} * ${WWWDIR}/
	${CHOWN} -R ${WWWOWN}:${WWWGRP} ${WWWDIR}/

.include <bsd.port.mk>
