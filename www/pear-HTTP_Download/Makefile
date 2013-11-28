# Created by: Antonio Carlos Venancio Junior (<antonio@inf.ufsc.br>)
# $FreeBSD: www/pear-HTTP_Download/Makefile 334871 2013-11-25 17:59:58Z antoine $

PORTNAME=	HTTP_Download
PORTVERSION=	1.1.4
CATEGORIES=	www devel pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	PEAR class to send HTTP downloads

BUILD_DEPENDS=	${PEARDIR}/HTTP/Header.php:${PORTSDIR}/www/pear-HTTP_Header
RUN_DEPENDS=	${PEARDIR}/HTTP/Header.php:${PORTSDIR}/www/pear-HTTP_Header

PEAR_AUTOINSTALL=	yes

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
