# Ports collection makefile for:  pear-YAML
# Date created:			  11 July 2011
# Whom:				  Martin Matuska <mm@FreeBSD.org>
#
# $FreeBSD: ports/textproc/pear-YAML/Makefile,v 1.3 2012/11/17 06:02:15 svnexp Exp $
#

PORTNAME=	YAML
PORTVERSION=	1.0.6
CATEGORIES=	textproc www pear
MASTER_SITES=	http://pear.symfony-project.com/get/
PKGNAMEPREFIX=	pear-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	The Symfony YAML Component

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear \
		${PEARDIR}/.channels/pear.symfony-project.com.reg:${PORTSDIR}/devel/pear-channel-symfony

RUN_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear \
		${PEARDIR}/.channels/pear.symfony-project.com.reg:${PORTSDIR}/devel/pear-channel-symfony

PEAR_CHANNEL=	symfony
PEAR_AUTOINSTALL=	yes

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
