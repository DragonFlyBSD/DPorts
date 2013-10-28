# Created by: Zhihao Yuan <lichray@gmail.com>
# $FreeBSD: devel/pure-stldict/Makefile 331644 2013-10-26 00:52:33Z gerald $

PORTNAME=	pure-stldict
PORTVERSION=	0.5
PORTREVISION=	1
CATEGORIES=	devel

MAINTAINER=	lichray@gmail.com
COMMENT=	Pure interface to C++ STL map/unordered_map

USE_PURE=	yes

USE_GCC=	yes
CXXFLAGS+=	-std=c++0x -DHAVE_STD_IS_PERMUTATION

NO_STAGE=	yes
.include "${.CURDIR}/../../lang/pure/bsd.pure.mk"
.include <bsd.port.mk>
