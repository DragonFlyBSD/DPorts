# Created by: Zhihao Yuan <lichray@gmail.com>
# $FreeBSD: devel/pure-stldict/Makefile 324851 2013-08-17 16:27:24Z gerald $

PORTNAME=	pure-stldict
PORTVERSION=	0.5
CATEGORIES=	devel

MAINTAINER=	lichray@gmail.com
COMMENT=	Pure interface to C++ STL map/unordered_map

USE_PURE=	yes

USE_GCC=	yes
CXXFLAGS+=	-std=c++0x -DHAVE_STD_IS_PERMUTATION

.include "${.CURDIR}/../../lang/pure/bsd.pure.mk"
.include <bsd.port.mk>
