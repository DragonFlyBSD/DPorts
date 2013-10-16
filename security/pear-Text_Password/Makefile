# Created by: Attila Nagy <bra@fsn.hu>
# $FreeBSD: security/pear-Text_Password/Makefile 327769 2013-09-20 22:55:24Z bapt $

PORTNAME=	Text_password
PORTVERSION=	1.1.1
CATEGORIES=	security www pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	PEAR random password creator

USE_PHP=	yes
PEAR_AUTOINSTALL=	yes
WRKSRC=		${WRKDIR}/Text_Password-${PORTVERSION}

NO_STAGE=	yes
.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
