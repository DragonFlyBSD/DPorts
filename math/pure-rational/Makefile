# New ports collection makefile for:	pure-rational
# Date created:		2011-10-09
# Whom:			Zhihao Yuan <lichray@gmail.com>
#
# $FreeBSD: ports/math/pure-rational/Makefile,v 1.3 2012/11/17 05:59:28 svnexp Exp $
#

PORTNAME=	pure-rational
PORTVERSION=	0.1
PORTREVISION=	1
CATEGORIES=	math

MAINTAINER=	lichray@gmail.com
COMMENT=	Rational number library for the Pure language

LICENSE=	GPLv3

USE_PURE=	yes
NO_PURE_EXAMPLES=	yes

PLIST_FILES=	lib/pure/rational.pure \
		lib/pure/rat_interval.pure

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/lang/pure/bsd.pure.mk"
.include <bsd.port.post.mk>
