# Created by: Zhihao Yuan <lichray@gmail.com>
# $FreeBSD: math/pure-rational/Makefile 322734 2013-07-10 21:28:56Z bapt $

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

.include "${.CURDIR}/../../lang/pure/bsd.pure.mk"
.include <bsd.port.mk>
