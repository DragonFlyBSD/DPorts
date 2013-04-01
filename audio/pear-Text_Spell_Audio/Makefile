# Created by: Ditesh Shashikant Gathani <ditesh@gathani.org>
# $FreeBSD: audio/pear-Text_Spell_Audio/Makefile 314271 2013-03-15 07:14:42Z miwi $

PORTNAME=	Text_Spell_Audio
PORTVERSION=	0.1.0
CATEGORIES=	audio pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	Generates a sound clip saying the contents of a string of characters

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear
RUN_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear

PEAR_AUTOINSTALL=	yes

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
