# Created by: Zhihao Yuan <lichray@gmail.com>
# $FreeBSD: devel/pure-readline/Makefile 322734 2013-07-10 21:28:56Z bapt $

PORTNAME=	pure-readline
PORTVERSION=	0.1
CATEGORIES=	devel

MAINTAINER=	lichray@gmail.com
COMMENT=	A readline interface for the Pure language

USE_PURE=	yes
NO_PURE_EXAMPLES=	yes

PLIST_FILES=	lib/pure/readline.pure \
		lib/pure/readline.so

.include "${.CURDIR}/../../lang/pure/bsd.pure.mk"
.include <bsd.port.mk>
