# Created by: Simun Mikecin <numisemis at yahoo.com>
# $FreeBSD: www/pear-HTML_AJAX/Makefile 327776 2013-09-20 23:36:50Z bapt $

PORTNAME=	HTML_AJAX
PORTVERSION=	0.5.6
CATEGORIES=	www devel pear

MAINTAINER=	numisemis@yahoo.com
COMMENT=	PHP and JavaScript AJAX library

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear
RUN_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear

PEAR_AUTOINSTALL=	yes

NO_STAGE=	yes
.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
