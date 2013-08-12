# Created by: Zhihao Yuan <lichray@gmail.com>
# $FreeBSD: devel/pure-stldict/Makefile 322734 2013-07-10 21:28:56Z bapt $

PORTNAME=	pure-stldict
PORTVERSION=	0.5
CATEGORIES=	devel

MAINTAINER=	lichray@gmail.com
COMMENT=	Pure interface to C++ STL map/unordered_map

USE_PURE=	yes

USE_GCC=	4.6+
CXX=		g++${GCC_DEFAULT_V}
CXXFLAGS+=	-std=c++0x -DHAVE_STD_IS_PERMUTATION

.include "${.CURDIR}/../../lang/pure/bsd.pure.mk"
.include <bsd.port.mk>
