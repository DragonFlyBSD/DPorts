# Created by: Antonio Carlos Venancio Junior (<antonio@inf.ufsc.br>)
# $FreeBSD: www/pear-Text_Wiki/Makefile 314455 2013-03-17 15:28:55Z miwi $

PORTNAME=	Text_Wiki
PORTVERSION=	1.2.1
CATEGORIES=	www pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	Abstracts parsing and rendering rules for Wiki markup

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear
RUN_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear

PEAR_AUTOINSTALL=	yes

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
