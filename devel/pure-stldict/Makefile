# Created by: Zhihao Yuan <lichray@gmail.com>
# $FreeBSD: devel/pure-stldict/Makefile 327724 2013-09-20 17:13:42Z bapt $

PORTNAME=	pure-stldict
PORTVERSION=	0.5
CATEGORIES=	devel

MAINTAINER=	lichray@gmail.com
COMMENT=	Pure interface to C++ STL map/unordered_map

USE_PURE=	yes

USE_GCC=	yes
CXXFLAGS+=	-std=c++0x -DHAVE_STD_IS_PERMUTATION

NO_STAGE=	yes
.include "${.CURDIR}/../../lang/pure/bsd.pure.mk"
.include <bsd.port.mk>
