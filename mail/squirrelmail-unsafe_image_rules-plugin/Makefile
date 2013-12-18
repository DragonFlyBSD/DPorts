# Created by: Ion-Mihai "IOnut" Tetcu <itetcu@FreeBSD.org>
# $FreeBSD: mail/squirrelmail-unsafe_image_rules-plugin/Makefile 336240 2013-12-12 01:32:34Z adamw $

PORTNAME=	unsafe_image_rules
PORTVERSION=	0.8
PORTREVISION=	2
CATEGORIES=		mail www
DISTNAME=	${PORTNAME:S/-/_/}.${PORTVERSION}-1.4

MAINTAINER=	itetcu@FreeBSD.org
COMMENT=	Determines what unsafe (web) images will be shown

USE_SM_COMPAT=	yes

SQUIRREL_PLUGIN_NAME=	${PORTNAME:S/-/_/}

NO_STAGE=	yes

.include <bsd.port.pre.mk>
.include "${.CURDIR}/../squirrelmail/bsd.squirrelmail.mk"
.include <bsd.port.post.mk>
