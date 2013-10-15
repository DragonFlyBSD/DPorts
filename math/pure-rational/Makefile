# Created by: Zhihao Yuan <lichray@gmail.com>
# $FreeBSD: math/pure-rational/Makefile 327746 2013-09-20 20:55:04Z bapt $

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

NO_STAGE=	yes
.include "${.CURDIR}/../../lang/pure/bsd.pure.mk"
.include <bsd.port.mk>
