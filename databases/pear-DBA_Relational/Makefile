# Created by: Martin Wilke <miwi@FreeBSD.org>
# $FreeBSD: databases/pear-DBA_Relational/Makefile 334871 2013-11-25 17:59:58Z antoine $

PORTNAME=	DBA_Relational
PORTVERSION=	0.2.0
CATEGORIES=	databases www pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	Berkely-style database abstraction class

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear
RUN_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear

PORTSCOUT=	skipv:0.19

PEAR_AUTOINSTALL=	yes

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
