# Created by: Martin Wilke <miwi@FreeBSD.org>
# $FreeBSD: databases/pear-DBA_Relational/Makefile 327717 2013-09-20 16:13:47Z bapt $

PORTNAME=	DBA_Relational
PORTVERSION=	0.2.0
CATEGORIES=	databases www pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	Berkely-style database abstraction class

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear
RUN_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear

PORTSCOUT=	skipv:0.19

PEAR_AUTOINSTALL=	yes

NO_STAGE=	yes
.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
