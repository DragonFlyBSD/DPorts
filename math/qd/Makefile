# Created by: Nakata Maho <maho@FreeBSD.org>
# $FreeBSD: math/qd/Makefile 331644 2013-10-26 00:52:33Z gerald $

PORTNAME=	qd
PORTVERSION=	2.3.7
PORTREVISION=	2
CATEGORIES=	math
MASTER_SITES=	http://www.cs.berkeley.edu/~yozo/software/

MAINTAINER=	maho@FreeBSD.org
COMMENT=	Double-Double and Quad-Double Arithmetic

GNU_CONFIGURE=	yes

NO_STAGE=	yes
.include <bsd.port.pre.mk>

USE_FORTRAN=	yes
CONFIGURE_ARGS+=	--enable-shared=yes

.include <bsd.port.post.mk>
