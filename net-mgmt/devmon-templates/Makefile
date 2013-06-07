# Created by: Mark Felder <feld@feld.me>
# $FreeBSD: net-mgmt/devmon-templates/Makefile 319150 2013-05-27 02:16:43Z swills $

PORTNAME=	devmon-templates
DISTVERSION=	20080206
CATEGORIES=	net-mgmt
MASTER_SITES=	SF/devmon/${PORTNAME}/templates/

MAINTAINER=	feld@feld.me
COMMENT=	Device templates for use with devmon

RUN_DEPENDS=	devmon>0:${PORTSDIR}/net-mgmt/devmon

NO_BUILD=	yes

do-install:
	${INSTALL} -d ${PREFIX}/devmon/templates/
	(cd ${WRKSRC} && ${COPYTREE_SHARE} \* ${PREFIX}/devmon/templates/)

.include <bsd.port.mk>
