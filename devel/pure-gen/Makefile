# Created by: Zhihao Yuan <lichray@gmail.com>
# $FreeBSD: devel/pure-gen/Makefile 322734 2013-07-10 21:28:56Z bapt $

PORTNAME=	pure-gen
PORTVERSION=	0.15
CATEGORIES=	devel

MAINTAINER=	lichray@gmail.com
COMMENT=	A C interface generator for the Pure language

BUILD_DEPENDS=	ghc:${PORTSDIR}/lang/ghc \
		hs-language-c>=0.3.2:${PORTSDIR}/devel/hs-language-c

USE_PURE=	yes

MAN1=		pure-gen.1

CC= 		gcc

.include "${.CURDIR}/../../lang/pure/bsd.pure.mk"
.include <bsd.port.mk>
