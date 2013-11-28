# Created by: Martin Wilke <miwi@FreeBSD.org>
# $FreeBSD: mail/pear-Mail_Mbox/Makefile 334871 2013-11-25 17:59:58Z antoine $

PORTNAME=	Mail_Mbox
PORTVERSION=	0.6.3
CATEGORIES=	mail www pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	PEAR Read and modify Unix MBOXes

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear
RUN_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear

PEAR_AUTOINSTALL=	yes

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
