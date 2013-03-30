# Created by: Thierry Thomas (<thierry@pompo.net>)
# $FreeBSD: databases/pear-DB/Makefile 314451 2013-03-17 14:59:02Z miwi $

PORTNAME=	DB
PORTVERSION=	1.7.14
PORTEPOCH=	1
CATEGORIES=	databases www pear
DISTNAME=	${PORTNAME}-${PORTVERSION:S/.r/RC/}

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	PEAR Database Abstraction Layer

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear
RUN_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear

PEAR_AUTOINSTALL=	yes

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
