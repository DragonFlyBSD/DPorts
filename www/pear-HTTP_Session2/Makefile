# Created by: Alex Miller (<asm@asm.kiev.ua>)
# $FreeBSD: www/pear-HTTP_Session2/Makefile 314455 2013-03-17 15:28:55Z miwi $

PORTNAME=	HTTP_Session2
PORTVERSION=	0.7.3
CATEGORIES=	www devel pear

MAINTAINER=	joehorn@gmail.com
COMMENT=	PHP5 Session Handler

LICENSE=	BSD

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear
RUN_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear

USE_DOS2UNIX=	yes
PEAR_AUTOINSTALL=	yes

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
