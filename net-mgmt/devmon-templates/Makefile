# Created by: Mark Felder <feld@FreeBSD.org>
# $FreeBSD: net-mgmt/devmon-templates/Makefile 332419 2013-11-01 23:00:20Z feld $

PORTNAME=	devmon-templates
DISTVERSION=	20080206
CATEGORIES=	net-mgmt
MASTER_SITES=	SF/devmon/${PORTNAME}/templates/

MAINTAINER=	feld@FreeBSD.org
COMMENT=	Device templates for use with devmon

RUN_DEPENDS=	devmon>0:${PORTSDIR}/net-mgmt/devmon

NO_BUILD=	yes

do-install:
	${INSTALL} -d ${STAGEDIR}${PREFIX}/devmon/templates/
	(cd ${WRKSRC} && ${COPYTREE_SHARE} \* ${STAGEDIR}${PREFIX}/devmon/templates/)

.include <bsd.port.mk>
