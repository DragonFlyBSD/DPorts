# Created by: Gea-Suan Lin <gslin@gslin.org>
# $FreeBSD: devel/pear-Net_Gearman/Makefile 317810 2013-05-10 14:36:46Z miwi $

PORTNAME=	Net_Gearman
PORTVERSION=	0.2.3
PORTREVISION=	1
CATEGORIES=	devel pear

MAINTAINER=	gslin@gslin.org
COMMENT=	Gearman client libraray for PHP

BUILD_DEPENDS=	${LOCALBASE}/share/pear/PEAR.php:${PORTSDIR}/devel/pear
RUN_DEPENDS=	${LOCALBASE}/share/pear/PEAR.php:${PORTSDIR}/devel/pear

USE_PHP=	json mbstring
PEAR_AUTOINSTALL=	yes

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
