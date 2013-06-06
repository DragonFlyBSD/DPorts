# Created by: Zhen REN <bg1tpt@gmail.com>
# $FreeBSD: math/pear-Math_Combinatorics/Makefile 318047 2013-05-13 09:50:36Z miwi $

PORTNAME=	Math_Combinatorics
PORTVERSION=	1.0.0
PORTEPOCH=	1
CATEGORIES=	math pear

MAINTAINER=	ports@FreeBSD.org
COMMENT=	A package that produces combinations and permutations

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear
RUN_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear

PEAR_AUTOINSTALL=	yes

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
