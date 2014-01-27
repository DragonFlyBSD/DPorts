# Created by: Joe Horn <joehorn@gmail.com>
# $FreeBSD: www/pear-twig/Makefile 340616 2014-01-21 15:54:33Z lwhsu $

PORTNAME=	twig
PORTVERSION=	1.15.0
CATEGORIES=	www pear
MASTER_SITES=	http://pear.twig-project.org/get/
DISTNAME=	Twig-${PORTVERSION}

MAINTAINER=	joehorn@gmail.com
COMMENT=	The flexible, fast, and secure template engine for PHP

LICENSE=	BSD

BUILD_DEPENDS=	${PEARDIR}/.channels/pear.twig-project.org.reg:${PORTSDIR}/devel/pear-channel-twig
RUN_DEPENDS=	${PEARDIR}/.channels/pear.twig-project.org.reg:${PORTSDIR}/devel/pear-channel-twig

PEAR_CHANNEL=	twig
PEAR_AUTOINSTALL=	yes

USE_PHP=	ctype hash
WANT_PHP_CLI=	yes

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
